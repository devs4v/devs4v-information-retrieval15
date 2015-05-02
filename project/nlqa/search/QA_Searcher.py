import os, sys, time, threading, psycopg2, copy, lucene

from java.io import File
from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.store import SimpleFSDirectory
from org.apache.lucene.util import Version

from org.apache.lucene.index import DirectoryReader
from org.apache.lucene.queryparser.classic import QueryParser, MultiFieldQueryParser
from org.apache.lucene.search import IndexSearcher


class QA_Searcher():
	""" QA_Searcher : Searches for documents in the Lucene Index """
	def __init__(self, index_dir = None, debug=True):

		self._posts_fields = ['id', 'title', 'question', 'tag', 'extra',]
		self._answer_fields = ['answer_id', 'answer']
	
		# self.connection_string = conn_string

		# self._check_database_connection()

		if index_dir is None or index_dir.strip() == "":
			raise Exception("FATAL Error: Index not defined!")

		self.index_dir = index_dir
		self.debug = debug
		self.verbose_values = False
		
		if self.debug: print "QA_Searcher ver 0.1"

		# lucene.initVM(vmargs=['-Djava.awt.headless=true'])

		
	# def _check_database_connection(self):
	# 	if self.connection_string is None or self.connection_string.strip() == "":
	# 		raise Exception("FATAL Error: Database connection string undefined!")
		
	# 	# self.connection_string = connection_string
	# 	try:
	# 		self.connection = psycopg2.connect(self.connection_string)
	# 	except Exception, e:
	# 		raise e

	# 	return True


	def search(self, input_query=None, max_answers=10):
		''' Searches the given query in the index '''
		if input_query is None:
			return None

		base_dir = '.'
		directory = SimpleFSDirectory(File(os.path.join(base_dir, self.index_dir)))
		searcher = IndexSearcher(DirectoryReader.open(directory))
		analyzer = StandardAnalyzer(Version.LUCENE_CURRENT)
		
		
		# query = QueryParser(Version.LUCENE_CURRENT, "title", analyzer).parse(input_query)
		parser = MultiFieldQueryParser(Version.LUCENE_CURRENT, (self._posts_fields + self._answer_fields), analyzer)
		query = MultiFieldQueryParser.parse(parser, input_query)

		scoreDocs = searcher.search(query, max_answers).scoreDocs
		print "%s total matching documents." % len(scoreDocs)

		docs = []
		for scoreDoc in scoreDocs:
			doc = searcher.doc(scoreDoc.doc)
			doc_dict = dict((field.name(), field.stringValue()) for field in doc.getFields())
			docs.append(doc_dict)
			# print doc
		return docs

	def initializeVM(self):
		try:
			lucene.initVM(vmargs=['-Djava.awt.headless=true'])
		except Exception, e:
			print e