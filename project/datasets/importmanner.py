import sys
import time
from bs4 import BeautifulSoup as souper

start_time = time.time()
TEST = False


if TEST:
	filename = "test.xml"
	q_filename = "questions.tsv"
	a_filename = "answers.tsv"
else:
	filename="seplines_manner.xml"
	q_filename = "manner_questions.tsv"
	a_filename = "manner_answers.tsv"

questions = []
answers = []

def cleanup_tag(content):
	s = content.replace('\n', '').replace('\r', '').replace('\t', ' ').replace('"', '\'')
	s = s.replace("<br>", ' ')
	s = s.replace("<br/>", ' ')
	s = s.replace("<br />", ' ')
	s = s.strip()
	return s

q_fields = ['uri', 'subject', 'content', 'cat', 'maincat', 'subcat', 'yid', 'bestyid', ]
a_fields = ['uri', 'answer']

lines = 0
with open(filename, "r") as f:
	for line in f:
		lines = lines + 1

questions_file = open(q_filename, "w")
answers_file = open(a_filename, "w")

i = 0
j = 0

with open(filename, "r") as f:
	for line in f.readlines():
		i = i + 1
		# print "PARSING LINE #", i
		if not line.startswith('<vespaadd>'):
			continue
		soup = souper(line)
		main = soup.vespaadd.document
		
		q_xmls = [main.uri, main.subject, main.content, main.cat, main.maincat, main.subcat, main.yid, main.best_yid]
		trim_xmls = [main.yid, main.best_yid]
		int_xmls = [main.uri, main.yid, main.best_yid]
		q = {}
		for xml_i in xrange(len(q_xmls)):
			if q_xmls[xml_i] is not None:
				q[q_fields[xml_i]] = cleanup_tag(q_xmls[xml_i].text)
				if q_xmls[xml_i] in trim_xmls:
					q[q_fields[xml_i]] = q[q_fields[xml_i]][1:]
			else:
				if q_xmls[xml_i] in int_xmls:
					q[q_fields[xml_i]] = "0"
				else: 
					q[q_fields[xml_i]] = ""
		
		# print "\tWRITING QUESTION #", i
		for field in q_fields:
			s = q[field].encode("utf-8")
			if field != q_fields[-1]:
				s = s + "\t"
			questions_file.write(s)
		questions_file.write("\r\n")

		for ans in main.nbestanswers.find_all('answer_item'):
			j = j + 1
			answer = {'uri': q['uri'], 'answer': cleanup_tag(ans.text)}
			# print "\t\tWRITING ANSWER #", j
			for field in a_fields:
				s = answer[field].encode("utf-8")
				if field != a_fields[-1]:
					s = s + "\t"
				answers_file.write(s)
			answers_file.write("\r\n")

		percentcomplete = "{0:.2f}".format((float(i)/lines)*100) + "%" + " completed!"
		print "\r", percentcomplete, "\tPrinted ", i, "questions and ", j, "answers",


questions_file.close()
answers_file.close()

print "\r\n", "Execution Time: ",
print  "----%s seconds----"%(time.time() - start_time)