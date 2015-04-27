
import os, sys

if sys.platform == 'win32':
  import jcc, _lucene
else:
  import _lucene

__dir__ = os.path.abspath(os.path.dirname(__file__))

class JavaError(Exception):
  def getJavaException(self):
    return self.args[0]
  def __str__(self):
    writer = StringWriter()
    self.getJavaException().printStackTrace(PrintWriter(writer))
    return "\n".join((super(JavaError, self).__str__(), "    Java stacktrace:", str(writer)))

class InvalidArgsError(Exception):
  pass

_lucene._set_exception_types(JavaError, InvalidArgsError)

VERSION = "4.9.0"
CLASSPATH = [os.path.join(__dir__, "lucene-core-4.9.0.jar"), os.path.join(__dir__, "lucene-analyzers-common-4.9.0.jar"), os.path.join(__dir__, "lucene-memory-4.9.0.jar"), os.path.join(__dir__, "lucene-highlighter-4.9.0.jar"), os.path.join(__dir__, "extensions.jar"), os.path.join(__dir__, "lucene-queries-4.9.0.jar"), os.path.join(__dir__, "lucene-queryparser-4.9.0.jar"), os.path.join(__dir__, "lucene-sandbox-4.9.0.jar"), os.path.join(__dir__, "lucene-analyzers-stempel-4.9.0.jar"), os.path.join(__dir__, "lucene-grouping-4.9.0.jar"), os.path.join(__dir__, "lucene-join-4.9.0.jar"), os.path.join(__dir__, "lucene-facet-4.9.0.jar"), os.path.join(__dir__, "lucene-suggest-4.9.0.jar"), os.path.join(__dir__, "lucene-expressions-4.9.0.jar"), os.path.join(__dir__, "lucene-misc-4.9.0.jar"), os.path.join(__dir__, "antlr-runtime-3.5.jar"), os.path.join(__dir__, "asm-4.1.jar"), os.path.join(__dir__, "asm-commons-4.1.jar")]
CLASSPATH = os.pathsep.join(CLASSPATH)
_lucene.CLASSPATH = CLASSPATH
_lucene._set_function_self(_lucene.initVM, _lucene)

from _lucene import *
from java.io import PrintWriter, StringWriter
