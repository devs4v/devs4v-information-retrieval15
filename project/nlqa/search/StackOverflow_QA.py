import sys, time, threading, psycopg2, copy

from java.io import File
from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.document import Document, Field, FieldType
from org.apache.lucene.index import FieldInfo, IndexWriter, IndexWriterConfig
from org.apache.lucene.store import SimpleFSDirectory
from org.apache.lucene.util import Version



class StackOverflow_QA():
	posts_cols = ['Id', 'PostTypeId', 'ParentId', 'AcceptedAnswerId', 'CreationDate', 'Body', 'OwnerUserId', 'Title', 'Tags', 'Topic',]
	comments_cols = ['id', 'postid', 'score', 'text', 'date', 'userid', 'topic',]

	posts_fields = ['id', 'title', 'content', 'tag', 'extra', 'comment',]

	cols_to_fields = {
						'id'		: 'Id',
						'title'		: 'Title',
						'content'	: 'Body',
						'comment'	: 'text',
						'tag'		: 'Tags',
						'extra'		: 'Topic',
	}

	def __init__(self, conn_string=None, index_dir = None, debug=True):
		'''Initializes members and checks connection string '''
		
		if not self._check_database_connection(conn_string):
			return

		if index_dir is None or index_dir.strip() == "":
			raise Exception("FATAL Error: Index not defined!")

		self.index_dir = index_dir

		if debug:
			self.pull_post_sql = """ SELECT "Id", "Body", "Title", "Tags", "Topic" FROM so_posts LIMIT 10; """
			self.pull_comment_sql = """ SELECT """
		else:
			self.pull_post_sql = """ SELECT "Id", "Body", "Title", "Tags", "Topic" FROM so_posts; """
			self.pull_comment_sql = """ SELECT """

	def _check_database_connection(self, connection_string = None):
		if connection_string is None or connection_string.strip() == "":
			raise Exception("FATAL Error: Database connection string undefined!")
		
		self.connection_string = connection_string
		try:
			self.connection = psycopg2.connect(self.connection_string)
		except Exception, e:
			raise e

		return True
		

	def reindex(self):
		''' Re-indexes the entire database into Index file'''
	    start = time.time()

		# get all posts
		posts = self._tuples_to_dict(self._fetch_all_posts(), posts_fields[:-1])
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
						'id'		: storedField,
						'title'		: indexedField,
						'content'	: indexedField,
						'comment'	: indexedField,
						'tag'		: indexedField,
						'extra'		: indexedField,
		}

		# get their comments
		for post in posts:
			comments = self._fetch_all_comments(post['id'], post['extra'])

			# calculate paths
			reply_chains = self._get_reply_chains(comments)

			doc = Document()
			# make fields
			for i in xrange(len(posts_fields[:-1])):
				doc.add(Field(posts_fields[i]), post[posts_fields[i]], fieldTypes[posts_fields[i]])

			# add comment field
			for comment in reply_chains:
				commented_doc = copy.deepcopy(doc)
				# make comment field
				commented_doc.add(Field("comment"), comment, fieldTypes['comment'])

				# write index
				writer.addDocument(commented_doc)

				del commented_doc

			writer.commit()

		# close index
		writer.close()
		end = time.time() - start

	def _fetch_all_posts(self):
		''' Fetches posts from the database and returns all rows '''
		
		if not self.connection:
			self.connection = psycopg2.connect(self.connection_string)

		cur = connection.cursor('cursor_fetch_so_posts', cursor_factory=psycopg2.extras.DictCursor)

		cur.execute(self.pull_post_sql):
		posts = cur.fetchall()

		return posts



	def _make_reply_tree(self, comment_list = None):
		''' Makes reply tree from comments and returns the reply tree as a dictionary of dictionaries  '''
		if comment_list is not None:
			return list()
		else:
			return comment_list

	def _get_reply_chains(self, comments):
		''' Make chains from the reply tree '''
		return self._make_reply_tree(comments)


	def _tuples_to_dict(self, tuples, mapping):
		a = []
		if tuples is not None and len(tuples[0]) != len(mapping):
			raise Exception('FATAL Error: Invalid mapping from columns to fields')
		for t in tuples:
			d = {}
			for i in xrange(len(mapping)):
				d[mapping[i]] = t[i]
			a.append(d)

		return a