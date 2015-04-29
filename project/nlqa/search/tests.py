from django.test import TestCase
import os, sys
from StackOverflow_QA import StackOverflow_QA as so

class RegexReplaceTestCase(TestCase):
	def setUp(self):
		self.conn_string = "host='localhost'  dbname='shivam' user='shivam' password='maxs'"
		self.index_dir = os.path.join('.')
		self.so_obj = so(self.conn_string, self.index_dir, False)

	def test_replace_multiple_whitespaces(self):
		in_text = "  "
		out_text = ""
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)

	def test_replaces_tags_single_tag_only(self):
		text = "<br>"
		self.assertEqual(self.so_obj._cleanup_tag(text), "")

	def test_replace_tags_single_tag_with_text(self):
		in_text = "<br>This thing"
		out_text = "This thing"
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)

	def test_replace_tags_opening_closing_tags_no_text(self):
		in_text = "<blockquote></blockquote>"
		out_text = ""
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)

	def test_replace_tags_opening_closing_tags_with_text(self):
		in_text = "<blockquote>This thing</blockquote>"
		out_text = "This thing"
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)

	def test_replace_linefeed(self):
		in_text = """
"""
		out_text = ""
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)

	def test_replace_double_linefeed(self):
		in_text = """

"""
		out_text = ""
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)

	def test_replace_tabspace(self):
		in_text = """	"""
		out_text = ""
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)

	def test_replace_linefeed_and_tabspaces(self):
		in_text = """

			"""
		out_text = ""
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)

	def test_replace_linefeed_tab_in_content(self):
		in_text = """
		This tag is not something
	"""
		out_text = "This tag is not something"
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)

	def test_replace_linefeed_tab_tags_in_content(self):
		in_text = """
	This is something that <b>needs to be</b> <cite>cited properly</cite><br> I have no idea how to do that """
		out_text = """This is something that needs to be cited properly I have no idea how to do that"""
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)


	def test_replace_special_chars_slash(self):
		in_text = """ / """
		out_text = ""
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)


	def test_replace_special_chars_colon(self):
		in_text = """this:thing """
		out_text = "this thing"
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)

	def test_replace_special_chars_comma_full_stop(self):
		in_text = """that, thing."""
		out_text = "that thing"
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)

	def test_replace_special_chars_forward_backward_slash(self):
		in_text = """ this thing / that thing or \ oops """
		out_text = "this thing that thing or oops"
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)


	def test_replace_special_chars_hyphen(self):
		in_text = """ self-realization"""
		out_text = "self realization"
		self.assertEqual(self.so_obj._cleanup_tag(in_text), out_text)