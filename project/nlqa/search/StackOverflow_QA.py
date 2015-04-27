import sys, time, threading, psycopg2, copy, lucene

from java.io import File
from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.document import Document, Field, FieldType
from org.apache.lucene.index import FieldInfo, IndexWriter, IndexWriterConfig
from org.apache.lucene.store import SimpleFSDirectory
from org.apache.lucene.util import Version



class StackOverflow_QA():
	posts_cols = ['Id', 'PostTypeId', 'ParentId', 'AcceptedAnswerId', 'CreationDate', 'Body', 'OwnerUserId', 'Title', 'Tags', 'Topic',]
	comments_cols = ['id', 'postid', 'score', 'text', 'date', 'userid', 'topic',]

	_posts_fields = ['id', 'title', 'question', 'tag', 'extra',]
	_answer_fields = ['answer_id', 'answer']
	_comment_fields = ['comment_id', 'comment']
	_cols_to_fields = {
						'id'		: 'Id',
						'title'		: 'Title',
						'question'	: 'Body',
						'tag'		: 'Tags',
						'extra'		: 'Topic',

						'answer_id'	: 'Id',
						'answer'	: 'Body',
						
						'comment_id': 'id',
						'comment'	: 'text',
	}

	def __init__(self, conn_string=None, index_dir = None, debug=True):
		'''Initializes members and checks connection string '''
		self.connection_string = conn_string

		self._check_database_connection()

		if index_dir is None or index_dir.strip() == "":
			raise Exception("FATAL Error: Index not defined!")

		self.index_dir = index_dir

		sqls = {
				'all_question_ids' 	: """ SELECT "Id" FROM so_posts ORDER BY "Id" """,
				'questions' 		: """ SELECT "Id", "Title", "Body", "Tags", "Topic" FROM so_posts WHERE "ParentId" = -1 ORDER BY "Id" """,
				'question_by_id' 	: """ SELECT "Id", "Title", "Body", "Tags", "Topic" FROM so_posts WHERE "Id" = {question_id} ORDER BY "Id" """,
				'answers'			: """ SELECT "Id", "Body" FROM so_posts WHERE "Id" = {question_id} ORDER BY "Id" """,
				'comments'			: """ SELECT id, text FROM so_comments WHERE postid = {post_id} """
			}
		if debug:
			for k in sqls.keys():
				sqls[k] = sqls[k] + " LIMIT 10"
		
	def _check_database_connection(self):
		if self.connection_string is None or self.connection_string.strip() == "":
			raise Exception("FATAL Error: Database connection string undefined!")
		
		# self.connection_string = connection_string
		try:
			self.connection = psycopg2.connect(self.connection_string)
		except Exception, e:
			raise e

		return True
		

	def reindex(self):
		''' Re-indexes the entire database into Index file'''
		start = time.time()

		# get all posts
		posts = self._tuples_to_dict(self._fetch_all_questions(), _posts_fields)
		if not posts:
			raise Exception("FATAL Error: Could not fetch posts from Database")

		# open indexer
		lucene.initVM(vmargs=['-Djava.awt.headless=true'])
		print 'lucene', lucene.VERSION

		store = SimpleFSDirectory(File(self.index_dir))
		analyzer = StandardAnalyzer(Version.LUCENE_CURRENT)
		config = IndexWriterConfig(Version.LUCENE_CURRENT, analyzer)
		config.setOpenMode(IndexWriterConfig.OpenMode.CREATE)
		writer = IndexWriter(store, config)

		indexedField = FieldType()
		indexedField.setIndexed(True)
		indexedField.setStored(True)
		indexedField.setTokenized(True)
		indexedField.setIndexOptions(FieldInfo.IndexOptions.DOCS_AND_FREQS_AND_POSITIONS)

		storedField = FieldType()
		storedField.setIndexed(False)
		storedField.setStored(True)
		storedField.setTokenized(False)
		storedField.setIndexOptions(FieldInfo.DOCS)

		fieldTypes = {
						'type'		: storedField,
						'id'		: storedField,
						'title'		: indexedField,
						'question'	: indexedField,
						'answer'	: indexedField,
						'comment'	: indexedField,
						'tag'		: indexedField,
						'extra'		: indexedField,
		}

		# get their comments
		for post in posts:
			answers = self._tuples_to_dict(_fetch_all_answers(post['id'], post['extra']))

			doc = Document()

			doc.add(Field("type"), "so", fieldTypes['type'])
			# make fields
			for i in xrange(len(posts_fields)):
				doc.add(Field(posts_fields[i]), self._cleanup_tag(post[posts_fields[i]]), fieldTypes[posts_fields[i]])

			# add comment field
			for answer in answers:
				answered_doc = copy.deepcopy(doc)
				# make comment field
				answered_doc.add(Field("answer"), self._cleanup_tag(answer['text']), fieldTypes['answer'])

				# calculate paths
				commented_doc = copy.deepcopy(answered_doc)
				comments = self._comments_to_comment_string(self._fetch_all_comments(answer['id']))

				commented_doc.add(Field("comment"), self._cleanup_tag(comments))

				# write index
				writer.addDocument(commented_doc)

				del answered_doc
				del commented_doc

			writer.commit()

		# close index
		writer.close()
		end = time.time() - start



	def _fetch_all_questions(self):
		''' Fetches posts from the database and returns all rows '''

		return self._make_cursor_execute_sql(
						self.sqls['questions'],
						'cursor_fetch_so_questions',)

	def _fetch_all_answers(self, postid):
		''' Fetches answers according to a postid'''

		return self._make_cursor_execute_sql(
						self.sqls['answers'].format(question_id=int(postid)),
						'cursor_fetch_so_answers',)

	def _fetch_all_comments(self, postid):
		''' Fetches comments related to an answer '''

		return self._make_cursor_execute_sql(
						self.sqls['comments'].format(post_id=postid),
						'cursor_fetch_so_comments',)

	def _make_cursor_execute_sql(self, sql, cursor_name = "cursor_so"):
		self._check_database_connection()

		cur = self.connection.cursor(cursor_name, cursor_factory=psycopg2.extras.DictCursor)
		cur.execute(sql)

		response = cur.fetchall()
		return response

	def _comments_to_comment_string(self, comments):
		return " ".join(comments)

	def _make_reply_tree(self, comment_list = None):
		''' Makes reply tree from comments and returns the reply tree as a dictionary of dictionaries  '''
		if comment_list is not None:
			return list()
		else:
			return comment_list

	def _get_reply_chains(self, comments):
		''' Make chains from the reply tree '''
		return self._make_reply_tree(comments)


	def _tuples_to_dict(self, tuples):
		mapping = self._cols_to_fields
		''' Maps columns to fields '''
		a = []
		if tuples is not None and len(tuples[0]) != len(mapping):
			raise Exception('FATAL Error: Invalid mapping from columns to fields')
		for t in tuples:
			d = {}
			for i in xrange(len(mapping)):
				d[mapping[i]] = t[i]
			a.append(d)

		return a


	def _cleanup_tag(self, content):
		''' cleanup and remove tags and other unwanted tokens from the content '''
		import re

		blankie = " "
		no_tag_regex = re.compile(r'<.*?>')
		no_linefeed_tabspace_regex = re.compile(r'[(\n)(\t)]')
		no_too_many_spaces_regex = re.compile(r' +')
		no_special_chars_regex = re.compile(r"[(\\/)|(:)|(;)|(\\)|(\-)|(,)|(.)]")

		result = re.sub(no_tag_regex, blankie, content)
		result = re.sub(no_linefeed_tabspace_regex, blankie, result)
		result = re.sub(no_special_chars_regex, blankie, result)
		result = re.sub(no_too_many_spaces_regex, blankie, result)
		result = result.lstrip().rstrip()
		return result