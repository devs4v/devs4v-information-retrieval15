# indexertest.py
''' Checks whether the indexer is working correctly or not '''

from StackOverflow_QA import StackOverflow_QA as soqa

INDEX_DIR = "Indexfiles.INDEX"

conn_string = "host='localhost'  dbname='shivam' user='shivam' password='maxs'"

s = soqa(conn_string=conn_string, index_dir=INDEX_DIR)

s.reindex()

