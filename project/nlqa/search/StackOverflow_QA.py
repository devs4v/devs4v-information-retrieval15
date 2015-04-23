import sys, time, threading, psycopg2

from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.document import Document, Field, FieldType
from org.apache.lucene.index import FieldInfo, IndexWriter, IndexWriterConfig
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

	def __init__(self, conn_string=None, debug=True):
		'''Initializes members and checks connection string '''
		
		if not self._check_database_connection(conn_string):
			return

		if debug:
			self.pull_post_sql = """ SELECT "Id", "Body", "Title", "Tags", "Topic" FROM so_posts LIMIT 10; """
			self.pull_comment_sql = """ SELECT """
		else:
			self.pull_post_sql = """ SELECT "Id", "Body", "Title", "Tags", "Topic" FROM so_posts; """
			self.pull_comment_sql = """ SELECT """

	def _check_database_connection(self, connection_string = None):
		if connection_string is None or connection_string.strip() == "":
			throw Exception("FATAL Error: Database connection string undefined!")
		
		self.connection_string = connection_string
		try:
			self.connection = psycopg2.connect(self.connection_string)
		except Exception, e:
			throw e

		return True
		

	def reindex(self):
		''' Re-indexes the entire database into Index file'''
		pass

		# get all posts
		posts = self._fetch_all_posts()
		if not posts:
			throw Exception("FATAL Error: Could not fetch posts from Database")

		# open indexer

		# get their comments
		for post in posts:
			comments = self._fetch_all_comments

			# calculate paths
			reply_chains = self._get_reply_chains(comments)


			# make fields
			# make comment field
			# write index

		# close index

	def _fetch_all_posts(self):
		''' Fetches posts from the database and returns all rows '''
		
		if not self.connection:
			self.connection = psycopg2.connect(self.connection_string)

		cur = connection.cursor('cursor_fetch_so_posts', cursor_factory=psycopg2.extras.DictCursor)

		if cur.execute(self.pull_post_sql):
			posts = cur.fetchall()
		else:
			posts = False

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