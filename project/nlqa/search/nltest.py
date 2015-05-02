import nltk

print "Natural Language toolkit version ", nltk.__version__

sentence = """ How do I delete my facebook account? """

words = nltk.word_tokenize(sentence)

print nltk.pos_tag(words)