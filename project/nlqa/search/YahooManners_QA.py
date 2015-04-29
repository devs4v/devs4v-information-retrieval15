import sys, time, threading, psycopg2, copy, lucene
from psycopg2.extras import DictCursor

from java.io import File
from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.document import Document, Field, FieldType
from org.apache.lucene.index import FieldInfo, IndexWriter, IndexWriterConfig
from org.apache.lucene.store import SimpleFSDirectory
from org.apache.lucene.util import Version



class YahooManners_QA():
	posts_cols = ['uri', 'subject', 'content', 'cat', 'maincat', 'subcat', 'yid', 'bestyid',]
	# comments_cols = ['id', 'postid', 'score', 'text', 'date', 'userid', 'topic',]

	_posts_fields = ['id', 'title', 'question', 'tag', 'extra',]
	_answer_fields = ['answer_id', 'answer']
	# _comment_fields = ['comment_id', 'comment']
	_cols_to_fields = {
						'id'		: 'uri',
						'title'		: 'subject',
						'question'	: 'content',
						'tag'		: 'maincat',
						'extra'		: 'subcat',

						'answer_id'	: 'uri',
						'answer'	: 'answer',
						
						# 'comment_id': 'id',
						# 'comment'	: 'text',
	}

	def __init__(self, conn_string=None, index_dir = None, debug=True):
		'''Initializes members and checks connection string '''
		self.connection_string = conn_string

		self._check_database_connection()

		if index_dir is None or index_dir.strip() == "":
			raise Exception("FATAL Error: Index not defined!")

		self.index_dir = index_dir

		self.sqls = {
				'all_question_ids' 	: """ SELECT uri FROM ym_posts ORDER BY uri """,
				'questions' 		: """ SELECT uri, subject, content, maincat, subcat FROM ym_posts ORDER BY uri """,
				'question_by_id' 	: """ SELECT uri, subject, content, maincat, subcat FROM ym_posts WHERE uri = {question_id} ORDER BY uri """,
				'answers'			: """ SELECT uri, answer FROM ym_posts WHERE uri = {question_id} ORDER BY uri """,
				# 'comments'			: """ SELECT id, text FROM so_comments WHERE postid = {post_id} """
			}

		self.doctype = "ym"
		
		self.debug = debug
		self.verbose_values = False
		if self.debug:
			for k in self.sqls.keys():
				self.sqls[k] = self.sqls[k] + " LIMIT 10"

		if self.debug: print "YahooManners_QA indexer ver 0.1"
		
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
		posts = self._tuples_to_dict(self._fetch_all_questions(), self._posts_fields)
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
		storedField.setIndexOptions(FieldInfo.IndexOptions.DOCS_AND_FREQS)

		fieldTypes = {
						'type'		: storedField,
						'id'		: storedField,
						'title'		: indexedField,
						'question'	: indexedField,
						'answer'	: indexedField,
						# 'comment'	: indexedField,
						'tag'		: indexedField,
						'extra'		: indexedField,
		}

		# get their comments
		num_docs = 0
		for post in posts:
			if self.debug : print "*"*20,"\nIndexing post: ", post['id'], "from ", post['extra']
			if self.debug and self.verbose_values: print post
			answers = self._tuples_to_dict(self._fetch_all_answers(post['id'], post['extra']), self._answer_fields)


			# add comment field
			for answer in answers:
				num_docs += 1
				if self.debug: print "+"*10, "\nMaking new Document"
				doc = Document()
				if self.debug: print "Adding doc type"
				doc.add(Field("type", self.doctype, fieldTypes['type']))
				
				# make fields
				if self.debug: print "Adding post fields"
				for i in xrange(len(self._posts_fields)):
					doc.add(Field(self._posts_fields[i], self._cleanup_tag(post[self._posts_fields[i]]), fieldTypes[self._posts_fields[i]]))


				if self.debug: print "\t Indexing answer: ", answer['answer_id']
				if self.debug and self.verbose_values: print answer
				# answered_doc = copy.deepcopy(doc)
				# make comment field
				doc.add(Field("answer", self._cleanup_tag(answer['answer']), fieldTypes['answer']))

				# calculate paths
				# commented_doc = copy.deepcopy(answered_doc)
				# comments = self._comments_to_comment_string(self._tuples_to_dict(self._fetch_all_comments(answer['id']), self._comment_fields))

				# if self.debug: print "\t\tAdding comments: ", comments
				# commented_doc.add(Field("comment", self._cleanup_tag(comments), fieldTypes['comment']))

				# write index
				if self.debug: print "\tAdding document {doc_id} to index".format(doc_id=post['id'])
				writer.addDocument(doc)

				# del answered_doc
				# del commented_doc

			if self.debug: print "Commiting document to index"
			writer.commit()

		# close index
		if self.debug: print "Closing index write"
		writer.close()
		end = time.time() - start

		print "-"*20
		print "Total time spent in indexing: ", end, "seconds"
		print "Indexed {num_docs} documents".format(num_docs=num_docs)


	def _fetch_all_questions(self):
		''' Fetches posts from the database and returns all rows '''

		return self._make_cursor_execute_sql(
						self.sqls['questions'],
						'cursor_fetch_so_questions',)

	def _fetch_all_answers(self, postid, topic):
		''' Fetches answers according to a postid'''

		return self._make_cursor_execute_sql(
						self.sqls['answers'].format(question_id=int(postid), topic=topic),
						'cursor_fetch_so_answers',)

	def _fetch_all_comments(self, postid):
		''' Fetches comments related to an answer '''

		return self._make_cursor_execute_sql(
						self.sqls['comments'].format(post_id=postid),
						'cursor_fetch_so_comments',)

	def _make_cursor_execute_sql(self, sql, cursor_name = "cursor_so"):
		self._check_database_connection()

		cur = self.connection.cursor(cursor_name, cursor_factory=DictCursor)
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


	def _tuples_to_dict(self, tuples, fields):
		mapping = self._cols_to_fields
		''' Maps columns to fields '''
		a = []
		if tuples is not None and len(tuples[0]) != len(fields):
			raise Exception('FATAL Error: Invalid mapping from columns to fields')
		for t in tuples:
			d = {}
			for i in xrange(len(t)):
				d[fields[i]] = t[i]
			a.append(d)

		return a


	def _cleanup_tag(self, content):
		''' cleanup and remove tags and other unwanted tokens from the content '''
		if type(content) != type("a"):
			if self.debug: print "\t\t\tSkipping cleaning of content '", content, "'"
			return str(content)

		if self.debug: print "\t\t\tCleaning up tag for ", content[:min(50, len(content))]

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