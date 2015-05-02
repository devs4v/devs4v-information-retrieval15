# indexertest.py
''' Checks whether the indexer is working correctly or not '''
import os, shutil, lucene
from StackOverflow_QA import StackOverflow_QA as soqa
from YahooManners_QA import YahooManners_QA as ymqa
from QA_Searcher import QA_Searcher as qas

INDEX_DIR = "Indexfiles.INDEX"

debug = False
verbose_values=False
conn_string = "host='localhost'  dbname='shivam' user='shivam' password='maxs'"
full_path = os.path.abspath(os.path.join(".", INDEX_DIR))
print full_path
if os.path.exists(full_path):
	print "Deleting old Index"
	shutil.rmtree(full_path)
else:
	print "Creating new index"

lucene.initVM(vmargs=['-Djava.awt.headless=true'])

s = soqa(conn_string=conn_string, index_dir=INDEX_DIR, debug=debug, verbose_values=verbose_values)

s.reindex()

y = ymqa(conn_string=conn_string, index_dir=INDEX_DIR, debug=debug, verbose_values=verbose_values)

y.reindex()

qa = qas(index_dir=INDEX_DIR, debug=debug)

while True:
	print
	print "Hit enter with no input to quit."
	command = raw_input("Query:")
	if command == '':
		break

	print
	print "Searching for:", command

	answers = qa.search(command)

	for answer in answers:
		print answer