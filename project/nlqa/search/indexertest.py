# indexertest.py
''' Checks whether the indexer is working correctly or not '''

from StackOverflow_QA import StackOverflow_QA as soqa
from YahooManners_QA import YahooManners_QA as ymqa
from QA_Searcher import QA_Searcher as qas

INDEX_DIR = "Indexfiles.INDEX"

conn_string = "host='localhost'  dbname='shivam' user='shivam' password='maxs'"

# s = soqa(conn_string=conn_string, index_dir=INDEX_DIR)

# s.reindex()

# y = ymqa(conn_string=conn_string, index_dir=INDEX_DIR)

# y.reindex()

qa = qas(conn_string=conn_string, index_dir=INDEX_DIR)

while True:
	print
	print "Hit enter with no input to quit."
	command = raw_input("Query:")
	if command == '':
		break

	print
	print "Searching for:", command

	print qa.search()