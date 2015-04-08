#include <jni.h>
#include <Python.h>
#include "JCCEnv.h"
#include "functions.h"

PyObject *initVM(PyObject *module, PyObject *args, PyObject *kwds);
PyObject *getJavaModule(PyObject *module, const char *parent, const char *name);

namespace java {
  void __install__(PyObject *module);
  void __initialize__(PyObject *module);
}
namespace org {
  void __install__(PyObject *module);
  void __initialize__(PyObject *module);
}

void __install__(PyObject *module)
{
  java::__install__(module);
  org::__install__(module);
}

PyObject *__initialize__(PyObject *module, PyObject *args, PyObject *kwds)
{
  PyObject *env = initVM(module, args, kwds);

  if (env == NULL)
    return NULL;

  try {
    java::__initialize__(module);
    org::__initialize__(module);
    return env;
  } catch (int e) {
    switch(e) {
      case _EXC_JAVA:
      return PyErr_SetJavaError();
      default:
      throw;
    }
  }
}


namespace java {

  namespace io {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace lang {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace text {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace util {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }

  void __install__(PyObject *module)
  {
    module = getJavaModule(module, "", "java");

    io::__install__(module);
    lang::__install__(module);
    text::__install__(module);
    util::__install__(module);
  }

  void __initialize__(PyObject *module)
  {
    module = getJavaModule(module, "", "java");

    io::__initialize__(module);
    lang::__initialize__(module);
    text::__initialize__(module);
    util::__initialize__(module);
  }
}

#include "java/io/Closeable.h"
#include "java/io/Console.h"
#include "java/io/DataInput.h"
#include "java/io/DataInputStream.h"
#include "java/io/DataOutput.h"
#include "java/io/File.h"
#include "java/io/FileDescriptor.h"
#include "java/io/FileFilter.h"
#include "java/io/FileInputStream.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/FilenameFilter.h"
#include "java/io/FilterInputStream.h"
#include "java/io/FilterOutputStream.h"
#include "java/io/Flushable.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/InputStreamReader.h"
#include "java/io/OutputStream.h"
#include "java/io/PrintStream.h"
#include "java/io/PrintWriter.h"
#include "java/io/Reader.h"
#include "java/io/Serializable.h"
#include "java/io/StringReader.h"
#include "java/io/StringWriter.h"
#include "java/io/SyncFailedException.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/io/Writer.h"

namespace java {
  namespace io {


    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "io");

      t_Closeable::install(module);
      t_Console::install(module);
      t_DataInput::install(module);
      t_DataInputStream::install(module);
      t_DataOutput::install(module);
      t_File::install(module);
      t_FileDescriptor::install(module);
      t_FileFilter::install(module);
      t_FileInputStream::install(module);
      t_FileNotFoundException::install(module);
      t_FilenameFilter::install(module);
      t_FilterInputStream::install(module);
      t_FilterOutputStream::install(module);
      t_Flushable::install(module);
      t_IOException::install(module);
      t_InputStream::install(module);
      t_InputStreamReader::install(module);
      t_OutputStream::install(module);
      t_PrintStream::install(module);
      t_PrintWriter::install(module);
      t_Reader::install(module);
      t_Serializable::install(module);
      t_StringReader::install(module);
      t_StringWriter::install(module);
      t_SyncFailedException::install(module);
      t_UnsupportedEncodingException::install(module);
      t_Writer::install(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "io");

      t_Closeable::initialize(module);
      t_Console::initialize(module);
      t_DataInput::initialize(module);
      t_DataInputStream::initialize(module);
      t_DataOutput::initialize(module);
      t_File::initialize(module);
      t_FileDescriptor::initialize(module);
      t_FileFilter::initialize(module);
      t_FileInputStream::initialize(module);
      t_FileNotFoundException::initialize(module);
      t_FilenameFilter::initialize(module);
      t_FilterInputStream::initialize(module);
      t_FilterOutputStream::initialize(module);
      t_Flushable::initialize(module);
      t_IOException::initialize(module);
      t_InputStream::initialize(module);
      t_InputStreamReader::initialize(module);
      t_OutputStream::initialize(module);
      t_PrintStream::initialize(module);
      t_PrintWriter::initialize(module);
      t_Reader::initialize(module);
      t_Serializable::initialize(module);
      t_StringReader::initialize(module);
      t_StringWriter::initialize(module);
      t_SyncFailedException::initialize(module);
      t_UnsupportedEncodingException::initialize(module);
      t_Writer::initialize(module);
    }
  }
}

#include "java/lang/AbstractStringBuilder.h"
#include "java/lang/Appendable.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/Boolean.h"
#include "java/lang/Byte.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Character.h"
#include "java/lang/Class.h"
#include "java/lang/ClassLoader.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/CloneNotSupportedException.h"
#include "java/lang/Cloneable.h"
#include "java/lang/Comparable.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "java/lang/Error.h"
#include "java/lang/Exception.h"
#include "java/lang/Float.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/InstantiationException.h"
#include "java/lang/Integer.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/Iterable.h"
#include "java/lang/Long.h"
#include "java/lang/NoSuchMethodException.h"
#include "java/lang/Number.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Object.h"
#include "java/lang/Package.h"
#include "java/lang/Process.h"
#include "java/lang/Readable.h"
#include "java/lang/ReflectiveOperationException.h"
#include "java/lang/Runnable.h"
#include "java/lang/Runtime.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/SecurityException.h"
#include "java/lang/SecurityManager.h"
#include "java/lang/Short.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/String.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/System.h"
#include "java/lang/Thread.h"
#include "java/lang/Thread$State.h"
#include "java/lang/Thread$UncaughtExceptionHandler.h"
#include "java/lang/ThreadGroup.h"
#include "java/lang/Throwable.h"
#include "java/lang/UnsupportedOperationException.h"

namespace java {
  namespace lang {


    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "lang");

      t_AbstractStringBuilder::install(module);
      t_Appendable::install(module);
      t_AutoCloseable::install(module);
      t_Boolean::install(module);
      t_Byte::install(module);
      t_CharSequence::install(module);
      t_Character::install(module);
      t_Class::install(module);
      t_ClassLoader::install(module);
      t_ClassNotFoundException::install(module);
      t_CloneNotSupportedException::install(module);
      t_Cloneable::install(module);
      t_Comparable::install(module);
      t_Double::install(module);
      t_Enum::install(module);
      t_Error::install(module);
      t_Exception::install(module);
      t_Float::install(module);
      t_IllegalAccessException::install(module);
      t_IllegalArgumentException::install(module);
      t_IllegalStateException::install(module);
      t_IndexOutOfBoundsException::install(module);
      t_InstantiationException::install(module);
      t_Integer::install(module);
      t_InterruptedException::install(module);
      t_Iterable::install(module);
      t_Long::install(module);
      t_NoSuchMethodException::install(module);
      t_Number::install(module);
      t_NumberFormatException::install(module);
      t_Object::install(module);
      t_Package::install(module);
      t_Process::install(module);
      t_Readable::install(module);
      t_ReflectiveOperationException::install(module);
      t_Runnable::install(module);
      t_Runtime::install(module);
      t_RuntimeException::install(module);
      t_SecurityException::install(module);
      t_SecurityManager::install(module);
      t_Short::install(module);
      t_StackTraceElement::install(module);
      t_String::install(module);
      t_StringBuffer::install(module);
      t_StringBuilder::install(module);
      t_System::install(module);
      t_Thread::install(module);
      t_Thread$State::install(module);
      t_Thread$UncaughtExceptionHandler::install(module);
      t_ThreadGroup::install(module);
      t_Throwable::install(module);
      t_UnsupportedOperationException::install(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "lang");

      t_AbstractStringBuilder::initialize(module);
      t_Appendable::initialize(module);
      t_AutoCloseable::initialize(module);
      t_Boolean::initialize(module);
      t_Byte::initialize(module);
      t_CharSequence::initialize(module);
      t_Character::initialize(module);
      t_Class::initialize(module);
      t_ClassLoader::initialize(module);
      t_ClassNotFoundException::initialize(module);
      t_CloneNotSupportedException::initialize(module);
      t_Cloneable::initialize(module);
      t_Comparable::initialize(module);
      t_Double::initialize(module);
      t_Enum::initialize(module);
      t_Error::initialize(module);
      t_Exception::initialize(module);
      t_Float::initialize(module);
      t_IllegalAccessException::initialize(module);
      t_IllegalArgumentException::initialize(module);
      t_IllegalStateException::initialize(module);
      t_IndexOutOfBoundsException::initialize(module);
      t_InstantiationException::initialize(module);
      t_Integer::initialize(module);
      t_InterruptedException::initialize(module);
      t_Iterable::initialize(module);
      t_Long::initialize(module);
      t_NoSuchMethodException::initialize(module);
      t_Number::initialize(module);
      t_NumberFormatException::initialize(module);
      t_Object::initialize(module);
      t_Package::initialize(module);
      t_Process::initialize(module);
      t_Readable::initialize(module);
      t_ReflectiveOperationException::initialize(module);
      t_Runnable::initialize(module);
      t_Runtime::initialize(module);
      t_RuntimeException::initialize(module);
      t_SecurityException::initialize(module);
      t_SecurityManager::initialize(module);
      t_Short::initialize(module);
      t_StackTraceElement::initialize(module);
      t_String::initialize(module);
      t_StringBuffer::initialize(module);
      t_StringBuilder::initialize(module);
      t_System::initialize(module);
      t_Thread::initialize(module);
      t_Thread$State::initialize(module);
      t_Thread$UncaughtExceptionHandler::initialize(module);
      t_ThreadGroup::initialize(module);
      t_Throwable::initialize(module);
      t_UnsupportedOperationException::initialize(module);
    }
  }
}

#include "java/text/BreakIterator.h"
#include "java/text/Collator.h"
#include "java/text/DateFormat.h"
#include "java/text/DecimalFormat.h"
#include "java/text/Format.h"
#include "java/text/NumberFormat.h"
#include "java/text/SimpleDateFormat.h"

namespace java {
  namespace text {


    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "text");

      t_BreakIterator::install(module);
      t_Collator::install(module);
      t_DateFormat::install(module);
      t_DecimalFormat::install(module);
      t_Format::install(module);
      t_NumberFormat::install(module);
      t_SimpleDateFormat::install(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "text");

      t_BreakIterator::initialize(module);
      t_Collator::initialize(module);
      t_DateFormat::initialize(module);
      t_DecimalFormat::initialize(module);
      t_Format::initialize(module);
      t_NumberFormat::initialize(module);
      t_SimpleDateFormat::initialize(module);
    }
  }
}

#include "java/util/AbstractCollection.h"
#include "java/util/AbstractList.h"
#include "java/util/AbstractMap.h"
#include "java/util/AbstractSequentialList.h"
#include "java/util/AbstractSet.h"
#include "java/util/ArrayList.h"
#include "java/util/Arrays.h"
#include "java/util/BitSet.h"
#include "java/util/Calendar.h"
#include "java/util/Collection.h"
#include "java/util/Collections.h"
#include "java/util/Comparator.h"
#include "java/util/Currency.h"
#include "java/util/Date.h"
#include "java/util/Deque.h"
#include "java/util/Dictionary.h"
#include "java/util/EnumSet.h"
#include "java/util/Enumeration.h"
#include "java/util/HashMap.h"
#include "java/util/HashSet.h"
#include "java/util/Hashtable.h"
#include "java/util/InvalidPropertiesFormatException.h"
#include "java/util/Iterator.h"
#include "java/util/LinkedHashMap.h"
#include "java/util/LinkedList.h"
#include "java/util/List.h"
#include "java/util/ListIterator.h"
#include "java/util/Locale.h"
#include "java/util/Locale$Category.h"
#include "java/util/Map.h"
#include "java/util/Map$Entry.h"
#include "java/util/MissingResourceException.h"
#include "java/util/NavigableSet.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Properties.h"
#include "java/util/Queue.h"
#include "java/util/Random.h"
#include "java/util/RandomAccess.h"
#include "java/util/Set.h"
#include "java/util/SortedMap.h"
#include "java/util/SortedSet.h"
#include "java/util/TimeZone.h"
#include "java/util/TreeSet.h"

namespace java {
  namespace util {

    namespace concurrent {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace regex {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "util");

      t_AbstractCollection::install(module);
      t_AbstractList::install(module);
      t_AbstractMap::install(module);
      t_AbstractSequentialList::install(module);
      t_AbstractSet::install(module);
      t_ArrayList::install(module);
      t_Arrays::install(module);
      t_BitSet::install(module);
      t_Calendar::install(module);
      t_Collection::install(module);
      t_Collections::install(module);
      t_Comparator::install(module);
      t_Currency::install(module);
      t_Date::install(module);
      t_Deque::install(module);
      t_Dictionary::install(module);
      t_EnumSet::install(module);
      t_Enumeration::install(module);
      t_HashMap::install(module);
      t_HashSet::install(module);
      t_Hashtable::install(module);
      t_InvalidPropertiesFormatException::install(module);
      t_Iterator::install(module);
      t_LinkedHashMap::install(module);
      t_LinkedList::install(module);
      t_List::install(module);
      t_ListIterator::install(module);
      t_Locale::install(module);
      t_Locale$Category::install(module);
      t_Map::install(module);
      t_Map$Entry::install(module);
      t_MissingResourceException::install(module);
      t_NavigableSet::install(module);
      t_NoSuchElementException::install(module);
      t_Properties::install(module);
      t_Queue::install(module);
      t_Random::install(module);
      t_RandomAccess::install(module);
      t_Set::install(module);
      t_SortedMap::install(module);
      t_SortedSet::install(module);
      t_TimeZone::install(module);
      t_TreeSet::install(module);
      concurrent::__install__(module);
      regex::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "util");

      t_AbstractCollection::initialize(module);
      t_AbstractList::initialize(module);
      t_AbstractMap::initialize(module);
      t_AbstractSequentialList::initialize(module);
      t_AbstractSet::initialize(module);
      t_ArrayList::initialize(module);
      t_Arrays::initialize(module);
      t_BitSet::initialize(module);
      t_Calendar::initialize(module);
      t_Collection::initialize(module);
      t_Collections::initialize(module);
      t_Comparator::initialize(module);
      t_Currency::initialize(module);
      t_Date::initialize(module);
      t_Deque::initialize(module);
      t_Dictionary::initialize(module);
      t_EnumSet::initialize(module);
      t_Enumeration::initialize(module);
      t_HashMap::initialize(module);
      t_HashSet::initialize(module);
      t_Hashtable::initialize(module);
      t_InvalidPropertiesFormatException::initialize(module);
      t_Iterator::initialize(module);
      t_LinkedHashMap::initialize(module);
      t_LinkedList::initialize(module);
      t_List::initialize(module);
      t_ListIterator::initialize(module);
      t_Locale::initialize(module);
      t_Locale$Category::initialize(module);
      t_Map::initialize(module);
      t_Map$Entry::initialize(module);
      t_MissingResourceException::initialize(module);
      t_NavigableSet::initialize(module);
      t_NoSuchElementException::initialize(module);
      t_Properties::initialize(module);
      t_Queue::initialize(module);
      t_Random::initialize(module);
      t_RandomAccess::initialize(module);
      t_Set::initialize(module);
      t_SortedMap::initialize(module);
      t_SortedSet::initialize(module);
      t_TimeZone::initialize(module);
      t_TreeSet::initialize(module);
      concurrent::__initialize__(module);
      regex::__initialize__(module);
    }
  }
}

#include "java/util/concurrent/Callable.h"
#include "java/util/concurrent/Delayed.h"
#include "java/util/concurrent/ExecutionException.h"
#include "java/util/concurrent/Executor.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/util/concurrent/Executors.h"
#include "java/util/concurrent/Future.h"
#include "java/util/concurrent/ScheduledExecutorService.h"
#include "java/util/concurrent/ScheduledFuture.h"
#include "java/util/concurrent/ThreadFactory.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/TimeoutException.h"

namespace java {
  namespace util {
    namespace concurrent {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "java.util", "concurrent");

        t_Callable::install(module);
        t_Delayed::install(module);
        t_ExecutionException::install(module);
        t_Executor::install(module);
        t_ExecutorService::install(module);
        t_Executors::install(module);
        t_Future::install(module);
        t_ScheduledExecutorService::install(module);
        t_ScheduledFuture::install(module);
        t_ThreadFactory::install(module);
        t_TimeUnit::install(module);
        t_TimeoutException::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "java.util", "concurrent");

        t_Callable::initialize(module);
        t_Delayed::initialize(module);
        t_ExecutionException::initialize(module);
        t_Executor::initialize(module);
        t_ExecutorService::initialize(module);
        t_Executors::initialize(module);
        t_Future::initialize(module);
        t_ScheduledExecutorService::initialize(module);
        t_ScheduledFuture::initialize(module);
        t_ThreadFactory::initialize(module);
        t_TimeUnit::initialize(module);
        t_TimeoutException::initialize(module);
      }
    }
  }
}

#include "java/util/regex/MatchResult.h"
#include "java/util/regex/Matcher.h"
#include "java/util/regex/Pattern.h"

namespace java {
  namespace util {
    namespace regex {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "java.util", "regex");

        t_MatchResult::install(module);
        t_Matcher::install(module);
        t_Pattern::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "java.util", "regex");

        t_MatchResult::initialize(module);
        t_Matcher::initialize(module);
        t_Pattern::initialize(module);
      }
    }
  }
}


namespace org {

  namespace antlr {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace apache {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace egothor {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace tartarus {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace xml {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }

  void __install__(PyObject *module)
  {
    module = getJavaModule(module, "", "org");

    antlr::__install__(module);
    apache::__install__(module);
    egothor::__install__(module);
    tartarus::__install__(module);
    xml::__install__(module);
  }

  void __initialize__(PyObject *module)
  {
    module = getJavaModule(module, "", "org");

    antlr::__initialize__(module);
    apache::__initialize__(module);
    egothor::__initialize__(module);
    tartarus::__initialize__(module);
    xml::__initialize__(module);
  }
}


namespace org {
  namespace antlr {

    namespace runtime {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "org", "antlr");

      runtime::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "org", "antlr");

      runtime::__initialize__(module);
    }
  }
}

#include "org/antlr/runtime/ParserRuleReturnScope.h"
#include "org/antlr/runtime/RuleReturnScope.h"

namespace org {
  namespace antlr {
    namespace runtime {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.antlr", "runtime");

        t_ParserRuleReturnScope::install(module);
        t_RuleReturnScope::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.antlr", "runtime");

        t_ParserRuleReturnScope::initialize(module);
        t_RuleReturnScope::initialize(module);
      }
    }
  }
}


namespace org {
  namespace apache {

    namespace lucene {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace pylucene {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "org", "apache");

      lucene::__install__(module);
      pylucene::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "org", "apache");

      lucene::__initialize__(module);
      pylucene::__initialize__(module);
    }
  }
}

#include "org/apache/lucene/LucenePackage.h"

namespace org {
  namespace apache {
    namespace lucene {

      namespace analysis {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace codecs {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace collation {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace document {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace expressions {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace facet {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace index {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace queries {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace queryparser {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace sandbox {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace search {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace store {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace util {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.apache", "lucene");

        t_LucenePackage::install(module);
        analysis::__install__(module);
        codecs::__install__(module);
        collation::__install__(module);
        document::__install__(module);
        expressions::__install__(module);
        facet::__install__(module);
        index::__install__(module);
        queries::__install__(module);
        queryparser::__install__(module);
        sandbox::__install__(module);
        search::__install__(module);
        store::__install__(module);
        util::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.apache", "lucene");

        t_LucenePackage::initialize(module);
        analysis::__initialize__(module);
        codecs::__initialize__(module);
        collation::__initialize__(module);
        document::__initialize__(module);
        expressions::__initialize__(module);
        facet::__initialize__(module);
        index::__initialize__(module);
        queries::__initialize__(module);
        queryparser::__initialize__(module);
        sandbox::__initialize__(module);
        search::__initialize__(module);
        store::__initialize__(module);
        util::__initialize__(module);
      }
    }
  }
}

#include "org/apache/lucene/analysis/Analyzer.h"
#include "org/apache/lucene/analysis/Analyzer$GlobalReuseStrategy.h"
#include "org/apache/lucene/analysis/Analyzer$PerFieldReuseStrategy.h"
#include "org/apache/lucene/analysis/Analyzer$ReuseStrategy.h"
#include "org/apache/lucene/analysis/Analyzer$TokenStreamComponents.h"
#include "org/apache/lucene/analysis/AnalyzerWrapper.h"
#include "org/apache/lucene/analysis/CachingTokenFilter.h"
#include "org/apache/lucene/analysis/CharFilter.h"
#include "org/apache/lucene/analysis/NumericTokenStream.h"
#include "org/apache/lucene/analysis/NumericTokenStream$NumericTermAttribute.h"
#include "org/apache/lucene/analysis/NumericTokenStream$NumericTermAttributeImpl.h"
#include "org/apache/lucene/analysis/Token.h"
#include "org/apache/lucene/analysis/TokenFilter.h"
#include "org/apache/lucene/analysis/TokenStream.h"
#include "org/apache/lucene/analysis/TokenStreamToAutomaton.h"
#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        namespace ar {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace bg {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace br {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ca {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace charfilter {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace cjk {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ckb {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace cn {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace commongrams {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace compound {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace core {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace cz {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace da {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace de {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace el {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace en {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace es {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace eu {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace fa {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace fi {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace fr {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ga {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace gl {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace hi {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace hu {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace hunspell {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace hy {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace id {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace in {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace it {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lv {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace miscellaneous {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ngram {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace nl {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace no {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace path {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace pattern {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace payloads {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace pl {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace position {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace pt {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace query {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace reverse {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ro {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ru {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace shingle {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace sinks {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace snowball {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace standard {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace stempel {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace sv {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace synonym {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace th {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace tokenattributes {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace tr {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace util {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace wikipedia {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "analysis");

          t_Analyzer::install(module);
          t_Analyzer$GlobalReuseStrategy::install(module);
          t_Analyzer$PerFieldReuseStrategy::install(module);
          t_Analyzer$ReuseStrategy::install(module);
          t_Analyzer$TokenStreamComponents::install(module);
          t_AnalyzerWrapper::install(module);
          t_CachingTokenFilter::install(module);
          t_CharFilter::install(module);
          t_NumericTokenStream::install(module);
          t_NumericTokenStream$NumericTermAttribute::install(module);
          t_NumericTokenStream$NumericTermAttributeImpl::install(module);
          t_Token::install(module);
          t_TokenFilter::install(module);
          t_TokenStream::install(module);
          t_TokenStreamToAutomaton::install(module);
          t_Tokenizer::install(module);
          ar::__install__(module);
          bg::__install__(module);
          br::__install__(module);
          ca::__install__(module);
          charfilter::__install__(module);
          cjk::__install__(module);
          ckb::__install__(module);
          cn::__install__(module);
          commongrams::__install__(module);
          compound::__install__(module);
          core::__install__(module);
          cz::__install__(module);
          da::__install__(module);
          de::__install__(module);
          el::__install__(module);
          en::__install__(module);
          es::__install__(module);
          eu::__install__(module);
          fa::__install__(module);
          fi::__install__(module);
          fr::__install__(module);
          ga::__install__(module);
          gl::__install__(module);
          hi::__install__(module);
          hu::__install__(module);
          hunspell::__install__(module);
          hy::__install__(module);
          id::__install__(module);
          in::__install__(module);
          it::__install__(module);
          lv::__install__(module);
          miscellaneous::__install__(module);
          ngram::__install__(module);
          nl::__install__(module);
          no::__install__(module);
          path::__install__(module);
          pattern::__install__(module);
          payloads::__install__(module);
          pl::__install__(module);
          position::__install__(module);
          pt::__install__(module);
          query::__install__(module);
          reverse::__install__(module);
          ro::__install__(module);
          ru::__install__(module);
          shingle::__install__(module);
          sinks::__install__(module);
          snowball::__install__(module);
          standard::__install__(module);
          stempel::__install__(module);
          sv::__install__(module);
          synonym::__install__(module);
          th::__install__(module);
          tokenattributes::__install__(module);
          tr::__install__(module);
          util::__install__(module);
          wikipedia::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "analysis");

          t_Analyzer::initialize(module);
          t_Analyzer$GlobalReuseStrategy::initialize(module);
          t_Analyzer$PerFieldReuseStrategy::initialize(module);
          t_Analyzer$ReuseStrategy::initialize(module);
          t_Analyzer$TokenStreamComponents::initialize(module);
          t_AnalyzerWrapper::initialize(module);
          t_CachingTokenFilter::initialize(module);
          t_CharFilter::initialize(module);
          t_NumericTokenStream::initialize(module);
          t_NumericTokenStream$NumericTermAttribute::initialize(module);
          t_NumericTokenStream$NumericTermAttributeImpl::initialize(module);
          t_Token::initialize(module);
          t_TokenFilter::initialize(module);
          t_TokenStream::initialize(module);
          t_TokenStreamToAutomaton::initialize(module);
          t_Tokenizer::initialize(module);
          ar::__initialize__(module);
          bg::__initialize__(module);
          br::__initialize__(module);
          ca::__initialize__(module);
          charfilter::__initialize__(module);
          cjk::__initialize__(module);
          ckb::__initialize__(module);
          cn::__initialize__(module);
          commongrams::__initialize__(module);
          compound::__initialize__(module);
          core::__initialize__(module);
          cz::__initialize__(module);
          da::__initialize__(module);
          de::__initialize__(module);
          el::__initialize__(module);
          en::__initialize__(module);
          es::__initialize__(module);
          eu::__initialize__(module);
          fa::__initialize__(module);
          fi::__initialize__(module);
          fr::__initialize__(module);
          ga::__initialize__(module);
          gl::__initialize__(module);
          hi::__initialize__(module);
          hu::__initialize__(module);
          hunspell::__initialize__(module);
          hy::__initialize__(module);
          id::__initialize__(module);
          in::__initialize__(module);
          it::__initialize__(module);
          lv::__initialize__(module);
          miscellaneous::__initialize__(module);
          ngram::__initialize__(module);
          nl::__initialize__(module);
          no::__initialize__(module);
          path::__initialize__(module);
          pattern::__initialize__(module);
          payloads::__initialize__(module);
          pl::__initialize__(module);
          position::__initialize__(module);
          pt::__initialize__(module);
          query::__initialize__(module);
          reverse::__initialize__(module);
          ro::__initialize__(module);
          ru::__initialize__(module);
          shingle::__initialize__(module);
          sinks::__initialize__(module);
          snowball::__initialize__(module);
          standard::__initialize__(module);
          stempel::__initialize__(module);
          sv::__initialize__(module);
          synonym::__initialize__(module);
          th::__initialize__(module);
          tokenattributes::__initialize__(module);
          tr::__initialize__(module);
          util::__initialize__(module);
          wikipedia::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ar/ArabicAnalyzer.h"
#include "org/apache/lucene/analysis/ar/ArabicLetterTokenizer.h"
#include "org/apache/lucene/analysis/ar/ArabicLetterTokenizerFactory.h"
#include "org/apache/lucene/analysis/ar/ArabicNormalizationFilter.h"
#include "org/apache/lucene/analysis/ar/ArabicNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/ar/ArabicNormalizer.h"
#include "org/apache/lucene/analysis/ar/ArabicStemFilter.h"
#include "org/apache/lucene/analysis/ar/ArabicStemFilterFactory.h"
#include "org/apache/lucene/analysis/ar/ArabicStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ar {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ar");

            t_ArabicAnalyzer::install(module);
            t_ArabicLetterTokenizer::install(module);
            t_ArabicLetterTokenizerFactory::install(module);
            t_ArabicNormalizationFilter::install(module);
            t_ArabicNormalizationFilterFactory::install(module);
            t_ArabicNormalizer::install(module);
            t_ArabicStemFilter::install(module);
            t_ArabicStemFilterFactory::install(module);
            t_ArabicStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ar");

            t_ArabicAnalyzer::initialize(module);
            t_ArabicLetterTokenizer::initialize(module);
            t_ArabicLetterTokenizerFactory::initialize(module);
            t_ArabicNormalizationFilter::initialize(module);
            t_ArabicNormalizationFilterFactory::initialize(module);
            t_ArabicNormalizer::initialize(module);
            t_ArabicStemFilter::initialize(module);
            t_ArabicStemFilterFactory::initialize(module);
            t_ArabicStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/bg/BulgarianAnalyzer.h"
#include "org/apache/lucene/analysis/bg/BulgarianStemFilter.h"
#include "org/apache/lucene/analysis/bg/BulgarianStemFilterFactory.h"
#include "org/apache/lucene/analysis/bg/BulgarianStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace bg {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "bg");

            t_BulgarianAnalyzer::install(module);
            t_BulgarianStemFilter::install(module);
            t_BulgarianStemFilterFactory::install(module);
            t_BulgarianStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "bg");

            t_BulgarianAnalyzer::initialize(module);
            t_BulgarianStemFilter::initialize(module);
            t_BulgarianStemFilterFactory::initialize(module);
            t_BulgarianStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/br/BrazilianAnalyzer.h"
#include "org/apache/lucene/analysis/br/BrazilianStemFilter.h"
#include "org/apache/lucene/analysis/br/BrazilianStemFilterFactory.h"
#include "org/apache/lucene/analysis/br/BrazilianStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace br {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "br");

            t_BrazilianAnalyzer::install(module);
            t_BrazilianStemFilter::install(module);
            t_BrazilianStemFilterFactory::install(module);
            t_BrazilianStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "br");

            t_BrazilianAnalyzer::initialize(module);
            t_BrazilianStemFilter::initialize(module);
            t_BrazilianStemFilterFactory::initialize(module);
            t_BrazilianStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ca/CatalanAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ca {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ca");

            t_CatalanAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ca");

            t_CatalanAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/charfilter/BaseCharFilter.h"
#include "org/apache/lucene/analysis/charfilter/HTMLStripCharFilter.h"
#include "org/apache/lucene/analysis/charfilter/HTMLStripCharFilterFactory.h"
#include "org/apache/lucene/analysis/charfilter/MappingCharFilter.h"
#include "org/apache/lucene/analysis/charfilter/MappingCharFilterFactory.h"
#include "org/apache/lucene/analysis/charfilter/NormalizeCharMap.h"
#include "org/apache/lucene/analysis/charfilter/NormalizeCharMap$Builder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace charfilter {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "charfilter");

            t_BaseCharFilter::install(module);
            t_HTMLStripCharFilter::install(module);
            t_HTMLStripCharFilterFactory::install(module);
            t_MappingCharFilter::install(module);
            t_MappingCharFilterFactory::install(module);
            t_NormalizeCharMap::install(module);
            t_NormalizeCharMap$Builder::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "charfilter");

            t_BaseCharFilter::initialize(module);
            t_HTMLStripCharFilter::initialize(module);
            t_HTMLStripCharFilterFactory::initialize(module);
            t_MappingCharFilter::initialize(module);
            t_MappingCharFilterFactory::initialize(module);
            t_NormalizeCharMap::initialize(module);
            t_NormalizeCharMap$Builder::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/cjk/CJKAnalyzer.h"
#include "org/apache/lucene/analysis/cjk/CJKBigramFilter.h"
#include "org/apache/lucene/analysis/cjk/CJKBigramFilterFactory.h"
#include "org/apache/lucene/analysis/cjk/CJKTokenizer.h"
#include "org/apache/lucene/analysis/cjk/CJKTokenizerFactory.h"
#include "org/apache/lucene/analysis/cjk/CJKWidthFilter.h"
#include "org/apache/lucene/analysis/cjk/CJKWidthFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace cjk {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "cjk");

            t_CJKAnalyzer::install(module);
            t_CJKBigramFilter::install(module);
            t_CJKBigramFilterFactory::install(module);
            t_CJKTokenizer::install(module);
            t_CJKTokenizerFactory::install(module);
            t_CJKWidthFilter::install(module);
            t_CJKWidthFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "cjk");

            t_CJKAnalyzer::initialize(module);
            t_CJKBigramFilter::initialize(module);
            t_CJKBigramFilterFactory::initialize(module);
            t_CJKTokenizer::initialize(module);
            t_CJKTokenizerFactory::initialize(module);
            t_CJKWidthFilter::initialize(module);
            t_CJKWidthFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ckb/SoraniAnalyzer.h"
#include "org/apache/lucene/analysis/ckb/SoraniNormalizationFilter.h"
#include "org/apache/lucene/analysis/ckb/SoraniNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/ckb/SoraniNormalizer.h"
#include "org/apache/lucene/analysis/ckb/SoraniStemFilter.h"
#include "org/apache/lucene/analysis/ckb/SoraniStemFilterFactory.h"
#include "org/apache/lucene/analysis/ckb/SoraniStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ckb {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ckb");

            t_SoraniAnalyzer::install(module);
            t_SoraniNormalizationFilter::install(module);
            t_SoraniNormalizationFilterFactory::install(module);
            t_SoraniNormalizer::install(module);
            t_SoraniStemFilter::install(module);
            t_SoraniStemFilterFactory::install(module);
            t_SoraniStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ckb");

            t_SoraniAnalyzer::initialize(module);
            t_SoraniNormalizationFilter::initialize(module);
            t_SoraniNormalizationFilterFactory::initialize(module);
            t_SoraniNormalizer::initialize(module);
            t_SoraniStemFilter::initialize(module);
            t_SoraniStemFilterFactory::initialize(module);
            t_SoraniStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/cn/ChineseAnalyzer.h"
#include "org/apache/lucene/analysis/cn/ChineseFilter.h"
#include "org/apache/lucene/analysis/cn/ChineseFilterFactory.h"
#include "org/apache/lucene/analysis/cn/ChineseTokenizer.h"
#include "org/apache/lucene/analysis/cn/ChineseTokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace cn {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "cn");

            t_ChineseAnalyzer::install(module);
            t_ChineseFilter::install(module);
            t_ChineseFilterFactory::install(module);
            t_ChineseTokenizer::install(module);
            t_ChineseTokenizerFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "cn");

            t_ChineseAnalyzer::initialize(module);
            t_ChineseFilter::initialize(module);
            t_ChineseFilterFactory::initialize(module);
            t_ChineseTokenizer::initialize(module);
            t_ChineseTokenizerFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/commongrams/CommonGramsFilter.h"
#include "org/apache/lucene/analysis/commongrams/CommonGramsFilterFactory.h"
#include "org/apache/lucene/analysis/commongrams/CommonGramsQueryFilter.h"
#include "org/apache/lucene/analysis/commongrams/CommonGramsQueryFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace commongrams {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "commongrams");

            t_CommonGramsFilter::install(module);
            t_CommonGramsFilterFactory::install(module);
            t_CommonGramsQueryFilter::install(module);
            t_CommonGramsQueryFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "commongrams");

            t_CommonGramsFilter::initialize(module);
            t_CommonGramsFilterFactory::initialize(module);
            t_CommonGramsQueryFilter::initialize(module);
            t_CommonGramsQueryFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/compound/CompoundWordTokenFilterBase.h"
#include "org/apache/lucene/analysis/compound/DictionaryCompoundWordTokenFilter.h"
#include "org/apache/lucene/analysis/compound/DictionaryCompoundWordTokenFilterFactory.h"
#include "org/apache/lucene/analysis/compound/HyphenationCompoundWordTokenFilter.h"
#include "org/apache/lucene/analysis/compound/HyphenationCompoundWordTokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {

          namespace hyphenation {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "compound");

            t_CompoundWordTokenFilterBase::install(module);
            t_DictionaryCompoundWordTokenFilter::install(module);
            t_DictionaryCompoundWordTokenFilterFactory::install(module);
            t_HyphenationCompoundWordTokenFilter::install(module);
            t_HyphenationCompoundWordTokenFilterFactory::install(module);
            hyphenation::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "compound");

            t_CompoundWordTokenFilterBase::initialize(module);
            t_DictionaryCompoundWordTokenFilter::initialize(module);
            t_DictionaryCompoundWordTokenFilterFactory::initialize(module);
            t_HyphenationCompoundWordTokenFilter::initialize(module);
            t_HyphenationCompoundWordTokenFilterFactory::initialize(module);
            hyphenation::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/compound/hyphenation/ByteVector.h"
#include "org/apache/lucene/analysis/compound/hyphenation/CharVector.h"
#include "org/apache/lucene/analysis/compound/hyphenation/Hyphen.h"
#include "org/apache/lucene/analysis/compound/hyphenation/Hyphenation.h"
#include "org/apache/lucene/analysis/compound/hyphenation/HyphenationTree.h"
#include "org/apache/lucene/analysis/compound/hyphenation/PatternConsumer.h"
#include "org/apache/lucene/analysis/compound/hyphenation/PatternParser.h"
#include "org/apache/lucene/analysis/compound/hyphenation/TernaryTree.h"
#include "org/apache/lucene/analysis/compound/hyphenation/TernaryTree$Iterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.compound", "hyphenation");

              t_ByteVector::install(module);
              t_CharVector::install(module);
              t_Hyphen::install(module);
              t_Hyphenation::install(module);
              t_HyphenationTree::install(module);
              t_PatternConsumer::install(module);
              t_PatternParser::install(module);
              t_TernaryTree::install(module);
              t_TernaryTree$Iterator::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.compound", "hyphenation");

              t_ByteVector::initialize(module);
              t_CharVector::initialize(module);
              t_Hyphen::initialize(module);
              t_Hyphenation::initialize(module);
              t_HyphenationTree::initialize(module);
              t_PatternConsumer::initialize(module);
              t_PatternParser::initialize(module);
              t_TernaryTree::initialize(module);
              t_TernaryTree$Iterator::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/core/KeywordAnalyzer.h"
#include "org/apache/lucene/analysis/core/KeywordTokenizer.h"
#include "org/apache/lucene/analysis/core/KeywordTokenizerFactory.h"
#include "org/apache/lucene/analysis/core/LetterTokenizer.h"
#include "org/apache/lucene/analysis/core/LetterTokenizerFactory.h"
#include "org/apache/lucene/analysis/core/LowerCaseFilter.h"
#include "org/apache/lucene/analysis/core/LowerCaseFilterFactory.h"
#include "org/apache/lucene/analysis/core/LowerCaseTokenizer.h"
#include "org/apache/lucene/analysis/core/LowerCaseTokenizerFactory.h"
#include "org/apache/lucene/analysis/core/SimpleAnalyzer.h"
#include "org/apache/lucene/analysis/core/StopAnalyzer.h"
#include "org/apache/lucene/analysis/core/StopFilter.h"
#include "org/apache/lucene/analysis/core/StopFilterFactory.h"
#include "org/apache/lucene/analysis/core/TypeTokenFilter.h"
#include "org/apache/lucene/analysis/core/TypeTokenFilterFactory.h"
#include "org/apache/lucene/analysis/core/UpperCaseFilter.h"
#include "org/apache/lucene/analysis/core/UpperCaseFilterFactory.h"
#include "org/apache/lucene/analysis/core/WhitespaceAnalyzer.h"
#include "org/apache/lucene/analysis/core/WhitespaceTokenizer.h"
#include "org/apache/lucene/analysis/core/WhitespaceTokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace core {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "core");

            t_KeywordAnalyzer::install(module);
            t_KeywordTokenizer::install(module);
            t_KeywordTokenizerFactory::install(module);
            t_LetterTokenizer::install(module);
            t_LetterTokenizerFactory::install(module);
            t_LowerCaseFilter::install(module);
            t_LowerCaseFilterFactory::install(module);
            t_LowerCaseTokenizer::install(module);
            t_LowerCaseTokenizerFactory::install(module);
            t_SimpleAnalyzer::install(module);
            t_StopAnalyzer::install(module);
            t_StopFilter::install(module);
            t_StopFilterFactory::install(module);
            t_TypeTokenFilter::install(module);
            t_TypeTokenFilterFactory::install(module);
            t_UpperCaseFilter::install(module);
            t_UpperCaseFilterFactory::install(module);
            t_WhitespaceAnalyzer::install(module);
            t_WhitespaceTokenizer::install(module);
            t_WhitespaceTokenizerFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "core");

            t_KeywordAnalyzer::initialize(module);
            t_KeywordTokenizer::initialize(module);
            t_KeywordTokenizerFactory::initialize(module);
            t_LetterTokenizer::initialize(module);
            t_LetterTokenizerFactory::initialize(module);
            t_LowerCaseFilter::initialize(module);
            t_LowerCaseFilterFactory::initialize(module);
            t_LowerCaseTokenizer::initialize(module);
            t_LowerCaseTokenizerFactory::initialize(module);
            t_SimpleAnalyzer::initialize(module);
            t_StopAnalyzer::initialize(module);
            t_StopFilter::initialize(module);
            t_StopFilterFactory::initialize(module);
            t_TypeTokenFilter::initialize(module);
            t_TypeTokenFilterFactory::initialize(module);
            t_UpperCaseFilter::initialize(module);
            t_UpperCaseFilterFactory::initialize(module);
            t_WhitespaceAnalyzer::initialize(module);
            t_WhitespaceTokenizer::initialize(module);
            t_WhitespaceTokenizerFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/cz/CzechAnalyzer.h"
#include "org/apache/lucene/analysis/cz/CzechStemFilter.h"
#include "org/apache/lucene/analysis/cz/CzechStemFilterFactory.h"
#include "org/apache/lucene/analysis/cz/CzechStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace cz {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "cz");

            t_CzechAnalyzer::install(module);
            t_CzechStemFilter::install(module);
            t_CzechStemFilterFactory::install(module);
            t_CzechStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "cz");

            t_CzechAnalyzer::initialize(module);
            t_CzechStemFilter::initialize(module);
            t_CzechStemFilterFactory::initialize(module);
            t_CzechStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/da/DanishAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace da {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "da");

            t_DanishAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "da");

            t_DanishAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/de/GermanAnalyzer.h"
#include "org/apache/lucene/analysis/de/GermanLightStemFilter.h"
#include "org/apache/lucene/analysis/de/GermanLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/de/GermanLightStemmer.h"
#include "org/apache/lucene/analysis/de/GermanMinimalStemFilter.h"
#include "org/apache/lucene/analysis/de/GermanMinimalStemFilterFactory.h"
#include "org/apache/lucene/analysis/de/GermanMinimalStemmer.h"
#include "org/apache/lucene/analysis/de/GermanNormalizationFilter.h"
#include "org/apache/lucene/analysis/de/GermanNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/de/GermanStemFilter.h"
#include "org/apache/lucene/analysis/de/GermanStemFilterFactory.h"
#include "org/apache/lucene/analysis/de/GermanStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace de {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "de");

            t_GermanAnalyzer::install(module);
            t_GermanLightStemFilter::install(module);
            t_GermanLightStemFilterFactory::install(module);
            t_GermanLightStemmer::install(module);
            t_GermanMinimalStemFilter::install(module);
            t_GermanMinimalStemFilterFactory::install(module);
            t_GermanMinimalStemmer::install(module);
            t_GermanNormalizationFilter::install(module);
            t_GermanNormalizationFilterFactory::install(module);
            t_GermanStemFilter::install(module);
            t_GermanStemFilterFactory::install(module);
            t_GermanStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "de");

            t_GermanAnalyzer::initialize(module);
            t_GermanLightStemFilter::initialize(module);
            t_GermanLightStemFilterFactory::initialize(module);
            t_GermanLightStemmer::initialize(module);
            t_GermanMinimalStemFilter::initialize(module);
            t_GermanMinimalStemFilterFactory::initialize(module);
            t_GermanMinimalStemmer::initialize(module);
            t_GermanNormalizationFilter::initialize(module);
            t_GermanNormalizationFilterFactory::initialize(module);
            t_GermanStemFilter::initialize(module);
            t_GermanStemFilterFactory::initialize(module);
            t_GermanStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/el/GreekAnalyzer.h"
#include "org/apache/lucene/analysis/el/GreekLowerCaseFilter.h"
#include "org/apache/lucene/analysis/el/GreekLowerCaseFilterFactory.h"
#include "org/apache/lucene/analysis/el/GreekStemFilter.h"
#include "org/apache/lucene/analysis/el/GreekStemFilterFactory.h"
#include "org/apache/lucene/analysis/el/GreekStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace el {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "el");

            t_GreekAnalyzer::install(module);
            t_GreekLowerCaseFilter::install(module);
            t_GreekLowerCaseFilterFactory::install(module);
            t_GreekStemFilter::install(module);
            t_GreekStemFilterFactory::install(module);
            t_GreekStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "el");

            t_GreekAnalyzer::initialize(module);
            t_GreekLowerCaseFilter::initialize(module);
            t_GreekLowerCaseFilterFactory::initialize(module);
            t_GreekStemFilter::initialize(module);
            t_GreekStemFilterFactory::initialize(module);
            t_GreekStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/en/EnglishAnalyzer.h"
#include "org/apache/lucene/analysis/en/EnglishMinimalStemFilter.h"
#include "org/apache/lucene/analysis/en/EnglishMinimalStemFilterFactory.h"
#include "org/apache/lucene/analysis/en/EnglishMinimalStemmer.h"
#include "org/apache/lucene/analysis/en/EnglishPossessiveFilter.h"
#include "org/apache/lucene/analysis/en/EnglishPossessiveFilterFactory.h"
#include "org/apache/lucene/analysis/en/KStemFilter.h"
#include "org/apache/lucene/analysis/en/KStemFilterFactory.h"
#include "org/apache/lucene/analysis/en/KStemmer.h"
#include "org/apache/lucene/analysis/en/PorterStemFilter.h"
#include "org/apache/lucene/analysis/en/PorterStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace en {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "en");

            t_EnglishAnalyzer::install(module);
            t_EnglishMinimalStemFilter::install(module);
            t_EnglishMinimalStemFilterFactory::install(module);
            t_EnglishMinimalStemmer::install(module);
            t_EnglishPossessiveFilter::install(module);
            t_EnglishPossessiveFilterFactory::install(module);
            t_KStemFilter::install(module);
            t_KStemFilterFactory::install(module);
            t_KStemmer::install(module);
            t_PorterStemFilter::install(module);
            t_PorterStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "en");

            t_EnglishAnalyzer::initialize(module);
            t_EnglishMinimalStemFilter::initialize(module);
            t_EnglishMinimalStemFilterFactory::initialize(module);
            t_EnglishMinimalStemmer::initialize(module);
            t_EnglishPossessiveFilter::initialize(module);
            t_EnglishPossessiveFilterFactory::initialize(module);
            t_KStemFilter::initialize(module);
            t_KStemFilterFactory::initialize(module);
            t_KStemmer::initialize(module);
            t_PorterStemFilter::initialize(module);
            t_PorterStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/es/SpanishAnalyzer.h"
#include "org/apache/lucene/analysis/es/SpanishLightStemFilter.h"
#include "org/apache/lucene/analysis/es/SpanishLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/es/SpanishLightStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace es {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "es");

            t_SpanishAnalyzer::install(module);
            t_SpanishLightStemFilter::install(module);
            t_SpanishLightStemFilterFactory::install(module);
            t_SpanishLightStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "es");

            t_SpanishAnalyzer::initialize(module);
            t_SpanishLightStemFilter::initialize(module);
            t_SpanishLightStemFilterFactory::initialize(module);
            t_SpanishLightStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/eu/BasqueAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace eu {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "eu");

            t_BasqueAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "eu");

            t_BasqueAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/fa/PersianAnalyzer.h"
#include "org/apache/lucene/analysis/fa/PersianCharFilter.h"
#include "org/apache/lucene/analysis/fa/PersianCharFilterFactory.h"
#include "org/apache/lucene/analysis/fa/PersianNormalizationFilter.h"
#include "org/apache/lucene/analysis/fa/PersianNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/fa/PersianNormalizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace fa {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "fa");

            t_PersianAnalyzer::install(module);
            t_PersianCharFilter::install(module);
            t_PersianCharFilterFactory::install(module);
            t_PersianNormalizationFilter::install(module);
            t_PersianNormalizationFilterFactory::install(module);
            t_PersianNormalizer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "fa");

            t_PersianAnalyzer::initialize(module);
            t_PersianCharFilter::initialize(module);
            t_PersianCharFilterFactory::initialize(module);
            t_PersianNormalizationFilter::initialize(module);
            t_PersianNormalizationFilterFactory::initialize(module);
            t_PersianNormalizer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/fi/FinnishAnalyzer.h"
#include "org/apache/lucene/analysis/fi/FinnishLightStemFilter.h"
#include "org/apache/lucene/analysis/fi/FinnishLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/fi/FinnishLightStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace fi {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "fi");

            t_FinnishAnalyzer::install(module);
            t_FinnishLightStemFilter::install(module);
            t_FinnishLightStemFilterFactory::install(module);
            t_FinnishLightStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "fi");

            t_FinnishAnalyzer::initialize(module);
            t_FinnishLightStemFilter::initialize(module);
            t_FinnishLightStemFilterFactory::initialize(module);
            t_FinnishLightStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/fr/FrenchAnalyzer.h"
#include "org/apache/lucene/analysis/fr/FrenchLightStemFilter.h"
#include "org/apache/lucene/analysis/fr/FrenchLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/fr/FrenchLightStemmer.h"
#include "org/apache/lucene/analysis/fr/FrenchMinimalStemFilter.h"
#include "org/apache/lucene/analysis/fr/FrenchMinimalStemFilterFactory.h"
#include "org/apache/lucene/analysis/fr/FrenchMinimalStemmer.h"
#include "org/apache/lucene/analysis/fr/FrenchStemFilter.h"
#include "org/apache/lucene/analysis/fr/FrenchStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace fr {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "fr");

            t_FrenchAnalyzer::install(module);
            t_FrenchLightStemFilter::install(module);
            t_FrenchLightStemFilterFactory::install(module);
            t_FrenchLightStemmer::install(module);
            t_FrenchMinimalStemFilter::install(module);
            t_FrenchMinimalStemFilterFactory::install(module);
            t_FrenchMinimalStemmer::install(module);
            t_FrenchStemFilter::install(module);
            t_FrenchStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "fr");

            t_FrenchAnalyzer::initialize(module);
            t_FrenchLightStemFilter::initialize(module);
            t_FrenchLightStemFilterFactory::initialize(module);
            t_FrenchLightStemmer::initialize(module);
            t_FrenchMinimalStemFilter::initialize(module);
            t_FrenchMinimalStemFilterFactory::initialize(module);
            t_FrenchMinimalStemmer::initialize(module);
            t_FrenchStemFilter::initialize(module);
            t_FrenchStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ga/IrishAnalyzer.h"
#include "org/apache/lucene/analysis/ga/IrishLowerCaseFilter.h"
#include "org/apache/lucene/analysis/ga/IrishLowerCaseFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ga {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ga");

            t_IrishAnalyzer::install(module);
            t_IrishLowerCaseFilter::install(module);
            t_IrishLowerCaseFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ga");

            t_IrishAnalyzer::initialize(module);
            t_IrishLowerCaseFilter::initialize(module);
            t_IrishLowerCaseFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/gl/GalicianAnalyzer.h"
#include "org/apache/lucene/analysis/gl/GalicianMinimalStemFilter.h"
#include "org/apache/lucene/analysis/gl/GalicianMinimalStemFilterFactory.h"
#include "org/apache/lucene/analysis/gl/GalicianMinimalStemmer.h"
#include "org/apache/lucene/analysis/gl/GalicianStemFilter.h"
#include "org/apache/lucene/analysis/gl/GalicianStemFilterFactory.h"
#include "org/apache/lucene/analysis/gl/GalicianStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace gl {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "gl");

            t_GalicianAnalyzer::install(module);
            t_GalicianMinimalStemFilter::install(module);
            t_GalicianMinimalStemFilterFactory::install(module);
            t_GalicianMinimalStemmer::install(module);
            t_GalicianStemFilter::install(module);
            t_GalicianStemFilterFactory::install(module);
            t_GalicianStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "gl");

            t_GalicianAnalyzer::initialize(module);
            t_GalicianMinimalStemFilter::initialize(module);
            t_GalicianMinimalStemFilterFactory::initialize(module);
            t_GalicianMinimalStemmer::initialize(module);
            t_GalicianStemFilter::initialize(module);
            t_GalicianStemFilterFactory::initialize(module);
            t_GalicianStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/hi/HindiAnalyzer.h"
#include "org/apache/lucene/analysis/hi/HindiNormalizationFilter.h"
#include "org/apache/lucene/analysis/hi/HindiNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/hi/HindiNormalizer.h"
#include "org/apache/lucene/analysis/hi/HindiStemFilter.h"
#include "org/apache/lucene/analysis/hi/HindiStemFilterFactory.h"
#include "org/apache/lucene/analysis/hi/HindiStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hi {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hi");

            t_HindiAnalyzer::install(module);
            t_HindiNormalizationFilter::install(module);
            t_HindiNormalizationFilterFactory::install(module);
            t_HindiNormalizer::install(module);
            t_HindiStemFilter::install(module);
            t_HindiStemFilterFactory::install(module);
            t_HindiStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hi");

            t_HindiAnalyzer::initialize(module);
            t_HindiNormalizationFilter::initialize(module);
            t_HindiNormalizationFilterFactory::initialize(module);
            t_HindiNormalizer::initialize(module);
            t_HindiStemFilter::initialize(module);
            t_HindiStemFilterFactory::initialize(module);
            t_HindiStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/hu/HungarianAnalyzer.h"
#include "org/apache/lucene/analysis/hu/HungarianLightStemFilter.h"
#include "org/apache/lucene/analysis/hu/HungarianLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/hu/HungarianLightStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hu {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hu");

            t_HungarianAnalyzer::install(module);
            t_HungarianLightStemFilter::install(module);
            t_HungarianLightStemFilterFactory::install(module);
            t_HungarianLightStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hu");

            t_HungarianAnalyzer::initialize(module);
            t_HungarianLightStemFilter::initialize(module);
            t_HungarianLightStemFilterFactory::initialize(module);
            t_HungarianLightStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/hunspell/Dictionary.h"
#include "org/apache/lucene/analysis/hunspell/HunspellStemFilter.h"
#include "org/apache/lucene/analysis/hunspell/HunspellStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hunspell");

            t_Dictionary::install(module);
            t_HunspellStemFilter::install(module);
            t_HunspellStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hunspell");

            t_Dictionary::initialize(module);
            t_HunspellStemFilter::initialize(module);
            t_HunspellStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/hy/ArmenianAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hy {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hy");

            t_ArmenianAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hy");

            t_ArmenianAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/id/IndonesianAnalyzer.h"
#include "org/apache/lucene/analysis/id/IndonesianStemFilter.h"
#include "org/apache/lucene/analysis/id/IndonesianStemFilterFactory.h"
#include "org/apache/lucene/analysis/id/IndonesianStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace id {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "id");

            t_IndonesianAnalyzer::install(module);
            t_IndonesianStemFilter::install(module);
            t_IndonesianStemFilterFactory::install(module);
            t_IndonesianStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "id");

            t_IndonesianAnalyzer::initialize(module);
            t_IndonesianStemFilter::initialize(module);
            t_IndonesianStemFilterFactory::initialize(module);
            t_IndonesianStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/in/IndicNormalizationFilter.h"
#include "org/apache/lucene/analysis/in/IndicNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/in/IndicNormalizer.h"
#include "org/apache/lucene/analysis/in/IndicTokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace in {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "in");

            t_IndicNormalizationFilter::install(module);
            t_IndicNormalizationFilterFactory::install(module);
            t_IndicNormalizer::install(module);
            t_IndicTokenizer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "in");

            t_IndicNormalizationFilter::initialize(module);
            t_IndicNormalizationFilterFactory::initialize(module);
            t_IndicNormalizer::initialize(module);
            t_IndicTokenizer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/it/ItalianAnalyzer.h"
#include "org/apache/lucene/analysis/it/ItalianLightStemFilter.h"
#include "org/apache/lucene/analysis/it/ItalianLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/it/ItalianLightStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace it {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "it");

            t_ItalianAnalyzer::install(module);
            t_ItalianLightStemFilter::install(module);
            t_ItalianLightStemFilterFactory::install(module);
            t_ItalianLightStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "it");

            t_ItalianAnalyzer::initialize(module);
            t_ItalianLightStemFilter::initialize(module);
            t_ItalianLightStemFilterFactory::initialize(module);
            t_ItalianLightStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/lv/LatvianAnalyzer.h"
#include "org/apache/lucene/analysis/lv/LatvianStemFilter.h"
#include "org/apache/lucene/analysis/lv/LatvianStemFilterFactory.h"
#include "org/apache/lucene/analysis/lv/LatvianStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace lv {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "lv");

            t_LatvianAnalyzer::install(module);
            t_LatvianStemFilter::install(module);
            t_LatvianStemFilterFactory::install(module);
            t_LatvianStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "lv");

            t_LatvianAnalyzer::initialize(module);
            t_LatvianStemFilter::initialize(module);
            t_LatvianStemFilterFactory::initialize(module);
            t_LatvianStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/miscellaneous/ASCIIFoldingFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/ASCIIFoldingFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/CapitalizationFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/CapitalizationFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/CodepointCountFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/CodepointCountFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/EmptyTokenStream.h"
#include "org/apache/lucene/analysis/miscellaneous/HyphenatedWordsFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/HyphenatedWordsFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/KeepWordFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/KeepWordFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/KeywordMarkerFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/KeywordMarkerFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/KeywordRepeatFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/KeywordRepeatFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/LengthFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/LengthFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/LimitTokenCountAnalyzer.h"
#include "org/apache/lucene/analysis/miscellaneous/LimitTokenCountFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/LimitTokenCountFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/LimitTokenPositionFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/LimitTokenPositionFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/Lucene47WordDelimiterFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/PatternAnalyzer.h"
#include "org/apache/lucene/analysis/miscellaneous/PatternKeywordMarkerFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/PerFieldAnalyzerWrapper.h"
#include "org/apache/lucene/analysis/miscellaneous/PrefixAndSuffixAwareTokenFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/PrefixAwareTokenFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/RemoveDuplicatesTokenFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/RemoveDuplicatesTokenFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/ScandinavianFoldingFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/ScandinavianFoldingFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/ScandinavianNormalizationFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/ScandinavianNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/SetKeywordMarkerFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/SingleTokenTokenStream.h"
#include "org/apache/lucene/analysis/miscellaneous/StemmerOverrideFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/StemmerOverrideFilter$Builder.h"
#include "org/apache/lucene/analysis/miscellaneous/StemmerOverrideFilter$StemmerOverrideMap.h"
#include "org/apache/lucene/analysis/miscellaneous/StemmerOverrideFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/TrimFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/TrimFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/TruncateTokenFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/TruncateTokenFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/WordDelimiterFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/WordDelimiterFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/WordDelimiterIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "miscellaneous");

            t_ASCIIFoldingFilter::install(module);
            t_ASCIIFoldingFilterFactory::install(module);
            t_CapitalizationFilter::install(module);
            t_CapitalizationFilterFactory::install(module);
            t_CodepointCountFilter::install(module);
            t_CodepointCountFilterFactory::install(module);
            t_EmptyTokenStream::install(module);
            t_HyphenatedWordsFilter::install(module);
            t_HyphenatedWordsFilterFactory::install(module);
            t_KeepWordFilter::install(module);
            t_KeepWordFilterFactory::install(module);
            t_KeywordMarkerFilter::install(module);
            t_KeywordMarkerFilterFactory::install(module);
            t_KeywordRepeatFilter::install(module);
            t_KeywordRepeatFilterFactory::install(module);
            t_LengthFilter::install(module);
            t_LengthFilterFactory::install(module);
            t_LimitTokenCountAnalyzer::install(module);
            t_LimitTokenCountFilter::install(module);
            t_LimitTokenCountFilterFactory::install(module);
            t_LimitTokenPositionFilter::install(module);
            t_LimitTokenPositionFilterFactory::install(module);
            t_Lucene47WordDelimiterFilter::install(module);
            t_PatternAnalyzer::install(module);
            t_PatternKeywordMarkerFilter::install(module);
            t_PerFieldAnalyzerWrapper::install(module);
            t_PrefixAndSuffixAwareTokenFilter::install(module);
            t_PrefixAwareTokenFilter::install(module);
            t_RemoveDuplicatesTokenFilter::install(module);
            t_RemoveDuplicatesTokenFilterFactory::install(module);
            t_ScandinavianFoldingFilter::install(module);
            t_ScandinavianFoldingFilterFactory::install(module);
            t_ScandinavianNormalizationFilter::install(module);
            t_ScandinavianNormalizationFilterFactory::install(module);
            t_SetKeywordMarkerFilter::install(module);
            t_SingleTokenTokenStream::install(module);
            t_StemmerOverrideFilter::install(module);
            t_StemmerOverrideFilter$Builder::install(module);
            t_StemmerOverrideFilter$StemmerOverrideMap::install(module);
            t_StemmerOverrideFilterFactory::install(module);
            t_TrimFilter::install(module);
            t_TrimFilterFactory::install(module);
            t_TruncateTokenFilter::install(module);
            t_TruncateTokenFilterFactory::install(module);
            t_WordDelimiterFilter::install(module);
            t_WordDelimiterFilterFactory::install(module);
            t_WordDelimiterIterator::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "miscellaneous");

            t_ASCIIFoldingFilter::initialize(module);
            t_ASCIIFoldingFilterFactory::initialize(module);
            t_CapitalizationFilter::initialize(module);
            t_CapitalizationFilterFactory::initialize(module);
            t_CodepointCountFilter::initialize(module);
            t_CodepointCountFilterFactory::initialize(module);
            t_EmptyTokenStream::initialize(module);
            t_HyphenatedWordsFilter::initialize(module);
            t_HyphenatedWordsFilterFactory::initialize(module);
            t_KeepWordFilter::initialize(module);
            t_KeepWordFilterFactory::initialize(module);
            t_KeywordMarkerFilter::initialize(module);
            t_KeywordMarkerFilterFactory::initialize(module);
            t_KeywordRepeatFilter::initialize(module);
            t_KeywordRepeatFilterFactory::initialize(module);
            t_LengthFilter::initialize(module);
            t_LengthFilterFactory::initialize(module);
            t_LimitTokenCountAnalyzer::initialize(module);
            t_LimitTokenCountFilter::initialize(module);
            t_LimitTokenCountFilterFactory::initialize(module);
            t_LimitTokenPositionFilter::initialize(module);
            t_LimitTokenPositionFilterFactory::initialize(module);
            t_Lucene47WordDelimiterFilter::initialize(module);
            t_PatternAnalyzer::initialize(module);
            t_PatternKeywordMarkerFilter::initialize(module);
            t_PerFieldAnalyzerWrapper::initialize(module);
            t_PrefixAndSuffixAwareTokenFilter::initialize(module);
            t_PrefixAwareTokenFilter::initialize(module);
            t_RemoveDuplicatesTokenFilter::initialize(module);
            t_RemoveDuplicatesTokenFilterFactory::initialize(module);
            t_ScandinavianFoldingFilter::initialize(module);
            t_ScandinavianFoldingFilterFactory::initialize(module);
            t_ScandinavianNormalizationFilter::initialize(module);
            t_ScandinavianNormalizationFilterFactory::initialize(module);
            t_SetKeywordMarkerFilter::initialize(module);
            t_SingleTokenTokenStream::initialize(module);
            t_StemmerOverrideFilter::initialize(module);
            t_StemmerOverrideFilter$Builder::initialize(module);
            t_StemmerOverrideFilter$StemmerOverrideMap::initialize(module);
            t_StemmerOverrideFilterFactory::initialize(module);
            t_TrimFilter::initialize(module);
            t_TrimFilterFactory::initialize(module);
            t_TruncateTokenFilter::initialize(module);
            t_TruncateTokenFilterFactory::initialize(module);
            t_WordDelimiterFilter::initialize(module);
            t_WordDelimiterFilterFactory::initialize(module);
            t_WordDelimiterIterator::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ngram/EdgeNGramFilterFactory.h"
#include "org/apache/lucene/analysis/ngram/EdgeNGramTokenFilter.h"
#include "org/apache/lucene/analysis/ngram/EdgeNGramTokenFilter$Side.h"
#include "org/apache/lucene/analysis/ngram/EdgeNGramTokenizer.h"
#include "org/apache/lucene/analysis/ngram/EdgeNGramTokenizerFactory.h"
#include "org/apache/lucene/analysis/ngram/Lucene43EdgeNGramTokenizer.h"
#include "org/apache/lucene/analysis/ngram/Lucene43EdgeNGramTokenizer$Side.h"
#include "org/apache/lucene/analysis/ngram/Lucene43NGramTokenizer.h"
#include "org/apache/lucene/analysis/ngram/NGramFilterFactory.h"
#include "org/apache/lucene/analysis/ngram/NGramTokenFilter.h"
#include "org/apache/lucene/analysis/ngram/NGramTokenizer.h"
#include "org/apache/lucene/analysis/ngram/NGramTokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ngram {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ngram");

            t_EdgeNGramFilterFactory::install(module);
            t_EdgeNGramTokenFilter::install(module);
            t_EdgeNGramTokenFilter$Side::install(module);
            t_EdgeNGramTokenizer::install(module);
            t_EdgeNGramTokenizerFactory::install(module);
            t_Lucene43EdgeNGramTokenizer::install(module);
            t_Lucene43EdgeNGramTokenizer$Side::install(module);
            t_Lucene43NGramTokenizer::install(module);
            t_NGramFilterFactory::install(module);
            t_NGramTokenFilter::install(module);
            t_NGramTokenizer::install(module);
            t_NGramTokenizerFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ngram");

            t_EdgeNGramFilterFactory::initialize(module);
            t_EdgeNGramTokenFilter::initialize(module);
            t_EdgeNGramTokenFilter$Side::initialize(module);
            t_EdgeNGramTokenizer::initialize(module);
            t_EdgeNGramTokenizerFactory::initialize(module);
            t_Lucene43EdgeNGramTokenizer::initialize(module);
            t_Lucene43EdgeNGramTokenizer$Side::initialize(module);
            t_Lucene43NGramTokenizer::initialize(module);
            t_NGramFilterFactory::initialize(module);
            t_NGramTokenFilter::initialize(module);
            t_NGramTokenizer::initialize(module);
            t_NGramTokenizerFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/nl/DutchAnalyzer.h"
#include "org/apache/lucene/analysis/nl/DutchStemFilter.h"
#include "org/apache/lucene/analysis/nl/DutchStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace nl {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "nl");

            t_DutchAnalyzer::install(module);
            t_DutchStemFilter::install(module);
            t_DutchStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "nl");

            t_DutchAnalyzer::initialize(module);
            t_DutchStemFilter::initialize(module);
            t_DutchStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/no/NorwegianAnalyzer.h"
#include "org/apache/lucene/analysis/no/NorwegianLightStemFilter.h"
#include "org/apache/lucene/analysis/no/NorwegianLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/no/NorwegianLightStemmer.h"
#include "org/apache/lucene/analysis/no/NorwegianMinimalStemFilter.h"
#include "org/apache/lucene/analysis/no/NorwegianMinimalStemFilterFactory.h"
#include "org/apache/lucene/analysis/no/NorwegianMinimalStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace no {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "no");

            t_NorwegianAnalyzer::install(module);
            t_NorwegianLightStemFilter::install(module);
            t_NorwegianLightStemFilterFactory::install(module);
            t_NorwegianLightStemmer::install(module);
            t_NorwegianMinimalStemFilter::install(module);
            t_NorwegianMinimalStemFilterFactory::install(module);
            t_NorwegianMinimalStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "no");

            t_NorwegianAnalyzer::initialize(module);
            t_NorwegianLightStemFilter::initialize(module);
            t_NorwegianLightStemFilterFactory::initialize(module);
            t_NorwegianLightStemmer::initialize(module);
            t_NorwegianMinimalStemFilter::initialize(module);
            t_NorwegianMinimalStemFilterFactory::initialize(module);
            t_NorwegianMinimalStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/path/PathHierarchyTokenizer.h"
#include "org/apache/lucene/analysis/path/PathHierarchyTokenizerFactory.h"
#include "org/apache/lucene/analysis/path/ReversePathHierarchyTokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace path {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "path");

            t_PathHierarchyTokenizer::install(module);
            t_PathHierarchyTokenizerFactory::install(module);
            t_ReversePathHierarchyTokenizer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "path");

            t_PathHierarchyTokenizer::initialize(module);
            t_PathHierarchyTokenizerFactory::initialize(module);
            t_ReversePathHierarchyTokenizer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/pattern/PatternCaptureGroupFilterFactory.h"
#include "org/apache/lucene/analysis/pattern/PatternCaptureGroupTokenFilter.h"
#include "org/apache/lucene/analysis/pattern/PatternReplaceCharFilter.h"
#include "org/apache/lucene/analysis/pattern/PatternReplaceCharFilterFactory.h"
#include "org/apache/lucene/analysis/pattern/PatternReplaceFilter.h"
#include "org/apache/lucene/analysis/pattern/PatternReplaceFilterFactory.h"
#include "org/apache/lucene/analysis/pattern/PatternTokenizer.h"
#include "org/apache/lucene/analysis/pattern/PatternTokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "pattern");

            t_PatternCaptureGroupFilterFactory::install(module);
            t_PatternCaptureGroupTokenFilter::install(module);
            t_PatternReplaceCharFilter::install(module);
            t_PatternReplaceCharFilterFactory::install(module);
            t_PatternReplaceFilter::install(module);
            t_PatternReplaceFilterFactory::install(module);
            t_PatternTokenizer::install(module);
            t_PatternTokenizerFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "pattern");

            t_PatternCaptureGroupFilterFactory::initialize(module);
            t_PatternCaptureGroupTokenFilter::initialize(module);
            t_PatternReplaceCharFilter::initialize(module);
            t_PatternReplaceCharFilterFactory::initialize(module);
            t_PatternReplaceFilter::initialize(module);
            t_PatternReplaceFilterFactory::initialize(module);
            t_PatternTokenizer::initialize(module);
            t_PatternTokenizerFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/payloads/AbstractEncoder.h"
#include "org/apache/lucene/analysis/payloads/DelimitedPayloadTokenFilter.h"
#include "org/apache/lucene/analysis/payloads/DelimitedPayloadTokenFilterFactory.h"
#include "org/apache/lucene/analysis/payloads/FloatEncoder.h"
#include "org/apache/lucene/analysis/payloads/IdentityEncoder.h"
#include "org/apache/lucene/analysis/payloads/IntegerEncoder.h"
#include "org/apache/lucene/analysis/payloads/NumericPayloadTokenFilter.h"
#include "org/apache/lucene/analysis/payloads/NumericPayloadTokenFilterFactory.h"
#include "org/apache/lucene/analysis/payloads/PayloadEncoder.h"
#include "org/apache/lucene/analysis/payloads/PayloadHelper.h"
#include "org/apache/lucene/analysis/payloads/TokenOffsetPayloadTokenFilter.h"
#include "org/apache/lucene/analysis/payloads/TokenOffsetPayloadTokenFilterFactory.h"
#include "org/apache/lucene/analysis/payloads/TypeAsPayloadTokenFilter.h"
#include "org/apache/lucene/analysis/payloads/TypeAsPayloadTokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace payloads {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "payloads");

            t_AbstractEncoder::install(module);
            t_DelimitedPayloadTokenFilter::install(module);
            t_DelimitedPayloadTokenFilterFactory::install(module);
            t_FloatEncoder::install(module);
            t_IdentityEncoder::install(module);
            t_IntegerEncoder::install(module);
            t_NumericPayloadTokenFilter::install(module);
            t_NumericPayloadTokenFilterFactory::install(module);
            t_PayloadEncoder::install(module);
            t_PayloadHelper::install(module);
            t_TokenOffsetPayloadTokenFilter::install(module);
            t_TokenOffsetPayloadTokenFilterFactory::install(module);
            t_TypeAsPayloadTokenFilter::install(module);
            t_TypeAsPayloadTokenFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "payloads");

            t_AbstractEncoder::initialize(module);
            t_DelimitedPayloadTokenFilter::initialize(module);
            t_DelimitedPayloadTokenFilterFactory::initialize(module);
            t_FloatEncoder::initialize(module);
            t_IdentityEncoder::initialize(module);
            t_IntegerEncoder::initialize(module);
            t_NumericPayloadTokenFilter::initialize(module);
            t_NumericPayloadTokenFilterFactory::initialize(module);
            t_PayloadEncoder::initialize(module);
            t_PayloadHelper::initialize(module);
            t_TokenOffsetPayloadTokenFilter::initialize(module);
            t_TokenOffsetPayloadTokenFilterFactory::initialize(module);
            t_TypeAsPayloadTokenFilter::initialize(module);
            t_TypeAsPayloadTokenFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/pl/PolishAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pl {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "pl");

            t_PolishAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "pl");

            t_PolishAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/position/PositionFilter.h"
#include "org/apache/lucene/analysis/position/PositionFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace position {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "position");

            t_PositionFilter::install(module);
            t_PositionFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "position");

            t_PositionFilter::initialize(module);
            t_PositionFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/pt/PortugueseAnalyzer.h"
#include "org/apache/lucene/analysis/pt/PortugueseLightStemFilter.h"
#include "org/apache/lucene/analysis/pt/PortugueseLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/pt/PortugueseLightStemmer.h"
#include "org/apache/lucene/analysis/pt/PortugueseMinimalStemFilter.h"
#include "org/apache/lucene/analysis/pt/PortugueseMinimalStemFilterFactory.h"
#include "org/apache/lucene/analysis/pt/PortugueseMinimalStemmer.h"
#include "org/apache/lucene/analysis/pt/PortugueseStemFilter.h"
#include "org/apache/lucene/analysis/pt/PortugueseStemFilterFactory.h"
#include "org/apache/lucene/analysis/pt/PortugueseStemmer.h"
#include "org/apache/lucene/analysis/pt/RSLPStemmerBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pt {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "pt");

            t_PortugueseAnalyzer::install(module);
            t_PortugueseLightStemFilter::install(module);
            t_PortugueseLightStemFilterFactory::install(module);
            t_PortugueseLightStemmer::install(module);
            t_PortugueseMinimalStemFilter::install(module);
            t_PortugueseMinimalStemFilterFactory::install(module);
            t_PortugueseMinimalStemmer::install(module);
            t_PortugueseStemFilter::install(module);
            t_PortugueseStemFilterFactory::install(module);
            t_PortugueseStemmer::install(module);
            t_RSLPStemmerBase::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "pt");

            t_PortugueseAnalyzer::initialize(module);
            t_PortugueseLightStemFilter::initialize(module);
            t_PortugueseLightStemFilterFactory::initialize(module);
            t_PortugueseLightStemmer::initialize(module);
            t_PortugueseMinimalStemFilter::initialize(module);
            t_PortugueseMinimalStemFilterFactory::initialize(module);
            t_PortugueseMinimalStemmer::initialize(module);
            t_PortugueseStemFilter::initialize(module);
            t_PortugueseStemFilterFactory::initialize(module);
            t_PortugueseStemmer::initialize(module);
            t_RSLPStemmerBase::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/query/QueryAutoStopWordAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace query {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "query");

            t_QueryAutoStopWordAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "query");

            t_QueryAutoStopWordAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/reverse/ReverseStringFilter.h"
#include "org/apache/lucene/analysis/reverse/ReverseStringFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace reverse {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "reverse");

            t_ReverseStringFilter::install(module);
            t_ReverseStringFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "reverse");

            t_ReverseStringFilter::initialize(module);
            t_ReverseStringFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ro/RomanianAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ro {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ro");

            t_RomanianAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ro");

            t_RomanianAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ru/RussianAnalyzer.h"
#include "org/apache/lucene/analysis/ru/RussianLetterTokenizer.h"
#include "org/apache/lucene/analysis/ru/RussianLetterTokenizerFactory.h"
#include "org/apache/lucene/analysis/ru/RussianLightStemFilter.h"
#include "org/apache/lucene/analysis/ru/RussianLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/ru/RussianLightStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ru {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ru");

            t_RussianAnalyzer::install(module);
            t_RussianLetterTokenizer::install(module);
            t_RussianLetterTokenizerFactory::install(module);
            t_RussianLightStemFilter::install(module);
            t_RussianLightStemFilterFactory::install(module);
            t_RussianLightStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ru");

            t_RussianAnalyzer::initialize(module);
            t_RussianLetterTokenizer::initialize(module);
            t_RussianLetterTokenizerFactory::initialize(module);
            t_RussianLightStemFilter::initialize(module);
            t_RussianLightStemFilterFactory::initialize(module);
            t_RussianLightStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/shingle/ShingleAnalyzerWrapper.h"
#include "org/apache/lucene/analysis/shingle/ShingleFilter.h"
#include "org/apache/lucene/analysis/shingle/ShingleFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace shingle {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "shingle");

            t_ShingleAnalyzerWrapper::install(module);
            t_ShingleFilter::install(module);
            t_ShingleFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "shingle");

            t_ShingleAnalyzerWrapper::initialize(module);
            t_ShingleFilter::initialize(module);
            t_ShingleFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/sinks/DateRecognizerSinkFilter.h"
#include "org/apache/lucene/analysis/sinks/TeeSinkTokenFilter.h"
#include "org/apache/lucene/analysis/sinks/TeeSinkTokenFilter$SinkFilter.h"
#include "org/apache/lucene/analysis/sinks/TeeSinkTokenFilter$SinkTokenStream.h"
#include "org/apache/lucene/analysis/sinks/TokenRangeSinkFilter.h"
#include "org/apache/lucene/analysis/sinks/TokenTypeSinkFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace sinks {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "sinks");

            t_DateRecognizerSinkFilter::install(module);
            t_TeeSinkTokenFilter::install(module);
            t_TeeSinkTokenFilter$SinkFilter::install(module);
            t_TeeSinkTokenFilter$SinkTokenStream::install(module);
            t_TokenRangeSinkFilter::install(module);
            t_TokenTypeSinkFilter::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "sinks");

            t_DateRecognizerSinkFilter::initialize(module);
            t_TeeSinkTokenFilter::initialize(module);
            t_TeeSinkTokenFilter$SinkFilter::initialize(module);
            t_TeeSinkTokenFilter$SinkTokenStream::initialize(module);
            t_TokenRangeSinkFilter::initialize(module);
            t_TokenTypeSinkFilter::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/snowball/SnowballAnalyzer.h"
#include "org/apache/lucene/analysis/snowball/SnowballFilter.h"
#include "org/apache/lucene/analysis/snowball/SnowballPorterFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace snowball {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "snowball");

            t_SnowballAnalyzer::install(module);
            t_SnowballFilter::install(module);
            t_SnowballPorterFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "snowball");

            t_SnowballAnalyzer::initialize(module);
            t_SnowballFilter::initialize(module);
            t_SnowballPorterFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/standard/ClassicAnalyzer.h"
#include "org/apache/lucene/analysis/standard/ClassicFilter.h"
#include "org/apache/lucene/analysis/standard/ClassicFilterFactory.h"
#include "org/apache/lucene/analysis/standard/ClassicTokenizer.h"
#include "org/apache/lucene/analysis/standard/ClassicTokenizerFactory.h"
#include "org/apache/lucene/analysis/standard/StandardAnalyzer.h"
#include "org/apache/lucene/analysis/standard/StandardFilter.h"
#include "org/apache/lucene/analysis/standard/StandardFilterFactory.h"
#include "org/apache/lucene/analysis/standard/StandardTokenizer.h"
#include "org/apache/lucene/analysis/standard/StandardTokenizerFactory.h"
#include "org/apache/lucene/analysis/standard/StandardTokenizerImpl.h"
#include "org/apache/lucene/analysis/standard/StandardTokenizerInterface.h"
#include "org/apache/lucene/analysis/standard/UAX29URLEmailAnalyzer.h"
#include "org/apache/lucene/analysis/standard/UAX29URLEmailTokenizer.h"
#include "org/apache/lucene/analysis/standard/UAX29URLEmailTokenizerFactory.h"
#include "org/apache/lucene/analysis/standard/UAX29URLEmailTokenizerImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace standard {

          namespace std31 {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace std34 {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace std36 {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace std40 {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "standard");

            t_ClassicAnalyzer::install(module);
            t_ClassicFilter::install(module);
            t_ClassicFilterFactory::install(module);
            t_ClassicTokenizer::install(module);
            t_ClassicTokenizerFactory::install(module);
            t_StandardAnalyzer::install(module);
            t_StandardFilter::install(module);
            t_StandardFilterFactory::install(module);
            t_StandardTokenizer::install(module);
            t_StandardTokenizerFactory::install(module);
            t_StandardTokenizerImpl::install(module);
            t_StandardTokenizerInterface::install(module);
            t_UAX29URLEmailAnalyzer::install(module);
            t_UAX29URLEmailTokenizer::install(module);
            t_UAX29URLEmailTokenizerFactory::install(module);
            t_UAX29URLEmailTokenizerImpl::install(module);
            std31::__install__(module);
            std34::__install__(module);
            std36::__install__(module);
            std40::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "standard");

            t_ClassicAnalyzer::initialize(module);
            t_ClassicFilter::initialize(module);
            t_ClassicFilterFactory::initialize(module);
            t_ClassicTokenizer::initialize(module);
            t_ClassicTokenizerFactory::initialize(module);
            t_StandardAnalyzer::initialize(module);
            t_StandardFilter::initialize(module);
            t_StandardFilterFactory::initialize(module);
            t_StandardTokenizer::initialize(module);
            t_StandardTokenizerFactory::initialize(module);
            t_StandardTokenizerImpl::initialize(module);
            t_StandardTokenizerInterface::initialize(module);
            t_UAX29URLEmailAnalyzer::initialize(module);
            t_UAX29URLEmailTokenizer::initialize(module);
            t_UAX29URLEmailTokenizerFactory::initialize(module);
            t_UAX29URLEmailTokenizerImpl::initialize(module);
            std31::__initialize__(module);
            std34::__initialize__(module);
            std36::__initialize__(module);
            std40::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/standard/std31/StandardTokenizerImpl31.h"
#include "org/apache/lucene/analysis/standard/std31/UAX29URLEmailTokenizerImpl31.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace standard {
          namespace std31 {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.standard", "std31");

              t_StandardTokenizerImpl31::install(module);
              t_UAX29URLEmailTokenizerImpl31::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.standard", "std31");

              t_StandardTokenizerImpl31::initialize(module);
              t_UAX29URLEmailTokenizerImpl31::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/standard/std34/StandardTokenizerImpl34.h"
#include "org/apache/lucene/analysis/standard/std34/UAX29URLEmailTokenizerImpl34.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace standard {
          namespace std34 {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.standard", "std34");

              t_StandardTokenizerImpl34::install(module);
              t_UAX29URLEmailTokenizerImpl34::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.standard", "std34");

              t_StandardTokenizerImpl34::initialize(module);
              t_UAX29URLEmailTokenizerImpl34::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/standard/std36/UAX29URLEmailTokenizerImpl36.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace standard {
          namespace std36 {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.standard", "std36");

              t_UAX29URLEmailTokenizerImpl36::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.standard", "std36");

              t_UAX29URLEmailTokenizerImpl36::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/standard/std40/StandardTokenizerImpl40.h"
#include "org/apache/lucene/analysis/standard/std40/UAX29URLEmailTokenizerImpl40.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace standard {
          namespace std40 {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.standard", "std40");

              t_StandardTokenizerImpl40::install(module);
              t_UAX29URLEmailTokenizerImpl40::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.standard", "std40");

              t_StandardTokenizerImpl40::initialize(module);
              t_UAX29URLEmailTokenizerImpl40::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/stempel/StempelFilter.h"
#include "org/apache/lucene/analysis/stempel/StempelPolishStemFilterFactory.h"
#include "org/apache/lucene/analysis/stempel/StempelStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace stempel {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "stempel");

            t_StempelFilter::install(module);
            t_StempelPolishStemFilterFactory::install(module);
            t_StempelStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "stempel");

            t_StempelFilter::initialize(module);
            t_StempelPolishStemFilterFactory::initialize(module);
            t_StempelStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/sv/SwedishAnalyzer.h"
#include "org/apache/lucene/analysis/sv/SwedishLightStemFilter.h"
#include "org/apache/lucene/analysis/sv/SwedishLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/sv/SwedishLightStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace sv {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "sv");

            t_SwedishAnalyzer::install(module);
            t_SwedishLightStemFilter::install(module);
            t_SwedishLightStemFilterFactory::install(module);
            t_SwedishLightStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "sv");

            t_SwedishAnalyzer::initialize(module);
            t_SwedishLightStemFilter::initialize(module);
            t_SwedishLightStemFilterFactory::initialize(module);
            t_SwedishLightStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/synonym/SolrSynonymParser.h"
#include "org/apache/lucene/analysis/synonym/SynonymFilter.h"
#include "org/apache/lucene/analysis/synonym/SynonymFilterFactory.h"
#include "org/apache/lucene/analysis/synonym/SynonymMap.h"
#include "org/apache/lucene/analysis/synonym/SynonymMap$Builder.h"
#include "org/apache/lucene/analysis/synonym/SynonymMap$Parser.h"
#include "org/apache/lucene/analysis/synonym/WordnetSynonymParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "synonym");

            t_SolrSynonymParser::install(module);
            t_SynonymFilter::install(module);
            t_SynonymFilterFactory::install(module);
            t_SynonymMap::install(module);
            t_SynonymMap$Builder::install(module);
            t_SynonymMap$Parser::install(module);
            t_WordnetSynonymParser::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "synonym");

            t_SolrSynonymParser::initialize(module);
            t_SynonymFilter::initialize(module);
            t_SynonymFilterFactory::initialize(module);
            t_SynonymMap::initialize(module);
            t_SynonymMap$Builder::initialize(module);
            t_SynonymMap$Parser::initialize(module);
            t_WordnetSynonymParser::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/th/ThaiAnalyzer.h"
#include "org/apache/lucene/analysis/th/ThaiTokenizer.h"
#include "org/apache/lucene/analysis/th/ThaiTokenizerFactory.h"
#include "org/apache/lucene/analysis/th/ThaiWordFilter.h"
#include "org/apache/lucene/analysis/th/ThaiWordFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace th {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "th");

            t_ThaiAnalyzer::install(module);
            t_ThaiTokenizer::install(module);
            t_ThaiTokenizerFactory::install(module);
            t_ThaiWordFilter::install(module);
            t_ThaiWordFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "th");

            t_ThaiAnalyzer::initialize(module);
            t_ThaiTokenizer::initialize(module);
            t_ThaiTokenizerFactory::initialize(module);
            t_ThaiWordFilter::initialize(module);
            t_ThaiWordFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/tokenattributes/CharTermAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/CharTermAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/FlagsAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/FlagsAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/KeywordAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/KeywordAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/OffsetAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/OffsetAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/PackedTokenAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/PayloadAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/PayloadAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/PositionIncrementAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/PositionIncrementAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/PositionLengthAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/PositionLengthAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/TermToBytesRefAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/TypeAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/TypeAttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "tokenattributes");

            t_CharTermAttribute::install(module);
            t_CharTermAttributeImpl::install(module);
            t_FlagsAttribute::install(module);
            t_FlagsAttributeImpl::install(module);
            t_KeywordAttribute::install(module);
            t_KeywordAttributeImpl::install(module);
            t_OffsetAttribute::install(module);
            t_OffsetAttributeImpl::install(module);
            t_PackedTokenAttributeImpl::install(module);
            t_PayloadAttribute::install(module);
            t_PayloadAttributeImpl::install(module);
            t_PositionIncrementAttribute::install(module);
            t_PositionIncrementAttributeImpl::install(module);
            t_PositionLengthAttribute::install(module);
            t_PositionLengthAttributeImpl::install(module);
            t_TermToBytesRefAttribute::install(module);
            t_TypeAttribute::install(module);
            t_TypeAttributeImpl::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "tokenattributes");

            t_CharTermAttribute::initialize(module);
            t_CharTermAttributeImpl::initialize(module);
            t_FlagsAttribute::initialize(module);
            t_FlagsAttributeImpl::initialize(module);
            t_KeywordAttribute::initialize(module);
            t_KeywordAttributeImpl::initialize(module);
            t_OffsetAttribute::initialize(module);
            t_OffsetAttributeImpl::initialize(module);
            t_PackedTokenAttributeImpl::initialize(module);
            t_PayloadAttribute::initialize(module);
            t_PayloadAttributeImpl::initialize(module);
            t_PositionIncrementAttribute::initialize(module);
            t_PositionIncrementAttributeImpl::initialize(module);
            t_PositionLengthAttribute::initialize(module);
            t_PositionLengthAttributeImpl::initialize(module);
            t_TermToBytesRefAttribute::initialize(module);
            t_TypeAttribute::initialize(module);
            t_TypeAttributeImpl::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/tr/ApostropheFilter.h"
#include "org/apache/lucene/analysis/tr/ApostropheFilterFactory.h"
#include "org/apache/lucene/analysis/tr/TurkishAnalyzer.h"
#include "org/apache/lucene/analysis/tr/TurkishLowerCaseFilter.h"
#include "org/apache/lucene/analysis/tr/TurkishLowerCaseFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tr {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "tr");

            t_ApostropheFilter::install(module);
            t_ApostropheFilterFactory::install(module);
            t_TurkishAnalyzer::install(module);
            t_TurkishLowerCaseFilter::install(module);
            t_TurkishLowerCaseFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "tr");

            t_ApostropheFilter::initialize(module);
            t_ApostropheFilterFactory::initialize(module);
            t_TurkishAnalyzer::initialize(module);
            t_TurkishLowerCaseFilter::initialize(module);
            t_TurkishLowerCaseFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/util/AbstractAnalysisFactory.h"
#include "org/apache/lucene/analysis/util/CharArrayIterator.h"
#include "org/apache/lucene/analysis/util/CharArrayMap.h"
#include "org/apache/lucene/analysis/util/CharArrayMap$EntryIterator.h"
#include "org/apache/lucene/analysis/util/CharArrayMap$EntrySet.h"
#include "org/apache/lucene/analysis/util/CharArraySet.h"
#include "org/apache/lucene/analysis/util/CharFilterFactory.h"
#include "org/apache/lucene/analysis/util/CharTokenizer.h"
#include "org/apache/lucene/analysis/util/CharacterUtils.h"
#include "org/apache/lucene/analysis/util/CharacterUtils$CharacterBuffer.h"
#include "org/apache/lucene/analysis/util/ClasspathResourceLoader.h"
#include "org/apache/lucene/analysis/util/ElisionFilter.h"
#include "org/apache/lucene/analysis/util/ElisionFilterFactory.h"
#include "org/apache/lucene/analysis/util/FilesystemResourceLoader.h"
#include "org/apache/lucene/analysis/util/FilteringTokenFilter.h"
#include "org/apache/lucene/analysis/util/MultiTermAwareComponent.h"
#include "org/apache/lucene/analysis/util/OpenStringBuilder.h"
#include "org/apache/lucene/analysis/util/ResourceLoader.h"
#include "org/apache/lucene/analysis/util/ResourceLoaderAware.h"
#include "org/apache/lucene/analysis/util/RollingCharBuffer.h"
#include "org/apache/lucene/analysis/util/SegmentingTokenizerBase.h"
#include "org/apache/lucene/analysis/util/StemmerUtil.h"
#include "org/apache/lucene/analysis/util/StopwordAnalyzerBase.h"
#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"
#include "org/apache/lucene/analysis/util/TokenizerFactory.h"
#include "org/apache/lucene/analysis/util/WordlistLoader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "util");

            t_AbstractAnalysisFactory::install(module);
            t_CharArrayIterator::install(module);
            t_CharArrayMap::install(module);
            t_CharArrayMap$EntryIterator::install(module);
            t_CharArrayMap$EntrySet::install(module);
            t_CharArraySet::install(module);
            t_CharFilterFactory::install(module);
            t_CharTokenizer::install(module);
            t_CharacterUtils::install(module);
            t_CharacterUtils$CharacterBuffer::install(module);
            t_ClasspathResourceLoader::install(module);
            t_ElisionFilter::install(module);
            t_ElisionFilterFactory::install(module);
            t_FilesystemResourceLoader::install(module);
            t_FilteringTokenFilter::install(module);
            t_MultiTermAwareComponent::install(module);
            t_OpenStringBuilder::install(module);
            t_ResourceLoader::install(module);
            t_ResourceLoaderAware::install(module);
            t_RollingCharBuffer::install(module);
            t_SegmentingTokenizerBase::install(module);
            t_StemmerUtil::install(module);
            t_StopwordAnalyzerBase::install(module);
            t_TokenFilterFactory::install(module);
            t_TokenizerFactory::install(module);
            t_WordlistLoader::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "util");

            t_AbstractAnalysisFactory::initialize(module);
            t_CharArrayIterator::initialize(module);
            t_CharArrayMap::initialize(module);
            t_CharArrayMap$EntryIterator::initialize(module);
            t_CharArrayMap$EntrySet::initialize(module);
            t_CharArraySet::initialize(module);
            t_CharFilterFactory::initialize(module);
            t_CharTokenizer::initialize(module);
            t_CharacterUtils::initialize(module);
            t_CharacterUtils$CharacterBuffer::initialize(module);
            t_ClasspathResourceLoader::initialize(module);
            t_ElisionFilter::initialize(module);
            t_ElisionFilterFactory::initialize(module);
            t_FilesystemResourceLoader::initialize(module);
            t_FilteringTokenFilter::initialize(module);
            t_MultiTermAwareComponent::initialize(module);
            t_OpenStringBuilder::initialize(module);
            t_ResourceLoader::initialize(module);
            t_ResourceLoaderAware::initialize(module);
            t_RollingCharBuffer::initialize(module);
            t_SegmentingTokenizerBase::initialize(module);
            t_StemmerUtil::initialize(module);
            t_StopwordAnalyzerBase::initialize(module);
            t_TokenFilterFactory::initialize(module);
            t_TokenizerFactory::initialize(module);
            t_WordlistLoader::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/wikipedia/WikipediaTokenizer.h"
#include "org/apache/lucene/analysis/wikipedia/WikipediaTokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace wikipedia {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "wikipedia");

            t_WikipediaTokenizer::install(module);
            t_WikipediaTokenizerFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "wikipedia");

            t_WikipediaTokenizer::initialize(module);
            t_WikipediaTokenizerFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/BlockTermState.h"
#include "org/apache/lucene/codecs/Codec.h"
#include "org/apache/lucene/codecs/CodecUtil.h"
#include "org/apache/lucene/codecs/DocValuesConsumer.h"
#include "org/apache/lucene/codecs/DocValuesFormat.h"
#include "org/apache/lucene/codecs/DocValuesProducer.h"
#include "org/apache/lucene/codecs/FieldInfosFormat.h"
#include "org/apache/lucene/codecs/FieldInfosReader.h"
#include "org/apache/lucene/codecs/FieldInfosWriter.h"
#include "org/apache/lucene/codecs/FieldsConsumer.h"
#include "org/apache/lucene/codecs/FieldsProducer.h"
#include "org/apache/lucene/codecs/FilterCodec.h"
#include "org/apache/lucene/codecs/LiveDocsFormat.h"
#include "org/apache/lucene/codecs/MappingMultiDocsAndPositionsEnum.h"
#include "org/apache/lucene/codecs/MappingMultiDocsEnum.h"
#include "org/apache/lucene/codecs/MultiLevelSkipListReader.h"
#include "org/apache/lucene/codecs/MultiLevelSkipListWriter.h"
#include "org/apache/lucene/codecs/NormsFormat.h"
#include "org/apache/lucene/codecs/PostingsBaseFormat.h"
#include "org/apache/lucene/codecs/PostingsConsumer.h"
#include "org/apache/lucene/codecs/PostingsFormat.h"
#include "org/apache/lucene/codecs/PostingsReaderBase.h"
#include "org/apache/lucene/codecs/PostingsWriterBase.h"
#include "org/apache/lucene/codecs/SegmentInfoFormat.h"
#include "org/apache/lucene/codecs/SegmentInfoReader.h"
#include "org/apache/lucene/codecs/SegmentInfoWriter.h"
#include "org/apache/lucene/codecs/StoredFieldsFormat.h"
#include "org/apache/lucene/codecs/StoredFieldsReader.h"
#include "org/apache/lucene/codecs/StoredFieldsWriter.h"
#include "org/apache/lucene/codecs/TermStats.h"
#include "org/apache/lucene/codecs/TermVectorsFormat.h"
#include "org/apache/lucene/codecs/TermVectorsReader.h"
#include "org/apache/lucene/codecs/TermVectorsWriter.h"
#include "org/apache/lucene/codecs/TermsConsumer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        namespace blocktree {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace compressing {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace idversion {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene3x {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene40 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene41 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene42 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene45 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene46 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene49 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace perfield {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "codecs");

          t_BlockTermState::install(module);
          t_Codec::install(module);
          t_CodecUtil::install(module);
          t_DocValuesConsumer::install(module);
          t_DocValuesFormat::install(module);
          t_DocValuesProducer::install(module);
          t_FieldInfosFormat::install(module);
          t_FieldInfosReader::install(module);
          t_FieldInfosWriter::install(module);
          t_FieldsConsumer::install(module);
          t_FieldsProducer::install(module);
          t_FilterCodec::install(module);
          t_LiveDocsFormat::install(module);
          t_MappingMultiDocsAndPositionsEnum::install(module);
          t_MappingMultiDocsEnum::install(module);
          t_MultiLevelSkipListReader::install(module);
          t_MultiLevelSkipListWriter::install(module);
          t_NormsFormat::install(module);
          t_PostingsBaseFormat::install(module);
          t_PostingsConsumer::install(module);
          t_PostingsFormat::install(module);
          t_PostingsReaderBase::install(module);
          t_PostingsWriterBase::install(module);
          t_SegmentInfoFormat::install(module);
          t_SegmentInfoReader::install(module);
          t_SegmentInfoWriter::install(module);
          t_StoredFieldsFormat::install(module);
          t_StoredFieldsReader::install(module);
          t_StoredFieldsWriter::install(module);
          t_TermStats::install(module);
          t_TermVectorsFormat::install(module);
          t_TermVectorsReader::install(module);
          t_TermVectorsWriter::install(module);
          t_TermsConsumer::install(module);
          blocktree::__install__(module);
          compressing::__install__(module);
          idversion::__install__(module);
          lucene3x::__install__(module);
          lucene40::__install__(module);
          lucene41::__install__(module);
          lucene42::__install__(module);
          lucene45::__install__(module);
          lucene46::__install__(module);
          lucene49::__install__(module);
          perfield::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "codecs");

          t_BlockTermState::initialize(module);
          t_Codec::initialize(module);
          t_CodecUtil::initialize(module);
          t_DocValuesConsumer::initialize(module);
          t_DocValuesFormat::initialize(module);
          t_DocValuesProducer::initialize(module);
          t_FieldInfosFormat::initialize(module);
          t_FieldInfosReader::initialize(module);
          t_FieldInfosWriter::initialize(module);
          t_FieldsConsumer::initialize(module);
          t_FieldsProducer::initialize(module);
          t_FilterCodec::initialize(module);
          t_LiveDocsFormat::initialize(module);
          t_MappingMultiDocsAndPositionsEnum::initialize(module);
          t_MappingMultiDocsEnum::initialize(module);
          t_MultiLevelSkipListReader::initialize(module);
          t_MultiLevelSkipListWriter::initialize(module);
          t_NormsFormat::initialize(module);
          t_PostingsBaseFormat::initialize(module);
          t_PostingsConsumer::initialize(module);
          t_PostingsFormat::initialize(module);
          t_PostingsReaderBase::initialize(module);
          t_PostingsWriterBase::initialize(module);
          t_SegmentInfoFormat::initialize(module);
          t_SegmentInfoReader::initialize(module);
          t_SegmentInfoWriter::initialize(module);
          t_StoredFieldsFormat::initialize(module);
          t_StoredFieldsReader::initialize(module);
          t_StoredFieldsWriter::initialize(module);
          t_TermStats::initialize(module);
          t_TermVectorsFormat::initialize(module);
          t_TermVectorsReader::initialize(module);
          t_TermVectorsWriter::initialize(module);
          t_TermsConsumer::initialize(module);
          blocktree::__initialize__(module);
          compressing::__initialize__(module);
          idversion::__initialize__(module);
          lucene3x::__initialize__(module);
          lucene40::__initialize__(module);
          lucene41::__initialize__(module);
          lucene42::__initialize__(module);
          lucene45::__initialize__(module);
          lucene46::__initialize__(module);
          lucene49::__initialize__(module);
          perfield::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/blocktree/BlockTreeTermsReader.h"
#include "org/apache/lucene/codecs/blocktree/BlockTreeTermsWriter.h"
#include "org/apache/lucene/codecs/blocktree/FieldReader.h"
#include "org/apache/lucene/codecs/blocktree/Stats.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blocktree {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "blocktree");

            t_BlockTreeTermsReader::install(module);
            t_BlockTreeTermsWriter::install(module);
            t_FieldReader::install(module);
            t_Stats::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "blocktree");

            t_BlockTreeTermsReader::initialize(module);
            t_BlockTreeTermsWriter::initialize(module);
            t_FieldReader::initialize(module);
            t_Stats::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/compressing/CompressingStoredFieldsFormat.h"
#include "org/apache/lucene/codecs/compressing/CompressingStoredFieldsIndexReader.h"
#include "org/apache/lucene/codecs/compressing/CompressingStoredFieldsIndexWriter.h"
#include "org/apache/lucene/codecs/compressing/CompressingStoredFieldsReader.h"
#include "org/apache/lucene/codecs/compressing/CompressingStoredFieldsWriter.h"
#include "org/apache/lucene/codecs/compressing/CompressingTermVectorsFormat.h"
#include "org/apache/lucene/codecs/compressing/CompressingTermVectorsReader.h"
#include "org/apache/lucene/codecs/compressing/CompressingTermVectorsWriter.h"
#include "org/apache/lucene/codecs/compressing/CompressionMode.h"
#include "org/apache/lucene/codecs/compressing/Compressor.h"
#include "org/apache/lucene/codecs/compressing/Decompressor.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace compressing {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "compressing");

            t_CompressingStoredFieldsFormat::install(module);
            t_CompressingStoredFieldsIndexReader::install(module);
            t_CompressingStoredFieldsIndexWriter::install(module);
            t_CompressingStoredFieldsReader::install(module);
            t_CompressingStoredFieldsWriter::install(module);
            t_CompressingTermVectorsFormat::install(module);
            t_CompressingTermVectorsReader::install(module);
            t_CompressingTermVectorsWriter::install(module);
            t_CompressionMode::install(module);
            t_Compressor::install(module);
            t_Decompressor::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "compressing");

            t_CompressingStoredFieldsFormat::initialize(module);
            t_CompressingStoredFieldsIndexReader::initialize(module);
            t_CompressingStoredFieldsIndexWriter::initialize(module);
            t_CompressingStoredFieldsReader::initialize(module);
            t_CompressingStoredFieldsWriter::initialize(module);
            t_CompressingTermVectorsFormat::initialize(module);
            t_CompressingTermVectorsReader::initialize(module);
            t_CompressingTermVectorsWriter::initialize(module);
            t_CompressionMode::initialize(module);
            t_Compressor::initialize(module);
            t_Decompressor::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/idversion/IDVersionPostingsFormat.h"
#include "org/apache/lucene/codecs/idversion/IDVersionSegmentTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace idversion {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "idversion");

            t_IDVersionPostingsFormat::install(module);
            t_IDVersionSegmentTermsEnum::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "idversion");

            t_IDVersionPostingsFormat::initialize(module);
            t_IDVersionSegmentTermsEnum::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene3x/Lucene3xCodec.h"
#include "org/apache/lucene/codecs/lucene3x/Lucene3xSegmentInfoFormat.h"
#include "org/apache/lucene/codecs/lucene3x/Lucene3xSegmentInfoReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene3x {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene3x");

            t_Lucene3xCodec::install(module);
            t_Lucene3xSegmentInfoFormat::install(module);
            t_Lucene3xSegmentInfoReader::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene3x");

            t_Lucene3xCodec::initialize(module);
            t_Lucene3xSegmentInfoFormat::initialize(module);
            t_Lucene3xSegmentInfoReader::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene40/Lucene40Codec.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40DocValuesFormat.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40FieldInfosFormat.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40LiveDocsFormat.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40NormsFormat.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40PostingsBaseFormat.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40PostingsFormat.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40PostingsReader.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40SegmentInfoFormat.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40SegmentInfoReader.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40SegmentInfoWriter.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40SkipListReader.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40StoredFieldsFormat.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40StoredFieldsReader.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40StoredFieldsWriter.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40TermVectorsFormat.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40TermVectorsReader.h"
#include "org/apache/lucene/codecs/lucene40/Lucene40TermVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene40 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene40");

            t_Lucene40Codec::install(module);
            t_Lucene40DocValuesFormat::install(module);
            t_Lucene40FieldInfosFormat::install(module);
            t_Lucene40LiveDocsFormat::install(module);
            t_Lucene40NormsFormat::install(module);
            t_Lucene40PostingsBaseFormat::install(module);
            t_Lucene40PostingsFormat::install(module);
            t_Lucene40PostingsReader::install(module);
            t_Lucene40SegmentInfoFormat::install(module);
            t_Lucene40SegmentInfoReader::install(module);
            t_Lucene40SegmentInfoWriter::install(module);
            t_Lucene40SkipListReader::install(module);
            t_Lucene40StoredFieldsFormat::install(module);
            t_Lucene40StoredFieldsReader::install(module);
            t_Lucene40StoredFieldsWriter::install(module);
            t_Lucene40TermVectorsFormat::install(module);
            t_Lucene40TermVectorsReader::install(module);
            t_Lucene40TermVectorsWriter::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene40");

            t_Lucene40Codec::initialize(module);
            t_Lucene40DocValuesFormat::initialize(module);
            t_Lucene40FieldInfosFormat::initialize(module);
            t_Lucene40LiveDocsFormat::initialize(module);
            t_Lucene40NormsFormat::initialize(module);
            t_Lucene40PostingsBaseFormat::initialize(module);
            t_Lucene40PostingsFormat::initialize(module);
            t_Lucene40PostingsReader::initialize(module);
            t_Lucene40SegmentInfoFormat::initialize(module);
            t_Lucene40SegmentInfoReader::initialize(module);
            t_Lucene40SegmentInfoWriter::initialize(module);
            t_Lucene40SkipListReader::initialize(module);
            t_Lucene40StoredFieldsFormat::initialize(module);
            t_Lucene40StoredFieldsReader::initialize(module);
            t_Lucene40StoredFieldsWriter::initialize(module);
            t_Lucene40TermVectorsFormat::initialize(module);
            t_Lucene40TermVectorsReader::initialize(module);
            t_Lucene40TermVectorsWriter::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene41/Lucene41Codec.h"
#include "org/apache/lucene/codecs/lucene41/Lucene41PostingsBaseFormat.h"
#include "org/apache/lucene/codecs/lucene41/Lucene41PostingsFormat.h"
#include "org/apache/lucene/codecs/lucene41/Lucene41PostingsReader.h"
#include "org/apache/lucene/codecs/lucene41/Lucene41PostingsWriter.h"
#include "org/apache/lucene/codecs/lucene41/Lucene41StoredFieldsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene41 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene41");

            t_Lucene41Codec::install(module);
            t_Lucene41PostingsBaseFormat::install(module);
            t_Lucene41PostingsFormat::install(module);
            t_Lucene41PostingsReader::install(module);
            t_Lucene41PostingsWriter::install(module);
            t_Lucene41StoredFieldsFormat::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene41");

            t_Lucene41Codec::initialize(module);
            t_Lucene41PostingsBaseFormat::initialize(module);
            t_Lucene41PostingsFormat::initialize(module);
            t_Lucene41PostingsReader::initialize(module);
            t_Lucene41PostingsWriter::initialize(module);
            t_Lucene41StoredFieldsFormat::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene42/Lucene42Codec.h"
#include "org/apache/lucene/codecs/lucene42/Lucene42DocValuesFormat.h"
#include "org/apache/lucene/codecs/lucene42/Lucene42FieldInfosFormat.h"
#include "org/apache/lucene/codecs/lucene42/Lucene42NormsFormat.h"
#include "org/apache/lucene/codecs/lucene42/Lucene42TermVectorsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene42 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene42");

            t_Lucene42Codec::install(module);
            t_Lucene42DocValuesFormat::install(module);
            t_Lucene42FieldInfosFormat::install(module);
            t_Lucene42NormsFormat::install(module);
            t_Lucene42TermVectorsFormat::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene42");

            t_Lucene42Codec::initialize(module);
            t_Lucene42DocValuesFormat::initialize(module);
            t_Lucene42FieldInfosFormat::initialize(module);
            t_Lucene42NormsFormat::initialize(module);
            t_Lucene42TermVectorsFormat::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene45/Lucene45Codec.h"
#include "org/apache/lucene/codecs/lucene45/Lucene45DocValuesFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene45 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene45");

            t_Lucene45Codec::install(module);
            t_Lucene45DocValuesFormat::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene45");

            t_Lucene45Codec::initialize(module);
            t_Lucene45DocValuesFormat::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene46/Lucene46Codec.h"
#include "org/apache/lucene/codecs/lucene46/Lucene46FieldInfosFormat.h"
#include "org/apache/lucene/codecs/lucene46/Lucene46SegmentInfoFormat.h"
#include "org/apache/lucene/codecs/lucene46/Lucene46SegmentInfoReader.h"
#include "org/apache/lucene/codecs/lucene46/Lucene46SegmentInfoWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene46 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene46");

            t_Lucene46Codec::install(module);
            t_Lucene46FieldInfosFormat::install(module);
            t_Lucene46SegmentInfoFormat::install(module);
            t_Lucene46SegmentInfoReader::install(module);
            t_Lucene46SegmentInfoWriter::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene46");

            t_Lucene46Codec::initialize(module);
            t_Lucene46FieldInfosFormat::initialize(module);
            t_Lucene46SegmentInfoFormat::initialize(module);
            t_Lucene46SegmentInfoReader::initialize(module);
            t_Lucene46SegmentInfoWriter::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene49/Lucene49Codec.h"
#include "org/apache/lucene/codecs/lucene49/Lucene49DocValuesFormat.h"
#include "org/apache/lucene/codecs/lucene49/Lucene49NormsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene49 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene49");

            t_Lucene49Codec::install(module);
            t_Lucene49DocValuesFormat::install(module);
            t_Lucene49NormsFormat::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene49");

            t_Lucene49Codec::initialize(module);
            t_Lucene49DocValuesFormat::initialize(module);
            t_Lucene49NormsFormat::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/perfield/PerFieldDocValuesFormat.h"
#include "org/apache/lucene/codecs/perfield/PerFieldPostingsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace perfield {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "perfield");

            t_PerFieldDocValuesFormat::install(module);
            t_PerFieldPostingsFormat::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "perfield");

            t_PerFieldDocValuesFormat::initialize(module);
            t_PerFieldPostingsFormat::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/collation/CollationAttributeFactory.h"
#include "org/apache/lucene/collation/CollationKeyAnalyzer.h"
#include "org/apache/lucene/collation/CollationKeyFilter.h"
#include "org/apache/lucene/collation/CollationKeyFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {

        namespace tokenattributes {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "collation");

          t_CollationAttributeFactory::install(module);
          t_CollationKeyAnalyzer::install(module);
          t_CollationKeyFilter::install(module);
          t_CollationKeyFilterFactory::install(module);
          tokenattributes::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "collation");

          t_CollationAttributeFactory::initialize(module);
          t_CollationKeyAnalyzer::initialize(module);
          t_CollationKeyFilter::initialize(module);
          t_CollationKeyFilterFactory::initialize(module);
          tokenattributes::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/collation/tokenattributes/CollatedTermAttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {
        namespace tokenattributes {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.collation", "tokenattributes");

            t_CollatedTermAttributeImpl::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.collation", "tokenattributes");

            t_CollatedTermAttributeImpl::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/document/BinaryDocValuesField.h"
#include "org/apache/lucene/document/ByteDocValuesField.h"
#include "org/apache/lucene/document/CompressionTools.h"
#include "org/apache/lucene/document/DateTools.h"
#include "org/apache/lucene/document/DateTools$Resolution.h"
#include "org/apache/lucene/document/DerefBytesDocValuesField.h"
#include "org/apache/lucene/document/Document.h"
#include "org/apache/lucene/document/DocumentStoredFieldVisitor.h"
#include "org/apache/lucene/document/DoubleDocValuesField.h"
#include "org/apache/lucene/document/DoubleField.h"
#include "org/apache/lucene/document/Field.h"
#include "org/apache/lucene/document/Field$Index.h"
#include "org/apache/lucene/document/Field$Store.h"
#include "org/apache/lucene/document/Field$TermVector.h"
#include "org/apache/lucene/document/FieldType.h"
#include "org/apache/lucene/document/FieldType$NumericType.h"
#include "org/apache/lucene/document/FloatDocValuesField.h"
#include "org/apache/lucene/document/FloatField.h"
#include "org/apache/lucene/document/IntDocValuesField.h"
#include "org/apache/lucene/document/IntField.h"
#include "org/apache/lucene/document/LongDocValuesField.h"
#include "org/apache/lucene/document/LongField.h"
#include "org/apache/lucene/document/NumericDocValuesField.h"
#include "org/apache/lucene/document/PackedLongDocValuesField.h"
#include "org/apache/lucene/document/ShortDocValuesField.h"
#include "org/apache/lucene/document/SortedBytesDocValuesField.h"
#include "org/apache/lucene/document/SortedDocValuesField.h"
#include "org/apache/lucene/document/SortedNumericDocValuesField.h"
#include "org/apache/lucene/document/SortedSetDocValuesField.h"
#include "org/apache/lucene/document/StoredField.h"
#include "org/apache/lucene/document/StraightBytesDocValuesField.h"
#include "org/apache/lucene/document/StringField.h"
#include "org/apache/lucene/document/TextField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "document");

          t_BinaryDocValuesField::install(module);
          t_ByteDocValuesField::install(module);
          t_CompressionTools::install(module);
          t_DateTools::install(module);
          t_DateTools$Resolution::install(module);
          t_DerefBytesDocValuesField::install(module);
          t_Document::install(module);
          t_DocumentStoredFieldVisitor::install(module);
          t_DoubleDocValuesField::install(module);
          t_DoubleField::install(module);
          t_Field::install(module);
          t_Field$Index::install(module);
          t_Field$Store::install(module);
          t_Field$TermVector::install(module);
          t_FieldType::install(module);
          t_FieldType$NumericType::install(module);
          t_FloatDocValuesField::install(module);
          t_FloatField::install(module);
          t_IntDocValuesField::install(module);
          t_IntField::install(module);
          t_LongDocValuesField::install(module);
          t_LongField::install(module);
          t_NumericDocValuesField::install(module);
          t_PackedLongDocValuesField::install(module);
          t_ShortDocValuesField::install(module);
          t_SortedBytesDocValuesField::install(module);
          t_SortedDocValuesField::install(module);
          t_SortedNumericDocValuesField::install(module);
          t_SortedSetDocValuesField::install(module);
          t_StoredField::install(module);
          t_StraightBytesDocValuesField::install(module);
          t_StringField::install(module);
          t_TextField::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "document");

          t_BinaryDocValuesField::initialize(module);
          t_ByteDocValuesField::initialize(module);
          t_CompressionTools::initialize(module);
          t_DateTools::initialize(module);
          t_DateTools$Resolution::initialize(module);
          t_DerefBytesDocValuesField::initialize(module);
          t_Document::initialize(module);
          t_DocumentStoredFieldVisitor::initialize(module);
          t_DoubleDocValuesField::initialize(module);
          t_DoubleField::initialize(module);
          t_Field::initialize(module);
          t_Field$Index::initialize(module);
          t_Field$Store::initialize(module);
          t_Field$TermVector::initialize(module);
          t_FieldType::initialize(module);
          t_FieldType$NumericType::initialize(module);
          t_FloatDocValuesField::initialize(module);
          t_FloatField::initialize(module);
          t_IntDocValuesField::initialize(module);
          t_IntField::initialize(module);
          t_LongDocValuesField::initialize(module);
          t_LongField::initialize(module);
          t_NumericDocValuesField::initialize(module);
          t_PackedLongDocValuesField::initialize(module);
          t_ShortDocValuesField::initialize(module);
          t_SortedBytesDocValuesField::initialize(module);
          t_SortedDocValuesField::initialize(module);
          t_SortedNumericDocValuesField::initialize(module);
          t_SortedSetDocValuesField::initialize(module);
          t_StoredField::initialize(module);
          t_StraightBytesDocValuesField::initialize(module);
          t_StringField::initialize(module);
          t_TextField::initialize(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/expressions/Bindings.h"
#include "org/apache/lucene/expressions/Expression.h"
#include "org/apache/lucene/expressions/SimpleBindings.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {

        namespace js {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "expressions");

          t_Bindings::install(module);
          t_Expression::install(module);
          t_SimpleBindings::install(module);
          js::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "expressions");

          t_Bindings::initialize(module);
          t_Expression::initialize(module);
          t_SimpleBindings::initialize(module);
          js::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/expressions/js/JavascriptCompiler.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$additive_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$arguments_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$bitwise_and_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$bitwise_or_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$bitwise_xor_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$conditional_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$equality_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$expression_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$logical_and_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$logical_or_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$multiplicative_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$numeric_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$postfix_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$primary_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$relational_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$shift_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$unary_operator_return.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$unary_return.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        namespace js {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.expressions", "js");

            t_JavascriptCompiler::install(module);
            t_JavascriptParser$additive_return::install(module);
            t_JavascriptParser$arguments_return::install(module);
            t_JavascriptParser$bitwise_and_return::install(module);
            t_JavascriptParser$bitwise_or_return::install(module);
            t_JavascriptParser$bitwise_xor_return::install(module);
            t_JavascriptParser$conditional_return::install(module);
            t_JavascriptParser$equality_return::install(module);
            t_JavascriptParser$expression_return::install(module);
            t_JavascriptParser$logical_and_return::install(module);
            t_JavascriptParser$logical_or_return::install(module);
            t_JavascriptParser$multiplicative_return::install(module);
            t_JavascriptParser$numeric_return::install(module);
            t_JavascriptParser$postfix_return::install(module);
            t_JavascriptParser$primary_return::install(module);
            t_JavascriptParser$relational_return::install(module);
            t_JavascriptParser$shift_return::install(module);
            t_JavascriptParser$unary_operator_return::install(module);
            t_JavascriptParser$unary_return::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.expressions", "js");

            t_JavascriptCompiler::initialize(module);
            t_JavascriptParser$additive_return::initialize(module);
            t_JavascriptParser$arguments_return::initialize(module);
            t_JavascriptParser$bitwise_and_return::initialize(module);
            t_JavascriptParser$bitwise_or_return::initialize(module);
            t_JavascriptParser$bitwise_xor_return::initialize(module);
            t_JavascriptParser$conditional_return::initialize(module);
            t_JavascriptParser$equality_return::initialize(module);
            t_JavascriptParser$expression_return::initialize(module);
            t_JavascriptParser$logical_and_return::initialize(module);
            t_JavascriptParser$logical_or_return::initialize(module);
            t_JavascriptParser$multiplicative_return::initialize(module);
            t_JavascriptParser$numeric_return::initialize(module);
            t_JavascriptParser$postfix_return::initialize(module);
            t_JavascriptParser$primary_return::initialize(module);
            t_JavascriptParser$relational_return::initialize(module);
            t_JavascriptParser$shift_return::initialize(module);
            t_JavascriptParser$unary_operator_return::initialize(module);
            t_JavascriptParser$unary_return::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/facet/DrillDownQuery.h"
#include "org/apache/lucene/facet/DrillSideways.h"
#include "org/apache/lucene/facet/DrillSideways$DrillSidewaysResult.h"
#include "org/apache/lucene/facet/FacetField.h"
#include "org/apache/lucene/facet/FacetResult.h"
#include "org/apache/lucene/facet/Facets.h"
#include "org/apache/lucene/facet/FacetsCollector.h"
#include "org/apache/lucene/facet/FacetsCollector$MatchingDocs.h"
#include "org/apache/lucene/facet/FacetsConfig.h"
#include "org/apache/lucene/facet/FacetsConfig$DimConfig.h"
#include "org/apache/lucene/facet/LabelAndValue.h"
#include "org/apache/lucene/facet/MultiFacets.h"
#include "org/apache/lucene/facet/RandomSamplingFacetsCollector.h"
#include "org/apache/lucene/facet/TopOrdAndFloatQueue.h"
#include "org/apache/lucene/facet/TopOrdAndFloatQueue$OrdAndValue.h"
#include "org/apache/lucene/facet/TopOrdAndIntQueue.h"
#include "org/apache/lucene/facet/TopOrdAndIntQueue$OrdAndValue.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        namespace range {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace sortedset {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace taxonomy {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "facet");

          t_DrillDownQuery::install(module);
          t_DrillSideways::install(module);
          t_DrillSideways$DrillSidewaysResult::install(module);
          t_FacetField::install(module);
          t_FacetResult::install(module);
          t_Facets::install(module);
          t_FacetsCollector::install(module);
          t_FacetsCollector$MatchingDocs::install(module);
          t_FacetsConfig::install(module);
          t_FacetsConfig$DimConfig::install(module);
          t_LabelAndValue::install(module);
          t_MultiFacets::install(module);
          t_RandomSamplingFacetsCollector::install(module);
          t_TopOrdAndFloatQueue::install(module);
          t_TopOrdAndFloatQueue$OrdAndValue::install(module);
          t_TopOrdAndIntQueue::install(module);
          t_TopOrdAndIntQueue$OrdAndValue::install(module);
          range::__install__(module);
          sortedset::__install__(module);
          taxonomy::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "facet");

          t_DrillDownQuery::initialize(module);
          t_DrillSideways::initialize(module);
          t_DrillSideways$DrillSidewaysResult::initialize(module);
          t_FacetField::initialize(module);
          t_FacetResult::initialize(module);
          t_Facets::initialize(module);
          t_FacetsCollector::initialize(module);
          t_FacetsCollector$MatchingDocs::initialize(module);
          t_FacetsConfig::initialize(module);
          t_FacetsConfig$DimConfig::initialize(module);
          t_LabelAndValue::initialize(module);
          t_MultiFacets::initialize(module);
          t_RandomSamplingFacetsCollector::initialize(module);
          t_TopOrdAndFloatQueue::initialize(module);
          t_TopOrdAndFloatQueue$OrdAndValue::initialize(module);
          t_TopOrdAndIntQueue::initialize(module);
          t_TopOrdAndIntQueue$OrdAndValue::initialize(module);
          range::__initialize__(module);
          sortedset::__initialize__(module);
          taxonomy::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/facet/range/DoubleRange.h"
#include "org/apache/lucene/facet/range/DoubleRangeFacetCounts.h"
#include "org/apache/lucene/facet/range/LongRange.h"
#include "org/apache/lucene/facet/range/LongRangeCounter$LongRangeNode.h"
#include "org/apache/lucene/facet/range/LongRangeFacetCounts.h"
#include "org/apache/lucene/facet/range/Range.h"
#include "org/apache/lucene/facet/range/RangeFacetCounts.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "range");

            t_DoubleRange::install(module);
            t_DoubleRangeFacetCounts::install(module);
            t_LongRange::install(module);
            t_LongRangeCounter$LongRangeNode::install(module);
            t_LongRangeFacetCounts::install(module);
            t_Range::install(module);
            t_RangeFacetCounts::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "range");

            t_DoubleRange::initialize(module);
            t_DoubleRangeFacetCounts::initialize(module);
            t_LongRange::initialize(module);
            t_LongRangeCounter$LongRangeNode::initialize(module);
            t_LongRangeFacetCounts::initialize(module);
            t_Range::initialize(module);
            t_RangeFacetCounts::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/facet/sortedset/DefaultSortedSetDocValuesReaderState.h"
#include "org/apache/lucene/facet/sortedset/SortedSetDocValuesFacetCounts.h"
#include "org/apache/lucene/facet/sortedset/SortedSetDocValuesFacetField.h"
#include "org/apache/lucene/facet/sortedset/SortedSetDocValuesReaderState.h"
#include "org/apache/lucene/facet/sortedset/SortedSetDocValuesReaderState$OrdRange.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "sortedset");

            t_DefaultSortedSetDocValuesReaderState::install(module);
            t_SortedSetDocValuesFacetCounts::install(module);
            t_SortedSetDocValuesFacetField::install(module);
            t_SortedSetDocValuesReaderState::install(module);
            t_SortedSetDocValuesReaderState$OrdRange::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "sortedset");

            t_DefaultSortedSetDocValuesReaderState::initialize(module);
            t_SortedSetDocValuesFacetCounts::initialize(module);
            t_SortedSetDocValuesFacetField::initialize(module);
            t_SortedSetDocValuesReaderState::initialize(module);
            t_SortedSetDocValuesReaderState$OrdRange::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/facet/taxonomy/AssociationFacetField.h"
#include "org/apache/lucene/facet/taxonomy/CachedOrdinalsReader.h"
#include "org/apache/lucene/facet/taxonomy/CachedOrdinalsReader$CachedOrds.h"
#include "org/apache/lucene/facet/taxonomy/CategoryPath.h"
#include "org/apache/lucene/facet/taxonomy/DocValuesOrdinalsReader.h"
#include "org/apache/lucene/facet/taxonomy/FacetLabel.h"
#include "org/apache/lucene/facet/taxonomy/FastTaxonomyFacetCounts.h"
#include "org/apache/lucene/facet/taxonomy/FloatAssociationFacetField.h"
#include "org/apache/lucene/facet/taxonomy/FloatTaxonomyFacets.h"
#include "org/apache/lucene/facet/taxonomy/IntAssociationFacetField.h"
#include "org/apache/lucene/facet/taxonomy/IntTaxonomyFacets.h"
#include "org/apache/lucene/facet/taxonomy/LRUHashMap.h"
#include "org/apache/lucene/facet/taxonomy/OrdinalsReader.h"
#include "org/apache/lucene/facet/taxonomy/OrdinalsReader$OrdinalsSegmentReader.h"
#include "org/apache/lucene/facet/taxonomy/ParallelTaxonomyArrays.h"
#include "org/apache/lucene/facet/taxonomy/PrintTaxonomyStats.h"
#include "org/apache/lucene/facet/taxonomy/SearcherTaxonomyManager.h"
#include "org/apache/lucene/facet/taxonomy/SearcherTaxonomyManager$SearcherAndTaxonomy.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyFacetCounts.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyFacetSumFloatAssociations.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyFacetSumIntAssociations.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyFacetSumValueSource.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyFacetSumValueSource$ScoreValueSource.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyFacets.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyReader.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyReader$ChildrenIterator.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          namespace directory {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace writercache {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "taxonomy");

            t_AssociationFacetField::install(module);
            t_CachedOrdinalsReader::install(module);
            t_CachedOrdinalsReader$CachedOrds::install(module);
            t_CategoryPath::install(module);
            t_DocValuesOrdinalsReader::install(module);
            t_FacetLabel::install(module);
            t_FastTaxonomyFacetCounts::install(module);
            t_FloatAssociationFacetField::install(module);
            t_FloatTaxonomyFacets::install(module);
            t_IntAssociationFacetField::install(module);
            t_IntTaxonomyFacets::install(module);
            t_LRUHashMap::install(module);
            t_OrdinalsReader::install(module);
            t_OrdinalsReader$OrdinalsSegmentReader::install(module);
            t_ParallelTaxonomyArrays::install(module);
            t_PrintTaxonomyStats::install(module);
            t_SearcherTaxonomyManager::install(module);
            t_SearcherTaxonomyManager$SearcherAndTaxonomy::install(module);
            t_TaxonomyFacetCounts::install(module);
            t_TaxonomyFacetSumFloatAssociations::install(module);
            t_TaxonomyFacetSumIntAssociations::install(module);
            t_TaxonomyFacetSumValueSource::install(module);
            t_TaxonomyFacetSumValueSource$ScoreValueSource::install(module);
            t_TaxonomyFacets::install(module);
            t_TaxonomyReader::install(module);
            t_TaxonomyReader$ChildrenIterator::install(module);
            t_TaxonomyWriter::install(module);
            directory::__install__(module);
            writercache::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "taxonomy");

            t_AssociationFacetField::initialize(module);
            t_CachedOrdinalsReader::initialize(module);
            t_CachedOrdinalsReader$CachedOrds::initialize(module);
            t_CategoryPath::initialize(module);
            t_DocValuesOrdinalsReader::initialize(module);
            t_FacetLabel::initialize(module);
            t_FastTaxonomyFacetCounts::initialize(module);
            t_FloatAssociationFacetField::initialize(module);
            t_FloatTaxonomyFacets::initialize(module);
            t_IntAssociationFacetField::initialize(module);
            t_IntTaxonomyFacets::initialize(module);
            t_LRUHashMap::initialize(module);
            t_OrdinalsReader::initialize(module);
            t_OrdinalsReader$OrdinalsSegmentReader::initialize(module);
            t_ParallelTaxonomyArrays::initialize(module);
            t_PrintTaxonomyStats::initialize(module);
            t_SearcherTaxonomyManager::initialize(module);
            t_SearcherTaxonomyManager$SearcherAndTaxonomy::initialize(module);
            t_TaxonomyFacetCounts::initialize(module);
            t_TaxonomyFacetSumFloatAssociations::initialize(module);
            t_TaxonomyFacetSumIntAssociations::initialize(module);
            t_TaxonomyFacetSumValueSource::initialize(module);
            t_TaxonomyFacetSumValueSource$ScoreValueSource::initialize(module);
            t_TaxonomyFacets::initialize(module);
            t_TaxonomyReader::initialize(module);
            t_TaxonomyReader$ChildrenIterator::initialize(module);
            t_TaxonomyWriter::initialize(module);
            directory::__initialize__(module);
            writercache::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/facet/taxonomy/directory/DirectoryTaxonomyReader.h"
#include "org/apache/lucene/facet/taxonomy/directory/DirectoryTaxonomyWriter.h"
#include "org/apache/lucene/facet/taxonomy/directory/DirectoryTaxonomyWriter$DiskOrdinalMap.h"
#include "org/apache/lucene/facet/taxonomy/directory/DirectoryTaxonomyWriter$MemoryOrdinalMap.h"
#include "org/apache/lucene/facet/taxonomy/directory/DirectoryTaxonomyWriter$OrdinalMap.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace directory {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.facet.taxonomy", "directory");

              t_DirectoryTaxonomyReader::install(module);
              t_DirectoryTaxonomyWriter::install(module);
              t_DirectoryTaxonomyWriter$DiskOrdinalMap::install(module);
              t_DirectoryTaxonomyWriter$MemoryOrdinalMap::install(module);
              t_DirectoryTaxonomyWriter$OrdinalMap::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.facet.taxonomy", "directory");

              t_DirectoryTaxonomyReader::initialize(module);
              t_DirectoryTaxonomyWriter::initialize(module);
              t_DirectoryTaxonomyWriter$DiskOrdinalMap::initialize(module);
              t_DirectoryTaxonomyWriter$MemoryOrdinalMap::initialize(module);
              t_DirectoryTaxonomyWriter$OrdinalMap::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/facet/taxonomy/writercache/Cl2oTaxonomyWriterCache.h"
#include "org/apache/lucene/facet/taxonomy/writercache/CollisionMap.h"
#include "org/apache/lucene/facet/taxonomy/writercache/CompactLabelToOrdinal.h"
#include "org/apache/lucene/facet/taxonomy/writercache/LabelToOrdinal.h"
#include "org/apache/lucene/facet/taxonomy/writercache/LruTaxonomyWriterCache.h"
#include "org/apache/lucene/facet/taxonomy/writercache/LruTaxonomyWriterCache$LRUType.h"
#include "org/apache/lucene/facet/taxonomy/writercache/NameHashIntCacheLRU.h"
#include "org/apache/lucene/facet/taxonomy/writercache/NameIntCacheLRU.h"
#include "org/apache/lucene/facet/taxonomy/writercache/TaxonomyWriterCache.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace writercache {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.facet.taxonomy", "writercache");

              t_Cl2oTaxonomyWriterCache::install(module);
              t_CollisionMap::install(module);
              t_CompactLabelToOrdinal::install(module);
              t_LabelToOrdinal::install(module);
              t_LruTaxonomyWriterCache::install(module);
              t_LruTaxonomyWriterCache$LRUType::install(module);
              t_NameHashIntCacheLRU::install(module);
              t_NameIntCacheLRU::install(module);
              t_TaxonomyWriterCache::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.facet.taxonomy", "writercache");

              t_Cl2oTaxonomyWriterCache::initialize(module);
              t_CollisionMap::initialize(module);
              t_CompactLabelToOrdinal::initialize(module);
              t_LabelToOrdinal::initialize(module);
              t_LruTaxonomyWriterCache::initialize(module);
              t_LruTaxonomyWriterCache$LRUType::initialize(module);
              t_NameHashIntCacheLRU::initialize(module);
              t_NameIntCacheLRU::initialize(module);
              t_TaxonomyWriterCache::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/index/AtomicReader.h"
#include "org/apache/lucene/index/AtomicReader$CoreClosedListener.h"
#include "org/apache/lucene/index/AtomicReaderContext.h"
#include "org/apache/lucene/index/BaseCompositeReader.h"
#include "org/apache/lucene/index/BinaryDocValues.h"
#include "org/apache/lucene/index/BufferedUpdatesStream$ApplyDeletesResult.h"
#include "org/apache/lucene/index/BufferedUpdatesStream$QueryAndLimit.h"
#include "org/apache/lucene/index/CheckIndex.h"
#include "org/apache/lucene/index/CheckIndex$Status.h"
#include "org/apache/lucene/index/CheckIndex$Status$DocValuesStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$FieldNormStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$SegmentInfoStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$StoredFieldStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$TermIndexStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$TermVectorStatus.h"
#include "org/apache/lucene/index/CompositeReader.h"
#include "org/apache/lucene/index/CompositeReaderContext.h"
#include "org/apache/lucene/index/ConcurrentMergeScheduler.h"
#include "org/apache/lucene/index/CorruptIndexException.h"
#include "org/apache/lucene/index/DirectoryReader.h"
#include "org/apache/lucene/index/DocTermOrds.h"
#include "org/apache/lucene/index/DocValues.h"
#include "org/apache/lucene/index/DocsAndPositionsEnum.h"
#include "org/apache/lucene/index/DocsEnum.h"
#include "org/apache/lucene/index/FieldInfo.h"
#include "org/apache/lucene/index/FieldInfo$DocValuesType.h"
#include "org/apache/lucene/index/FieldInfo$IndexOptions.h"
#include "org/apache/lucene/index/FieldInfos.h"
#include "org/apache/lucene/index/FieldInvertState.h"
#include "org/apache/lucene/index/Fields.h"
#include "org/apache/lucene/index/FilterAtomicReader.h"
#include "org/apache/lucene/index/FilterAtomicReader$FilterDocsAndPositionsEnum.h"
#include "org/apache/lucene/index/FilterAtomicReader$FilterDocsEnum.h"
#include "org/apache/lucene/index/FilterAtomicReader$FilterFields.h"
#include "org/apache/lucene/index/FilterAtomicReader$FilterTerms.h"
#include "org/apache/lucene/index/FilterAtomicReader$FilterTermsEnum.h"
#include "org/apache/lucene/index/FilterDirectoryReader.h"
#include "org/apache/lucene/index/FilterDirectoryReader$StandardReaderWrapper.h"
#include "org/apache/lucene/index/FilterDirectoryReader$SubReaderWrapper.h"
#include "org/apache/lucene/index/FilteredTermsEnum.h"
#include "org/apache/lucene/index/IndexCommit.h"
#include "org/apache/lucene/index/IndexDeletionPolicy.h"
#include "org/apache/lucene/index/IndexFileNames.h"
#include "org/apache/lucene/index/IndexFormatTooNewException.h"
#include "org/apache/lucene/index/IndexFormatTooOldException.h"
#include "org/apache/lucene/index/IndexNotFoundException.h"
#include "org/apache/lucene/index/IndexReader.h"
#include "org/apache/lucene/index/IndexReader$ReaderClosedListener.h"
#include "org/apache/lucene/index/IndexReaderContext.h"
#include "org/apache/lucene/index/IndexUpgrader.h"
#include "org/apache/lucene/index/IndexWriter.h"
#include "org/apache/lucene/index/IndexWriter$IndexReaderWarmer.h"
#include "org/apache/lucene/index/IndexWriterConfig.h"
#include "org/apache/lucene/index/IndexWriterConfig$OpenMode.h"
#include "org/apache/lucene/index/IndexableField.h"
#include "org/apache/lucene/index/IndexableFieldType.h"
#include "org/apache/lucene/index/KeepOnlyLastCommitDeletionPolicy.h"
#include "org/apache/lucene/index/LiveIndexWriterConfig.h"
#include "org/apache/lucene/index/LogByteSizeMergePolicy.h"
#include "org/apache/lucene/index/LogDocMergePolicy.h"
#include "org/apache/lucene/index/LogMergePolicy.h"
#include "org/apache/lucene/index/MergePolicy.h"
#include "org/apache/lucene/index/MergePolicy$DocMap.h"
#include "org/apache/lucene/index/MergePolicy$MergeAbortedException.h"
#include "org/apache/lucene/index/MergePolicy$MergeException.h"
#include "org/apache/lucene/index/MergePolicy$MergeSpecification.h"
#include "org/apache/lucene/index/MergePolicy$OneMerge.h"
#include "org/apache/lucene/index/MergeScheduler.h"
#include "org/apache/lucene/index/MergeState.h"
#include "org/apache/lucene/index/MergeState$CheckAbort.h"
#include "org/apache/lucene/index/MergeState$DocMap.h"
#include "org/apache/lucene/index/MergeTrigger.h"
#include "org/apache/lucene/index/MultiBits$SubResult.h"
#include "org/apache/lucene/index/MultiDocValues.h"
#include "org/apache/lucene/index/MultiDocValues$MultiSortedDocValues.h"
#include "org/apache/lucene/index/MultiDocValues$MultiSortedSetDocValues.h"
#include "org/apache/lucene/index/MultiDocValues$OrdinalMap.h"
#include "org/apache/lucene/index/MultiDocsAndPositionsEnum.h"
#include "org/apache/lucene/index/MultiDocsAndPositionsEnum$EnumWithSlice.h"
#include "org/apache/lucene/index/MultiDocsEnum.h"
#include "org/apache/lucene/index/MultiDocsEnum$EnumWithSlice.h"
#include "org/apache/lucene/index/MultiFields.h"
#include "org/apache/lucene/index/MultiReader.h"
#include "org/apache/lucene/index/MultiTerms.h"
#include "org/apache/lucene/index/MultiTermsEnum.h"
#include "org/apache/lucene/index/NoDeletionPolicy.h"
#include "org/apache/lucene/index/NoMergePolicy.h"
#include "org/apache/lucene/index/NoMergeScheduler.h"
#include "org/apache/lucene/index/NumericDocValues.h"
#include "org/apache/lucene/index/OrdTermState.h"
#include "org/apache/lucene/index/ParallelAtomicReader.h"
#include "org/apache/lucene/index/ParallelCompositeReader.h"
#include "org/apache/lucene/index/PersistentSnapshotDeletionPolicy.h"
#include "org/apache/lucene/index/PrefixCodedTerms$Builder.h"
#include "org/apache/lucene/index/RandomAccessOrds.h"
#include "org/apache/lucene/index/ReaderManager.h"
#include "org/apache/lucene/index/ReaderSlice.h"
#include "org/apache/lucene/index/ReaderUtil.h"
#include "org/apache/lucene/index/SegmentCommitInfo.h"
#include "org/apache/lucene/index/SegmentInfo.h"
#include "org/apache/lucene/index/SegmentInfos.h"
#include "org/apache/lucene/index/SegmentInfos$FindSegmentsFile.h"
#include "org/apache/lucene/index/SegmentReadState.h"
#include "org/apache/lucene/index/SegmentReader.h"
#include "org/apache/lucene/index/SegmentWriteState.h"
#include "org/apache/lucene/index/SerialMergeScheduler.h"
#include "org/apache/lucene/index/SimpleMergedSegmentWarmer.h"
#include "org/apache/lucene/index/SingleTermsEnum.h"
#include "org/apache/lucene/index/SlowCompositeReaderWrapper.h"
#include "org/apache/lucene/index/SnapshotDeletionPolicy.h"
#include "org/apache/lucene/index/SortedDocValues.h"
#include "org/apache/lucene/index/SortedNumericDocValues.h"
#include "org/apache/lucene/index/SortedSetDocValues.h"
#include "org/apache/lucene/index/StoredFieldVisitor.h"
#include "org/apache/lucene/index/StoredFieldVisitor$Status.h"
#include "org/apache/lucene/index/Term.h"
#include "org/apache/lucene/index/TermContext.h"
#include "org/apache/lucene/index/TermState.h"
#include "org/apache/lucene/index/Terms.h"
#include "org/apache/lucene/index/TermsEnum.h"
#include "org/apache/lucene/index/TermsEnum$SeekStatus.h"
#include "org/apache/lucene/index/TieredMergePolicy.h"
#include "org/apache/lucene/index/TrackingIndexWriter.h"
#include "org/apache/lucene/index/TwoPhaseCommit.h"
#include "org/apache/lucene/index/TwoPhaseCommitTool.h"
#include "org/apache/lucene/index/TwoPhaseCommitTool$CommitFailException.h"
#include "org/apache/lucene/index/TwoPhaseCommitTool$PrepareCommitFailException.h"
#include "org/apache/lucene/index/UpgradeIndexMergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        namespace memory {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "index");

          t_AtomicReader::install(module);
          t_AtomicReader$CoreClosedListener::install(module);
          t_AtomicReaderContext::install(module);
          t_BaseCompositeReader::install(module);
          t_BinaryDocValues::install(module);
          t_BufferedUpdatesStream$ApplyDeletesResult::install(module);
          t_BufferedUpdatesStream$QueryAndLimit::install(module);
          t_CheckIndex::install(module);
          t_CheckIndex$Status::install(module);
          t_CheckIndex$Status$DocValuesStatus::install(module);
          t_CheckIndex$Status$FieldNormStatus::install(module);
          t_CheckIndex$Status$SegmentInfoStatus::install(module);
          t_CheckIndex$Status$StoredFieldStatus::install(module);
          t_CheckIndex$Status$TermIndexStatus::install(module);
          t_CheckIndex$Status$TermVectorStatus::install(module);
          t_CompositeReader::install(module);
          t_CompositeReaderContext::install(module);
          t_ConcurrentMergeScheduler::install(module);
          t_CorruptIndexException::install(module);
          t_DirectoryReader::install(module);
          t_DocTermOrds::install(module);
          t_DocValues::install(module);
          t_DocsAndPositionsEnum::install(module);
          t_DocsEnum::install(module);
          t_FieldInfo::install(module);
          t_FieldInfo$DocValuesType::install(module);
          t_FieldInfo$IndexOptions::install(module);
          t_FieldInfos::install(module);
          t_FieldInvertState::install(module);
          t_Fields::install(module);
          t_FilterAtomicReader::install(module);
          t_FilterAtomicReader$FilterDocsAndPositionsEnum::install(module);
          t_FilterAtomicReader$FilterDocsEnum::install(module);
          t_FilterAtomicReader$FilterFields::install(module);
          t_FilterAtomicReader$FilterTerms::install(module);
          t_FilterAtomicReader$FilterTermsEnum::install(module);
          t_FilterDirectoryReader::install(module);
          t_FilterDirectoryReader$StandardReaderWrapper::install(module);
          t_FilterDirectoryReader$SubReaderWrapper::install(module);
          t_FilteredTermsEnum::install(module);
          t_IndexCommit::install(module);
          t_IndexDeletionPolicy::install(module);
          t_IndexFileNames::install(module);
          t_IndexFormatTooNewException::install(module);
          t_IndexFormatTooOldException::install(module);
          t_IndexNotFoundException::install(module);
          t_IndexReader::install(module);
          t_IndexReader$ReaderClosedListener::install(module);
          t_IndexReaderContext::install(module);
          t_IndexUpgrader::install(module);
          t_IndexWriter::install(module);
          t_IndexWriter$IndexReaderWarmer::install(module);
          t_IndexWriterConfig::install(module);
          t_IndexWriterConfig$OpenMode::install(module);
          t_IndexableField::install(module);
          t_IndexableFieldType::install(module);
          t_KeepOnlyLastCommitDeletionPolicy::install(module);
          t_LiveIndexWriterConfig::install(module);
          t_LogByteSizeMergePolicy::install(module);
          t_LogDocMergePolicy::install(module);
          t_LogMergePolicy::install(module);
          t_MergePolicy::install(module);
          t_MergePolicy$DocMap::install(module);
          t_MergePolicy$MergeAbortedException::install(module);
          t_MergePolicy$MergeException::install(module);
          t_MergePolicy$MergeSpecification::install(module);
          t_MergePolicy$OneMerge::install(module);
          t_MergeScheduler::install(module);
          t_MergeState::install(module);
          t_MergeState$CheckAbort::install(module);
          t_MergeState$DocMap::install(module);
          t_MergeTrigger::install(module);
          t_MultiBits$SubResult::install(module);
          t_MultiDocValues::install(module);
          t_MultiDocValues$MultiSortedDocValues::install(module);
          t_MultiDocValues$MultiSortedSetDocValues::install(module);
          t_MultiDocValues$OrdinalMap::install(module);
          t_MultiDocsAndPositionsEnum::install(module);
          t_MultiDocsAndPositionsEnum$EnumWithSlice::install(module);
          t_MultiDocsEnum::install(module);
          t_MultiDocsEnum$EnumWithSlice::install(module);
          t_MultiFields::install(module);
          t_MultiReader::install(module);
          t_MultiTerms::install(module);
          t_MultiTermsEnum::install(module);
          t_NoDeletionPolicy::install(module);
          t_NoMergePolicy::install(module);
          t_NoMergeScheduler::install(module);
          t_NumericDocValues::install(module);
          t_OrdTermState::install(module);
          t_ParallelAtomicReader::install(module);
          t_ParallelCompositeReader::install(module);
          t_PersistentSnapshotDeletionPolicy::install(module);
          t_PrefixCodedTerms$Builder::install(module);
          t_RandomAccessOrds::install(module);
          t_ReaderManager::install(module);
          t_ReaderSlice::install(module);
          t_ReaderUtil::install(module);
          t_SegmentCommitInfo::install(module);
          t_SegmentInfo::install(module);
          t_SegmentInfos::install(module);
          t_SegmentInfos$FindSegmentsFile::install(module);
          t_SegmentReadState::install(module);
          t_SegmentReader::install(module);
          t_SegmentWriteState::install(module);
          t_SerialMergeScheduler::install(module);
          t_SimpleMergedSegmentWarmer::install(module);
          t_SingleTermsEnum::install(module);
          t_SlowCompositeReaderWrapper::install(module);
          t_SnapshotDeletionPolicy::install(module);
          t_SortedDocValues::install(module);
          t_SortedNumericDocValues::install(module);
          t_SortedSetDocValues::install(module);
          t_StoredFieldVisitor::install(module);
          t_StoredFieldVisitor$Status::install(module);
          t_Term::install(module);
          t_TermContext::install(module);
          t_TermState::install(module);
          t_Terms::install(module);
          t_TermsEnum::install(module);
          t_TermsEnum$SeekStatus::install(module);
          t_TieredMergePolicy::install(module);
          t_TrackingIndexWriter::install(module);
          t_TwoPhaseCommit::install(module);
          t_TwoPhaseCommitTool::install(module);
          t_TwoPhaseCommitTool$CommitFailException::install(module);
          t_TwoPhaseCommitTool$PrepareCommitFailException::install(module);
          t_UpgradeIndexMergePolicy::install(module);
          memory::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "index");

          t_AtomicReader::initialize(module);
          t_AtomicReader$CoreClosedListener::initialize(module);
          t_AtomicReaderContext::initialize(module);
          t_BaseCompositeReader::initialize(module);
          t_BinaryDocValues::initialize(module);
          t_BufferedUpdatesStream$ApplyDeletesResult::initialize(module);
          t_BufferedUpdatesStream$QueryAndLimit::initialize(module);
          t_CheckIndex::initialize(module);
          t_CheckIndex$Status::initialize(module);
          t_CheckIndex$Status$DocValuesStatus::initialize(module);
          t_CheckIndex$Status$FieldNormStatus::initialize(module);
          t_CheckIndex$Status$SegmentInfoStatus::initialize(module);
          t_CheckIndex$Status$StoredFieldStatus::initialize(module);
          t_CheckIndex$Status$TermIndexStatus::initialize(module);
          t_CheckIndex$Status$TermVectorStatus::initialize(module);
          t_CompositeReader::initialize(module);
          t_CompositeReaderContext::initialize(module);
          t_ConcurrentMergeScheduler::initialize(module);
          t_CorruptIndexException::initialize(module);
          t_DirectoryReader::initialize(module);
          t_DocTermOrds::initialize(module);
          t_DocValues::initialize(module);
          t_DocsAndPositionsEnum::initialize(module);
          t_DocsEnum::initialize(module);
          t_FieldInfo::initialize(module);
          t_FieldInfo$DocValuesType::initialize(module);
          t_FieldInfo$IndexOptions::initialize(module);
          t_FieldInfos::initialize(module);
          t_FieldInvertState::initialize(module);
          t_Fields::initialize(module);
          t_FilterAtomicReader::initialize(module);
          t_FilterAtomicReader$FilterDocsAndPositionsEnum::initialize(module);
          t_FilterAtomicReader$FilterDocsEnum::initialize(module);
          t_FilterAtomicReader$FilterFields::initialize(module);
          t_FilterAtomicReader$FilterTerms::initialize(module);
          t_FilterAtomicReader$FilterTermsEnum::initialize(module);
          t_FilterDirectoryReader::initialize(module);
          t_FilterDirectoryReader$StandardReaderWrapper::initialize(module);
          t_FilterDirectoryReader$SubReaderWrapper::initialize(module);
          t_FilteredTermsEnum::initialize(module);
          t_IndexCommit::initialize(module);
          t_IndexDeletionPolicy::initialize(module);
          t_IndexFileNames::initialize(module);
          t_IndexFormatTooNewException::initialize(module);
          t_IndexFormatTooOldException::initialize(module);
          t_IndexNotFoundException::initialize(module);
          t_IndexReader::initialize(module);
          t_IndexReader$ReaderClosedListener::initialize(module);
          t_IndexReaderContext::initialize(module);
          t_IndexUpgrader::initialize(module);
          t_IndexWriter::initialize(module);
          t_IndexWriter$IndexReaderWarmer::initialize(module);
          t_IndexWriterConfig::initialize(module);
          t_IndexWriterConfig$OpenMode::initialize(module);
          t_IndexableField::initialize(module);
          t_IndexableFieldType::initialize(module);
          t_KeepOnlyLastCommitDeletionPolicy::initialize(module);
          t_LiveIndexWriterConfig::initialize(module);
          t_LogByteSizeMergePolicy::initialize(module);
          t_LogDocMergePolicy::initialize(module);
          t_LogMergePolicy::initialize(module);
          t_MergePolicy::initialize(module);
          t_MergePolicy$DocMap::initialize(module);
          t_MergePolicy$MergeAbortedException::initialize(module);
          t_MergePolicy$MergeException::initialize(module);
          t_MergePolicy$MergeSpecification::initialize(module);
          t_MergePolicy$OneMerge::initialize(module);
          t_MergeScheduler::initialize(module);
          t_MergeState::initialize(module);
          t_MergeState$CheckAbort::initialize(module);
          t_MergeState$DocMap::initialize(module);
          t_MergeTrigger::initialize(module);
          t_MultiBits$SubResult::initialize(module);
          t_MultiDocValues::initialize(module);
          t_MultiDocValues$MultiSortedDocValues::initialize(module);
          t_MultiDocValues$MultiSortedSetDocValues::initialize(module);
          t_MultiDocValues$OrdinalMap::initialize(module);
          t_MultiDocsAndPositionsEnum::initialize(module);
          t_MultiDocsAndPositionsEnum$EnumWithSlice::initialize(module);
          t_MultiDocsEnum::initialize(module);
          t_MultiDocsEnum$EnumWithSlice::initialize(module);
          t_MultiFields::initialize(module);
          t_MultiReader::initialize(module);
          t_MultiTerms::initialize(module);
          t_MultiTermsEnum::initialize(module);
          t_NoDeletionPolicy::initialize(module);
          t_NoMergePolicy::initialize(module);
          t_NoMergeScheduler::initialize(module);
          t_NumericDocValues::initialize(module);
          t_OrdTermState::initialize(module);
          t_ParallelAtomicReader::initialize(module);
          t_ParallelCompositeReader::initialize(module);
          t_PersistentSnapshotDeletionPolicy::initialize(module);
          t_PrefixCodedTerms$Builder::initialize(module);
          t_RandomAccessOrds::initialize(module);
          t_ReaderManager::initialize(module);
          t_ReaderSlice::initialize(module);
          t_ReaderUtil::initialize(module);
          t_SegmentCommitInfo::initialize(module);
          t_SegmentInfo::initialize(module);
          t_SegmentInfos::initialize(module);
          t_SegmentInfos$FindSegmentsFile::initialize(module);
          t_SegmentReadState::initialize(module);
          t_SegmentReader::initialize(module);
          t_SegmentWriteState::initialize(module);
          t_SerialMergeScheduler::initialize(module);
          t_SimpleMergedSegmentWarmer::initialize(module);
          t_SingleTermsEnum::initialize(module);
          t_SlowCompositeReaderWrapper::initialize(module);
          t_SnapshotDeletionPolicy::initialize(module);
          t_SortedDocValues::initialize(module);
          t_SortedNumericDocValues::initialize(module);
          t_SortedSetDocValues::initialize(module);
          t_StoredFieldVisitor::initialize(module);
          t_StoredFieldVisitor$Status::initialize(module);
          t_Term::initialize(module);
          t_TermContext::initialize(module);
          t_TermState::initialize(module);
          t_Terms::initialize(module);
          t_TermsEnum::initialize(module);
          t_TermsEnum$SeekStatus::initialize(module);
          t_TieredMergePolicy::initialize(module);
          t_TrackingIndexWriter::initialize(module);
          t_TwoPhaseCommit::initialize(module);
          t_TwoPhaseCommitTool::initialize(module);
          t_TwoPhaseCommitTool$CommitFailException::initialize(module);
          t_TwoPhaseCommitTool$PrepareCommitFailException::initialize(module);
          t_UpgradeIndexMergePolicy::initialize(module);
          memory::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/index/memory/MemoryIndex.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        namespace memory {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.index", "memory");

            t_MemoryIndex::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.index", "memory");

            t_MemoryIndex::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queries/BooleanFilter.h"
#include "org/apache/lucene/queries/BoostingQuery.h"
#include "org/apache/lucene/queries/ChainedFilter.h"
#include "org/apache/lucene/queries/CommonTermsQuery.h"
#include "org/apache/lucene/queries/CustomScoreProvider.h"
#include "org/apache/lucene/queries/CustomScoreQuery.h"
#include "org/apache/lucene/queries/FilterClause.h"
#include "org/apache/lucene/queries/TermFilter.h"
#include "org/apache/lucene/queries/TermsFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {

        namespace function {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace mlt {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "queries");

          t_BooleanFilter::install(module);
          t_BoostingQuery::install(module);
          t_ChainedFilter::install(module);
          t_CommonTermsQuery::install(module);
          t_CustomScoreProvider::install(module);
          t_CustomScoreQuery::install(module);
          t_FilterClause::install(module);
          t_TermFilter::install(module);
          t_TermsFilter::install(module);
          function::__install__(module);
          mlt::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "queries");

          t_BooleanFilter::initialize(module);
          t_BoostingQuery::initialize(module);
          t_ChainedFilter::initialize(module);
          t_CommonTermsQuery::initialize(module);
          t_CustomScoreProvider::initialize(module);
          t_CustomScoreQuery::initialize(module);
          t_FilterClause::initialize(module);
          t_TermFilter::initialize(module);
          t_TermsFilter::initialize(module);
          function::__initialize__(module);
          mlt::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/queries/function/BoostedQuery.h"
#include "org/apache/lucene/queries/function/FunctionQuery.h"
#include "org/apache/lucene/queries/function/FunctionValues.h"
#include "org/apache/lucene/queries/function/FunctionValues$ValueFiller.h"
#include "org/apache/lucene/queries/function/ValueSource.h"
#include "org/apache/lucene/queries/function/ValueSourceScorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {

          namespace docvalues {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace valuesource {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queries", "function");

            t_BoostedQuery::install(module);
            t_FunctionQuery::install(module);
            t_FunctionValues::install(module);
            t_FunctionValues$ValueFiller::install(module);
            t_ValueSource::install(module);
            t_ValueSourceScorer::install(module);
            docvalues::__install__(module);
            valuesource::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queries", "function");

            t_BoostedQuery::initialize(module);
            t_FunctionQuery::initialize(module);
            t_FunctionValues::initialize(module);
            t_FunctionValues$ValueFiller::initialize(module);
            t_ValueSource::initialize(module);
            t_ValueSourceScorer::initialize(module);
            docvalues::__initialize__(module);
            valuesource::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queries/function/docvalues/BoolDocValues.h"
#include "org/apache/lucene/queries/function/docvalues/DocTermsIndexDocValues.h"
#include "org/apache/lucene/queries/function/docvalues/DocTermsIndexDocValues$DocTermsIndexException.h"
#include "org/apache/lucene/queries/function/docvalues/DoubleDocValues.h"
#include "org/apache/lucene/queries/function/docvalues/FloatDocValues.h"
#include "org/apache/lucene/queries/function/docvalues/IntDocValues.h"
#include "org/apache/lucene/queries/function/docvalues/LongDocValues.h"
#include "org/apache/lucene/queries/function/docvalues/StrDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace docvalues {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queries.function", "docvalues");

              t_BoolDocValues::install(module);
              t_DocTermsIndexDocValues::install(module);
              t_DocTermsIndexDocValues$DocTermsIndexException::install(module);
              t_DoubleDocValues::install(module);
              t_FloatDocValues::install(module);
              t_IntDocValues::install(module);
              t_LongDocValues::install(module);
              t_StrDocValues::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queries.function", "docvalues");

              t_BoolDocValues::initialize(module);
              t_DocTermsIndexDocValues::initialize(module);
              t_DocTermsIndexDocValues$DocTermsIndexException::initialize(module);
              t_DoubleDocValues::initialize(module);
              t_FloatDocValues::initialize(module);
              t_IntDocValues::initialize(module);
              t_LongDocValues::initialize(module);
              t_StrDocValues::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queries/function/valuesource/BoolFunction.h"
#include "org/apache/lucene/queries/function/valuesource/ByteFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/BytesRefFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/ConstNumberSource.h"
#include "org/apache/lucene/queries/function/valuesource/ConstValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/DefFunction.h"
#include "org/apache/lucene/queries/function/valuesource/DivFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/DocFreqValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/DoubleConstValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/DoubleFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/DualFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/EnumFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/FieldCacheSource.h"
#include "org/apache/lucene/queries/function/valuesource/FloatFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/IDFValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/IfFunction.h"
#include "org/apache/lucene/queries/function/valuesource/IntFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/JoinDocFreqValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/LinearFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/LiteralValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/LongFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/MaxDocValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/MaxFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/MinFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/MultiBoolFunction.h"
#include "org/apache/lucene/queries/function/valuesource/MultiFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/MultiFunction.h"
#include "org/apache/lucene/queries/function/valuesource/MultiFunction$Values.h"
#include "org/apache/lucene/queries/function/valuesource/MultiValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/NormValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/NumDocsValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/OrdFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/PowFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/ProductFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/QueryValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/RangeMapFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/ReciprocalFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/ReverseOrdFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/ScaleFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/ShortFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/SimpleBoolFunction.h"
#include "org/apache/lucene/queries/function/valuesource/SimpleFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/SingleFunction.h"
#include "org/apache/lucene/queries/function/valuesource/SumFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/SumTotalTermFreqValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/TFValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/TermFreqValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/TotalTermFreqValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/VectorValueSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queries.function", "valuesource");

              t_BoolFunction::install(module);
              t_ByteFieldSource::install(module);
              t_BytesRefFieldSource::install(module);
              t_ConstNumberSource::install(module);
              t_ConstValueSource::install(module);
              t_DefFunction::install(module);
              t_DivFloatFunction::install(module);
              t_DocFreqValueSource::install(module);
              t_DoubleConstValueSource::install(module);
              t_DoubleFieldSource::install(module);
              t_DualFloatFunction::install(module);
              t_EnumFieldSource::install(module);
              t_FieldCacheSource::install(module);
              t_FloatFieldSource::install(module);
              t_IDFValueSource::install(module);
              t_IfFunction::install(module);
              t_IntFieldSource::install(module);
              t_JoinDocFreqValueSource::install(module);
              t_LinearFloatFunction::install(module);
              t_LiteralValueSource::install(module);
              t_LongFieldSource::install(module);
              t_MaxDocValueSource::install(module);
              t_MaxFloatFunction::install(module);
              t_MinFloatFunction::install(module);
              t_MultiBoolFunction::install(module);
              t_MultiFloatFunction::install(module);
              t_MultiFunction::install(module);
              t_MultiFunction$Values::install(module);
              t_MultiValueSource::install(module);
              t_NormValueSource::install(module);
              t_NumDocsValueSource::install(module);
              t_OrdFieldSource::install(module);
              t_PowFloatFunction::install(module);
              t_ProductFloatFunction::install(module);
              t_QueryValueSource::install(module);
              t_RangeMapFloatFunction::install(module);
              t_ReciprocalFloatFunction::install(module);
              t_ReverseOrdFieldSource::install(module);
              t_ScaleFloatFunction::install(module);
              t_ShortFieldSource::install(module);
              t_SimpleBoolFunction::install(module);
              t_SimpleFloatFunction::install(module);
              t_SingleFunction::install(module);
              t_SumFloatFunction::install(module);
              t_SumTotalTermFreqValueSource::install(module);
              t_TFValueSource::install(module);
              t_TermFreqValueSource::install(module);
              t_TotalTermFreqValueSource::install(module);
              t_VectorValueSource::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queries.function", "valuesource");

              t_BoolFunction::initialize(module);
              t_ByteFieldSource::initialize(module);
              t_BytesRefFieldSource::initialize(module);
              t_ConstNumberSource::initialize(module);
              t_ConstValueSource::initialize(module);
              t_DefFunction::initialize(module);
              t_DivFloatFunction::initialize(module);
              t_DocFreqValueSource::initialize(module);
              t_DoubleConstValueSource::initialize(module);
              t_DoubleFieldSource::initialize(module);
              t_DualFloatFunction::initialize(module);
              t_EnumFieldSource::initialize(module);
              t_FieldCacheSource::initialize(module);
              t_FloatFieldSource::initialize(module);
              t_IDFValueSource::initialize(module);
              t_IfFunction::initialize(module);
              t_IntFieldSource::initialize(module);
              t_JoinDocFreqValueSource::initialize(module);
              t_LinearFloatFunction::initialize(module);
              t_LiteralValueSource::initialize(module);
              t_LongFieldSource::initialize(module);
              t_MaxDocValueSource::initialize(module);
              t_MaxFloatFunction::initialize(module);
              t_MinFloatFunction::initialize(module);
              t_MultiBoolFunction::initialize(module);
              t_MultiFloatFunction::initialize(module);
              t_MultiFunction::initialize(module);
              t_MultiFunction$Values::initialize(module);
              t_MultiValueSource::initialize(module);
              t_NormValueSource::initialize(module);
              t_NumDocsValueSource::initialize(module);
              t_OrdFieldSource::initialize(module);
              t_PowFloatFunction::initialize(module);
              t_ProductFloatFunction::initialize(module);
              t_QueryValueSource::initialize(module);
              t_RangeMapFloatFunction::initialize(module);
              t_ReciprocalFloatFunction::initialize(module);
              t_ReverseOrdFieldSource::initialize(module);
              t_ScaleFloatFunction::initialize(module);
              t_ShortFieldSource::initialize(module);
              t_SimpleBoolFunction::initialize(module);
              t_SimpleFloatFunction::initialize(module);
              t_SingleFunction::initialize(module);
              t_SumFloatFunction::initialize(module);
              t_SumTotalTermFreqValueSource::initialize(module);
              t_TFValueSource::initialize(module);
              t_TermFreqValueSource::initialize(module);
              t_TotalTermFreqValueSource::initialize(module);
              t_VectorValueSource::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queries/mlt/MoreLikeThis.h"
#include "org/apache/lucene/queries/mlt/MoreLikeThisQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace mlt {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queries", "mlt");

            t_MoreLikeThis::install(module);
            t_MoreLikeThisQuery::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queries", "mlt");

            t_MoreLikeThis::initialize(module);
            t_MoreLikeThisQuery::initialize(module);
          }
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {

        namespace analyzing {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace classic {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace complexPhrase {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ext {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace flexible {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace simple {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace surround {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace xml {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "queryparser");

          analyzing::__install__(module);
          classic::__install__(module);
          complexPhrase::__install__(module);
          ext::__install__(module);
          flexible::__install__(module);
          simple::__install__(module);
          surround::__install__(module);
          xml::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "queryparser");

          analyzing::__initialize__(module);
          classic::__initialize__(module);
          complexPhrase::__initialize__(module);
          ext::__initialize__(module);
          flexible::__initialize__(module);
          simple::__initialize__(module);
          surround::__initialize__(module);
          xml::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/analyzing/AnalyzingQueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace analyzing {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "analyzing");

            t_AnalyzingQueryParser::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "analyzing");

            t_AnalyzingQueryParser::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/classic/CharStream.h"
#include "org/apache/lucene/queryparser/classic/FastCharStream.h"
#include "org/apache/lucene/queryparser/classic/MultiFieldQueryParser.h"
#include "org/apache/lucene/queryparser/classic/ParseException.h"
#include "org/apache/lucene/queryparser/classic/QueryParser.h"
#include "org/apache/lucene/queryparser/classic/QueryParser$Operator.h"
#include "org/apache/lucene/queryparser/classic/QueryParserBase.h"
#include "org/apache/lucene/queryparser/classic/QueryParserBase$MethodRemovedUseAnother.h"
#include "org/apache/lucene/queryparser/classic/QueryParserConstants.h"
#include "org/apache/lucene/queryparser/classic/QueryParserTokenManager.h"
#include "org/apache/lucene/queryparser/classic/Token.h"
#include "org/apache/lucene/queryparser/classic/TokenMgrError.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "classic");

            t_CharStream::install(module);
            t_FastCharStream::install(module);
            t_MultiFieldQueryParser::install(module);
            t_ParseException::install(module);
            t_QueryParser::install(module);
            t_QueryParser$Operator::install(module);
            t_QueryParserBase::install(module);
            t_QueryParserBase$MethodRemovedUseAnother::install(module);
            t_QueryParserConstants::install(module);
            t_QueryParserTokenManager::install(module);
            t_Token::install(module);
            t_TokenMgrError::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "classic");

            t_CharStream::initialize(module);
            t_FastCharStream::initialize(module);
            t_MultiFieldQueryParser::initialize(module);
            t_ParseException::initialize(module);
            t_QueryParser::initialize(module);
            t_QueryParser$Operator::initialize(module);
            t_QueryParserBase::initialize(module);
            t_QueryParserBase$MethodRemovedUseAnother::initialize(module);
            t_QueryParserConstants::initialize(module);
            t_QueryParserTokenManager::initialize(module);
            t_Token::initialize(module);
            t_TokenMgrError::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/complexPhrase/ComplexPhraseQueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace complexPhrase {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "complexPhrase");

            t_ComplexPhraseQueryParser::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "complexPhrase");

            t_ComplexPhraseQueryParser::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/ext/ExtendableQueryParser.h"
#include "org/apache/lucene/queryparser/ext/ExtensionQuery.h"
#include "org/apache/lucene/queryparser/ext/Extensions.h"
#include "org/apache/lucene/queryparser/ext/Extensions$Pair.h"
#include "org/apache/lucene/queryparser/ext/ParserExtension.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace ext {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "ext");

            t_ExtendableQueryParser::install(module);
            t_ExtensionQuery::install(module);
            t_Extensions::install(module);
            t_Extensions$Pair::install(module);
            t_ParserExtension::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "ext");

            t_ExtendableQueryParser::initialize(module);
            t_ExtensionQuery::initialize(module);
            t_Extensions::initialize(module);
            t_Extensions$Pair::initialize(module);
            t_ParserExtension::initialize(module);
          }
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {

          namespace core {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace messages {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace precedence {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace standard {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "flexible");

            core::__install__(module);
            messages::__install__(module);
            precedence::__install__(module);
            standard::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "flexible");

            core::__initialize__(module);
            messages::__initialize__(module);
            precedence::__initialize__(module);
            standard::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/QueryNodeError.h"
#include "org/apache/lucene/queryparser/flexible/core/QueryNodeException.h"
#include "org/apache/lucene/queryparser/flexible/core/QueryNodeParseException.h"
#include "org/apache/lucene/queryparser/flexible/core/QueryParserHelper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {

            namespace builders {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace config {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace messages {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace nodes {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace parser {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace processors {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace util {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }

            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "core");

              t_QueryNodeError::install(module);
              t_QueryNodeException::install(module);
              t_QueryNodeParseException::install(module);
              t_QueryParserHelper::install(module);
              builders::__install__(module);
              config::__install__(module);
              messages::__install__(module);
              nodes::__install__(module);
              parser::__install__(module);
              processors::__install__(module);
              util::__install__(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "core");

              t_QueryNodeError::initialize(module);
              t_QueryNodeException::initialize(module);
              t_QueryNodeParseException::initialize(module);
              t_QueryParserHelper::initialize(module);
              builders::__initialize__(module);
              config::__initialize__(module);
              messages::__initialize__(module);
              nodes::__initialize__(module);
              parser::__initialize__(module);
              processors::__initialize__(module);
              util::__initialize__(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/builders/QueryBuilder.h"
#include "org/apache/lucene/queryparser/flexible/core/builders/QueryTreeBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace builders {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "builders");

                t_QueryBuilder::install(module);
                t_QueryTreeBuilder::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "builders");

                t_QueryBuilder::initialize(module);
                t_QueryTreeBuilder::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/config/AbstractQueryConfig.h"
#include "org/apache/lucene/queryparser/flexible/core/config/ConfigurationKey.h"
#include "org/apache/lucene/queryparser/flexible/core/config/FieldConfig.h"
#include "org/apache/lucene/queryparser/flexible/core/config/FieldConfigListener.h"
#include "org/apache/lucene/queryparser/flexible/core/config/QueryConfigHandler.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace config {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "config");

                t_AbstractQueryConfig::install(module);
                t_ConfigurationKey::install(module);
                t_FieldConfig::install(module);
                t_FieldConfigListener::install(module);
                t_QueryConfigHandler::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "config");

                t_AbstractQueryConfig::initialize(module);
                t_ConfigurationKey::initialize(module);
                t_FieldConfig::initialize(module);
                t_FieldConfigListener::initialize(module);
                t_QueryConfigHandler::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/messages/QueryParserMessages.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace messages {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "messages");

                t_QueryParserMessages::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "messages");

                t_QueryParserMessages::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/nodes/AndQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/AnyQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/BooleanQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/BoostQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/DeletedQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldValuePairQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldableNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/FuzzyQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/GroupQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/MatchAllDocsQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/MatchNoDocsQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/ModifierQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/ModifierQueryNode$Modifier.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/NoTokenFoundQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/OpaqueQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/OrQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/PathQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/PathQueryNode$QueryText.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/PhraseSlopQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/ProximityQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/ProximityQueryNode$ProximityType.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/ProximityQueryNode$Type.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/QuotedFieldQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/RangeQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/SlopQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/TextableQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/TokenizedPhraseQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/ValueQueryNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "nodes");

                t_AndQueryNode::install(module);
                t_AnyQueryNode::install(module);
                t_BooleanQueryNode::install(module);
                t_BoostQueryNode::install(module);
                t_DeletedQueryNode::install(module);
                t_FieldQueryNode::install(module);
                t_FieldValuePairQueryNode::install(module);
                t_FieldableNode::install(module);
                t_FuzzyQueryNode::install(module);
                t_GroupQueryNode::install(module);
                t_MatchAllDocsQueryNode::install(module);
                t_MatchNoDocsQueryNode::install(module);
                t_ModifierQueryNode::install(module);
                t_ModifierQueryNode$Modifier::install(module);
                t_NoTokenFoundQueryNode::install(module);
                t_OpaqueQueryNode::install(module);
                t_OrQueryNode::install(module);
                t_PathQueryNode::install(module);
                t_PathQueryNode$QueryText::install(module);
                t_PhraseSlopQueryNode::install(module);
                t_ProximityQueryNode::install(module);
                t_ProximityQueryNode$ProximityType::install(module);
                t_ProximityQueryNode$Type::install(module);
                t_QueryNode::install(module);
                t_QueryNodeImpl::install(module);
                t_QuotedFieldQueryNode::install(module);
                t_RangeQueryNode::install(module);
                t_SlopQueryNode::install(module);
                t_TextableQueryNode::install(module);
                t_TokenizedPhraseQueryNode::install(module);
                t_ValueQueryNode::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "nodes");

                t_AndQueryNode::initialize(module);
                t_AnyQueryNode::initialize(module);
                t_BooleanQueryNode::initialize(module);
                t_BoostQueryNode::initialize(module);
                t_DeletedQueryNode::initialize(module);
                t_FieldQueryNode::initialize(module);
                t_FieldValuePairQueryNode::initialize(module);
                t_FieldableNode::initialize(module);
                t_FuzzyQueryNode::initialize(module);
                t_GroupQueryNode::initialize(module);
                t_MatchAllDocsQueryNode::initialize(module);
                t_MatchNoDocsQueryNode::initialize(module);
                t_ModifierQueryNode::initialize(module);
                t_ModifierQueryNode$Modifier::initialize(module);
                t_NoTokenFoundQueryNode::initialize(module);
                t_OpaqueQueryNode::initialize(module);
                t_OrQueryNode::initialize(module);
                t_PathQueryNode::initialize(module);
                t_PathQueryNode$QueryText::initialize(module);
                t_PhraseSlopQueryNode::initialize(module);
                t_ProximityQueryNode::initialize(module);
                t_ProximityQueryNode$ProximityType::initialize(module);
                t_ProximityQueryNode$Type::initialize(module);
                t_QueryNode::initialize(module);
                t_QueryNodeImpl::initialize(module);
                t_QuotedFieldQueryNode::initialize(module);
                t_RangeQueryNode::initialize(module);
                t_SlopQueryNode::initialize(module);
                t_TextableQueryNode::initialize(module);
                t_TokenizedPhraseQueryNode::initialize(module);
                t_ValueQueryNode::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/parser/EscapeQuerySyntax.h"
#include "org/apache/lucene/queryparser/flexible/core/parser/EscapeQuerySyntax$Type.h"
#include "org/apache/lucene/queryparser/flexible/core/parser/SyntaxParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace parser {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "parser");

                t_EscapeQuerySyntax::install(module);
                t_EscapeQuerySyntax$Type::install(module);
                t_SyntaxParser::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "parser");

                t_EscapeQuerySyntax::initialize(module);
                t_EscapeQuerySyntax$Type::initialize(module);
                t_SyntaxParser::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/processors/NoChildOptimizationQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/core/processors/QueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/core/processors/QueryNodeProcessorImpl.h"
#include "org/apache/lucene/queryparser/flexible/core/processors/QueryNodeProcessorPipeline.h"
#include "org/apache/lucene/queryparser/flexible/core/processors/RemoveDeletedQueryNodesProcessor.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace processors {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "processors");

                t_NoChildOptimizationQueryNodeProcessor::install(module);
                t_QueryNodeProcessor::install(module);
                t_QueryNodeProcessorImpl::install(module);
                t_QueryNodeProcessorPipeline::install(module);
                t_RemoveDeletedQueryNodesProcessor::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "processors");

                t_NoChildOptimizationQueryNodeProcessor::initialize(module);
                t_QueryNodeProcessor::initialize(module);
                t_QueryNodeProcessorImpl::initialize(module);
                t_QueryNodeProcessorPipeline::initialize(module);
                t_RemoveDeletedQueryNodesProcessor::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/util/QueryNodeOperation.h"
#include "org/apache/lucene/queryparser/flexible/core/util/StringUtils.h"
#include "org/apache/lucene/queryparser/flexible/core/util/UnescapedCharSequence.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace util {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "util");

                t_QueryNodeOperation::install(module);
                t_StringUtils::install(module);
                t_UnescapedCharSequence::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "util");

                t_QueryNodeOperation::initialize(module);
                t_StringUtils::initialize(module);
                t_UnescapedCharSequence::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/messages/Message.h"
#include "org/apache/lucene/queryparser/flexible/messages/MessageImpl.h"
#include "org/apache/lucene/queryparser/flexible/messages/NLS.h"
#include "org/apache/lucene/queryparser/flexible/messages/NLSException.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace messages {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "messages");

              t_Message::install(module);
              t_MessageImpl::install(module);
              t_NLS::install(module);
              t_NLSException::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "messages");

              t_Message::initialize(module);
              t_MessageImpl::initialize(module);
              t_NLS::initialize(module);
              t_NLSException::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/precedence/PrecedenceQueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace precedence {

            namespace processors {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }

            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "precedence");

              t_PrecedenceQueryParser::install(module);
              processors::__install__(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "precedence");

              t_PrecedenceQueryParser::initialize(module);
              processors::__initialize__(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/precedence/processors/BooleanModifiersQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/precedence/processors/PrecedenceQueryNodeProcessorPipeline.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace precedence {
            namespace processors {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.precedence", "processors");

                t_BooleanModifiersQueryNodeProcessor::install(module);
                t_PrecedenceQueryNodeProcessorPipeline::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.precedence", "processors");

                t_BooleanModifiersQueryNodeProcessor::initialize(module);
                t_PrecedenceQueryNodeProcessorPipeline::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/standard/CommonQueryParserConfiguration.h"
#include "org/apache/lucene/queryparser/flexible/standard/QueryParserUtil.h"
#include "org/apache/lucene/queryparser/flexible/standard/StandardQueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {

            namespace builders {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace config {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace nodes {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace parser {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace processors {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }

            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "standard");

              t_CommonQueryParserConfiguration::install(module);
              t_QueryParserUtil::install(module);
              t_StandardQueryParser::install(module);
              builders::__install__(module);
              config::__install__(module);
              nodes::__install__(module);
              parser::__install__(module);
              processors::__install__(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "standard");

              t_CommonQueryParserConfiguration::initialize(module);
              t_QueryParserUtil::initialize(module);
              t_StandardQueryParser::initialize(module);
              builders::__initialize__(module);
              config::__initialize__(module);
              nodes::__initialize__(module);
              parser::__initialize__(module);
              processors::__initialize__(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/standard/builders/AnyQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/BooleanQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/BoostQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/DummyQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/FieldQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/FuzzyQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/GroupQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/MatchAllDocsQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/MatchNoDocsQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/ModifierQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/MultiPhraseQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/NumericRangeQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/PhraseQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/PrefixWildcardQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/RegexpQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/SlopQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/StandardBooleanQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/StandardQueryBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/StandardQueryTreeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/TermRangeQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/WildcardQueryNodeBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace builders {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "builders");

                t_AnyQueryNodeBuilder::install(module);
                t_BooleanQueryNodeBuilder::install(module);
                t_BoostQueryNodeBuilder::install(module);
                t_DummyQueryNodeBuilder::install(module);
                t_FieldQueryNodeBuilder::install(module);
                t_FuzzyQueryNodeBuilder::install(module);
                t_GroupQueryNodeBuilder::install(module);
                t_MatchAllDocsQueryNodeBuilder::install(module);
                t_MatchNoDocsQueryNodeBuilder::install(module);
                t_ModifierQueryNodeBuilder::install(module);
                t_MultiPhraseQueryNodeBuilder::install(module);
                t_NumericRangeQueryNodeBuilder::install(module);
                t_PhraseQueryNodeBuilder::install(module);
                t_PrefixWildcardQueryNodeBuilder::install(module);
                t_RegexpQueryNodeBuilder::install(module);
                t_SlopQueryNodeBuilder::install(module);
                t_StandardBooleanQueryNodeBuilder::install(module);
                t_StandardQueryBuilder::install(module);
                t_StandardQueryTreeBuilder::install(module);
                t_TermRangeQueryNodeBuilder::install(module);
                t_WildcardQueryNodeBuilder::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "builders");

                t_AnyQueryNodeBuilder::initialize(module);
                t_BooleanQueryNodeBuilder::initialize(module);
                t_BoostQueryNodeBuilder::initialize(module);
                t_DummyQueryNodeBuilder::initialize(module);
                t_FieldQueryNodeBuilder::initialize(module);
                t_FuzzyQueryNodeBuilder::initialize(module);
                t_GroupQueryNodeBuilder::initialize(module);
                t_MatchAllDocsQueryNodeBuilder::initialize(module);
                t_MatchNoDocsQueryNodeBuilder::initialize(module);
                t_ModifierQueryNodeBuilder::initialize(module);
                t_MultiPhraseQueryNodeBuilder::initialize(module);
                t_NumericRangeQueryNodeBuilder::initialize(module);
                t_PhraseQueryNodeBuilder::initialize(module);
                t_PrefixWildcardQueryNodeBuilder::initialize(module);
                t_RegexpQueryNodeBuilder::initialize(module);
                t_SlopQueryNodeBuilder::initialize(module);
                t_StandardBooleanQueryNodeBuilder::initialize(module);
                t_StandardQueryBuilder::initialize(module);
                t_StandardQueryTreeBuilder::initialize(module);
                t_TermRangeQueryNodeBuilder::initialize(module);
                t_WildcardQueryNodeBuilder::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/standard/config/FieldBoostMapFCListener.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/FieldDateResolutionFCListener.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/FuzzyConfig.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/NumberDateFormat.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/NumericConfig.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/NumericFieldConfigListener.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/StandardQueryConfigHandler.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/StandardQueryConfigHandler$ConfigurationKeys.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/StandardQueryConfigHandler$Operator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace config {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "config");

                t_FieldBoostMapFCListener::install(module);
                t_FieldDateResolutionFCListener::install(module);
                t_FuzzyConfig::install(module);
                t_NumberDateFormat::install(module);
                t_NumericConfig::install(module);
                t_NumericFieldConfigListener::install(module);
                t_StandardQueryConfigHandler::install(module);
                t_StandardQueryConfigHandler$ConfigurationKeys::install(module);
                t_StandardQueryConfigHandler$Operator::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "config");

                t_FieldBoostMapFCListener::initialize(module);
                t_FieldDateResolutionFCListener::initialize(module);
                t_FuzzyConfig::initialize(module);
                t_NumberDateFormat::initialize(module);
                t_NumericConfig::initialize(module);
                t_NumericFieldConfigListener::initialize(module);
                t_StandardQueryConfigHandler::initialize(module);
                t_StandardQueryConfigHandler$ConfigurationKeys::initialize(module);
                t_StandardQueryConfigHandler$Operator::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/standard/nodes/AbstractRangeQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/BooleanModifierNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/MultiPhraseQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/NumericQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/NumericRangeQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/PrefixWildcardQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/RegexpQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/StandardBooleanQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/TermRangeQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/WildcardQueryNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace nodes {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "nodes");

                t_AbstractRangeQueryNode::install(module);
                t_BooleanModifierNode::install(module);
                t_MultiPhraseQueryNode::install(module);
                t_NumericQueryNode::install(module);
                t_NumericRangeQueryNode::install(module);
                t_PrefixWildcardQueryNode::install(module);
                t_RegexpQueryNode::install(module);
                t_StandardBooleanQueryNode::install(module);
                t_TermRangeQueryNode::install(module);
                t_WildcardQueryNode::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "nodes");

                t_AbstractRangeQueryNode::initialize(module);
                t_BooleanModifierNode::initialize(module);
                t_MultiPhraseQueryNode::initialize(module);
                t_NumericQueryNode::initialize(module);
                t_NumericRangeQueryNode::initialize(module);
                t_PrefixWildcardQueryNode::initialize(module);
                t_RegexpQueryNode::initialize(module);
                t_StandardBooleanQueryNode::initialize(module);
                t_TermRangeQueryNode::initialize(module);
                t_WildcardQueryNode::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/standard/parser/CharStream.h"
#include "org/apache/lucene/queryparser/flexible/standard/parser/EscapeQuerySyntaxImpl.h"
#include "org/apache/lucene/queryparser/flexible/standard/parser/FastCharStream.h"
#include "org/apache/lucene/queryparser/flexible/standard/parser/ParseException.h"
#include "org/apache/lucene/queryparser/flexible/standard/parser/StandardSyntaxParser.h"
#include "org/apache/lucene/queryparser/flexible/standard/parser/StandardSyntaxParserConstants.h"
#include "org/apache/lucene/queryparser/flexible/standard/parser/StandardSyntaxParserTokenManager.h"
#include "org/apache/lucene/queryparser/flexible/standard/parser/Token.h"
#include "org/apache/lucene/queryparser/flexible/standard/parser/TokenMgrError.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "parser");

                t_CharStream::install(module);
                t_EscapeQuerySyntaxImpl::install(module);
                t_FastCharStream::install(module);
                t_ParseException::install(module);
                t_StandardSyntaxParser::install(module);
                t_StandardSyntaxParserConstants::install(module);
                t_StandardSyntaxParserTokenManager::install(module);
                t_Token::install(module);
                t_TokenMgrError::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "parser");

                t_CharStream::initialize(module);
                t_EscapeQuerySyntaxImpl::initialize(module);
                t_FastCharStream::initialize(module);
                t_ParseException::initialize(module);
                t_StandardSyntaxParser::initialize(module);
                t_StandardSyntaxParserConstants::initialize(module);
                t_StandardSyntaxParserTokenManager::initialize(module);
                t_Token::initialize(module);
                t_TokenMgrError::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/standard/processors/AllowLeadingWildcardProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/AnalyzerQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/BooleanQuery2ModifierNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/BooleanSingleChildOptimizationQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/BoostQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/DefaultPhraseSlopQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/FuzzyQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/GroupQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/LowercaseExpandedTermsQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/MatchAllDocsQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/MultiFieldQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/MultiTermRewriteMethodProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/NumericQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/NumericRangeQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/OpenRangeQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/PhraseSlopQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/RemoveEmptyNonLeafQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/StandardQueryNodeProcessorPipeline.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/TermRangeQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/WildcardQueryNodeProcessor.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace processors {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "processors");

                t_AllowLeadingWildcardProcessor::install(module);
                t_AnalyzerQueryNodeProcessor::install(module);
                t_BooleanQuery2ModifierNodeProcessor::install(module);
                t_BooleanSingleChildOptimizationQueryNodeProcessor::install(module);
                t_BoostQueryNodeProcessor::install(module);
                t_DefaultPhraseSlopQueryNodeProcessor::install(module);
                t_FuzzyQueryNodeProcessor::install(module);
                t_GroupQueryNodeProcessor::install(module);
                t_LowercaseExpandedTermsQueryNodeProcessor::install(module);
                t_MatchAllDocsQueryNodeProcessor::install(module);
                t_MultiFieldQueryNodeProcessor::install(module);
                t_MultiTermRewriteMethodProcessor::install(module);
                t_NumericQueryNodeProcessor::install(module);
                t_NumericRangeQueryNodeProcessor::install(module);
                t_OpenRangeQueryNodeProcessor::install(module);
                t_PhraseSlopQueryNodeProcessor::install(module);
                t_RemoveEmptyNonLeafQueryNodeProcessor::install(module);
                t_StandardQueryNodeProcessorPipeline::install(module);
                t_TermRangeQueryNodeProcessor::install(module);
                t_WildcardQueryNodeProcessor::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "processors");

                t_AllowLeadingWildcardProcessor::initialize(module);
                t_AnalyzerQueryNodeProcessor::initialize(module);
                t_BooleanQuery2ModifierNodeProcessor::initialize(module);
                t_BooleanSingleChildOptimizationQueryNodeProcessor::initialize(module);
                t_BoostQueryNodeProcessor::initialize(module);
                t_DefaultPhraseSlopQueryNodeProcessor::initialize(module);
                t_FuzzyQueryNodeProcessor::initialize(module);
                t_GroupQueryNodeProcessor::initialize(module);
                t_LowercaseExpandedTermsQueryNodeProcessor::initialize(module);
                t_MatchAllDocsQueryNodeProcessor::initialize(module);
                t_MultiFieldQueryNodeProcessor::initialize(module);
                t_MultiTermRewriteMethodProcessor::initialize(module);
                t_NumericQueryNodeProcessor::initialize(module);
                t_NumericRangeQueryNodeProcessor::initialize(module);
                t_OpenRangeQueryNodeProcessor::initialize(module);
                t_PhraseSlopQueryNodeProcessor::initialize(module);
                t_RemoveEmptyNonLeafQueryNodeProcessor::initialize(module);
                t_StandardQueryNodeProcessorPipeline::initialize(module);
                t_TermRangeQueryNodeProcessor::initialize(module);
                t_WildcardQueryNodeProcessor::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/simple/SimpleQueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace simple {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "simple");

            t_SimpleQueryParser::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "simple");

            t_SimpleQueryParser::initialize(module);
          }
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {

          namespace parser {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace query {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "surround");

            parser::__install__(module);
            query::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "surround");

            parser::__initialize__(module);
            query::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/surround/parser/CharStream.h"
#include "org/apache/lucene/queryparser/surround/parser/FastCharStream.h"
#include "org/apache/lucene/queryparser/surround/parser/ParseException.h"
#include "org/apache/lucene/queryparser/surround/parser/QueryParser.h"
#include "org/apache/lucene/queryparser/surround/parser/QueryParserConstants.h"
#include "org/apache/lucene/queryparser/surround/parser/QueryParserTokenManager.h"
#include "org/apache/lucene/queryparser/surround/parser/Token.h"
#include "org/apache/lucene/queryparser/surround/parser/TokenMgrError.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace parser {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.surround", "parser");

              t_CharStream::install(module);
              t_FastCharStream::install(module);
              t_ParseException::install(module);
              t_QueryParser::install(module);
              t_QueryParserConstants::install(module);
              t_QueryParserTokenManager::install(module);
              t_Token::install(module);
              t_TokenMgrError::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.surround", "parser");

              t_CharStream::initialize(module);
              t_FastCharStream::initialize(module);
              t_ParseException::initialize(module);
              t_QueryParser::initialize(module);
              t_QueryParserConstants::initialize(module);
              t_QueryParserTokenManager::initialize(module);
              t_Token::initialize(module);
              t_TokenMgrError::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/surround/query/AndQuery.h"
#include "org/apache/lucene/queryparser/surround/query/BasicQueryFactory.h"
#include "org/apache/lucene/queryparser/surround/query/ComposedQuery.h"
#include "org/apache/lucene/queryparser/surround/query/DistanceQuery.h"
#include "org/apache/lucene/queryparser/surround/query/DistanceSubQuery.h"
#include "org/apache/lucene/queryparser/surround/query/FieldsQuery.h"
#include "org/apache/lucene/queryparser/surround/query/NotQuery.h"
#include "org/apache/lucene/queryparser/surround/query/OrQuery.h"
#include "org/apache/lucene/queryparser/surround/query/SimpleTerm.h"
#include "org/apache/lucene/queryparser/surround/query/SimpleTerm$MatchingTermVisitor.h"
#include "org/apache/lucene/queryparser/surround/query/SpanNearClauseFactory.h"
#include "org/apache/lucene/queryparser/surround/query/SrndPrefixQuery.h"
#include "org/apache/lucene/queryparser/surround/query/SrndQuery.h"
#include "org/apache/lucene/queryparser/surround/query/SrndTermQuery.h"
#include "org/apache/lucene/queryparser/surround/query/SrndTruncQuery.h"
#include "org/apache/lucene/queryparser/surround/query/TooManyBasicQueries.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.surround", "query");

              t_AndQuery::install(module);
              t_BasicQueryFactory::install(module);
              t_ComposedQuery::install(module);
              t_DistanceQuery::install(module);
              t_DistanceSubQuery::install(module);
              t_FieldsQuery::install(module);
              t_NotQuery::install(module);
              t_OrQuery::install(module);
              t_SimpleTerm::install(module);
              t_SimpleTerm$MatchingTermVisitor::install(module);
              t_SpanNearClauseFactory::install(module);
              t_SrndPrefixQuery::install(module);
              t_SrndQuery::install(module);
              t_SrndTermQuery::install(module);
              t_SrndTruncQuery::install(module);
              t_TooManyBasicQueries::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.surround", "query");

              t_AndQuery::initialize(module);
              t_BasicQueryFactory::initialize(module);
              t_ComposedQuery::initialize(module);
              t_DistanceQuery::initialize(module);
              t_DistanceSubQuery::initialize(module);
              t_FieldsQuery::initialize(module);
              t_NotQuery::initialize(module);
              t_OrQuery::initialize(module);
              t_SimpleTerm::initialize(module);
              t_SimpleTerm$MatchingTermVisitor::initialize(module);
              t_SpanNearClauseFactory::initialize(module);
              t_SrndPrefixQuery::initialize(module);
              t_SrndQuery::initialize(module);
              t_SrndTermQuery::initialize(module);
              t_SrndTruncQuery::initialize(module);
              t_TooManyBasicQueries::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/xml/CoreParser.h"
#include "org/apache/lucene/queryparser/xml/CorePlusExtensionsParser.h"
#include "org/apache/lucene/queryparser/xml/DOMUtils.h"
#include "org/apache/lucene/queryparser/xml/FilterBuilder.h"
#include "org/apache/lucene/queryparser/xml/FilterBuilderFactory.h"
#include "org/apache/lucene/queryparser/xml/ParserException.h"
#include "org/apache/lucene/queryparser/xml/QueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/QueryBuilderFactory.h"
#include "org/apache/lucene/queryparser/xml/QueryTemplateManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {

          namespace builders {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "xml");

            t_CoreParser::install(module);
            t_CorePlusExtensionsParser::install(module);
            t_DOMUtils::install(module);
            t_FilterBuilder::install(module);
            t_FilterBuilderFactory::install(module);
            t_ParserException::install(module);
            t_QueryBuilder::install(module);
            t_QueryBuilderFactory::install(module);
            t_QueryTemplateManager::install(module);
            builders::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "xml");

            t_CoreParser::initialize(module);
            t_CorePlusExtensionsParser::initialize(module);
            t_DOMUtils::initialize(module);
            t_FilterBuilder::initialize(module);
            t_FilterBuilderFactory::initialize(module);
            t_ParserException::initialize(module);
            t_QueryBuilder::initialize(module);
            t_QueryBuilderFactory::initialize(module);
            t_QueryTemplateManager::initialize(module);
            builders::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/xml/builders/BooleanFilterBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/BooleanQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/BoostingQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/BoostingTermBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/CachedFilterBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/ConstantScoreQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/DisjunctionMaxQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/DuplicateFilterBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/FilteredQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/FuzzyLikeThisQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/LikeThisQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/MatchAllDocsQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/NumericRangeFilterBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/NumericRangeQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/RangeFilterBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanBuilderBase.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanFirstBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanNearBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanNotBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanOrBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanOrTermsBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanQueryBuilderFactory.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanTermBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/TermQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/TermsFilterBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/TermsQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/UserInputQueryBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {
          namespace builders {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.xml", "builders");

              t_BooleanFilterBuilder::install(module);
              t_BooleanQueryBuilder::install(module);
              t_BoostingQueryBuilder::install(module);
              t_BoostingTermBuilder::install(module);
              t_CachedFilterBuilder::install(module);
              t_ConstantScoreQueryBuilder::install(module);
              t_DisjunctionMaxQueryBuilder::install(module);
              t_DuplicateFilterBuilder::install(module);
              t_FilteredQueryBuilder::install(module);
              t_FuzzyLikeThisQueryBuilder::install(module);
              t_LikeThisQueryBuilder::install(module);
              t_MatchAllDocsQueryBuilder::install(module);
              t_NumericRangeFilterBuilder::install(module);
              t_NumericRangeQueryBuilder::install(module);
              t_RangeFilterBuilder::install(module);
              t_SpanBuilderBase::install(module);
              t_SpanFirstBuilder::install(module);
              t_SpanNearBuilder::install(module);
              t_SpanNotBuilder::install(module);
              t_SpanOrBuilder::install(module);
              t_SpanOrTermsBuilder::install(module);
              t_SpanQueryBuilder::install(module);
              t_SpanQueryBuilderFactory::install(module);
              t_SpanTermBuilder::install(module);
              t_TermQueryBuilder::install(module);
              t_TermsFilterBuilder::install(module);
              t_TermsQueryBuilder::install(module);
              t_UserInputQueryBuilder::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.xml", "builders");

              t_BooleanFilterBuilder::initialize(module);
              t_BooleanQueryBuilder::initialize(module);
              t_BoostingQueryBuilder::initialize(module);
              t_BoostingTermBuilder::initialize(module);
              t_CachedFilterBuilder::initialize(module);
              t_ConstantScoreQueryBuilder::initialize(module);
              t_DisjunctionMaxQueryBuilder::initialize(module);
              t_DuplicateFilterBuilder::initialize(module);
              t_FilteredQueryBuilder::initialize(module);
              t_FuzzyLikeThisQueryBuilder::initialize(module);
              t_LikeThisQueryBuilder::initialize(module);
              t_MatchAllDocsQueryBuilder::initialize(module);
              t_NumericRangeFilterBuilder::initialize(module);
              t_NumericRangeQueryBuilder::initialize(module);
              t_RangeFilterBuilder::initialize(module);
              t_SpanBuilderBase::initialize(module);
              t_SpanFirstBuilder::initialize(module);
              t_SpanNearBuilder::initialize(module);
              t_SpanNotBuilder::initialize(module);
              t_SpanOrBuilder::initialize(module);
              t_SpanOrTermsBuilder::initialize(module);
              t_SpanQueryBuilder::initialize(module);
              t_SpanQueryBuilderFactory::initialize(module);
              t_SpanTermBuilder::initialize(module);
              t_TermQueryBuilder::initialize(module);
              t_TermsFilterBuilder::initialize(module);
              t_TermsQueryBuilder::initialize(module);
              t_UserInputQueryBuilder::initialize(module);
            }
          }
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {

        namespace queries {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "sandbox");

          queries::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "sandbox");

          queries::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/sandbox/queries/DuplicateFilter.h"
#include "org/apache/lucene/sandbox/queries/DuplicateFilter$KeepMode.h"
#include "org/apache/lucene/sandbox/queries/DuplicateFilter$ProcessingMode.h"
#include "org/apache/lucene/sandbox/queries/FuzzyLikeThisQuery.h"
#include "org/apache/lucene/sandbox/queries/SlowCollatedStringComparator.h"
#include "org/apache/lucene/sandbox/queries/SlowCollatedTermRangeFilter.h"
#include "org/apache/lucene/sandbox/queries/SlowCollatedTermRangeQuery.h"
#include "org/apache/lucene/sandbox/queries/SlowCollatedTermRangeTermsEnum.h"
#include "org/apache/lucene/sandbox/queries/SlowFuzzyQuery.h"
#include "org/apache/lucene/sandbox/queries/SlowFuzzyTermsEnum.h"
#include "org/apache/lucene/sandbox/queries/SortedSetSortField.h"
#include "org/apache/lucene/sandbox/queries/SortedSetSortField$Selector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {

          namespace regex {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.sandbox", "queries");

            t_DuplicateFilter::install(module);
            t_DuplicateFilter$KeepMode::install(module);
            t_DuplicateFilter$ProcessingMode::install(module);
            t_FuzzyLikeThisQuery::install(module);
            t_SlowCollatedStringComparator::install(module);
            t_SlowCollatedTermRangeFilter::install(module);
            t_SlowCollatedTermRangeQuery::install(module);
            t_SlowCollatedTermRangeTermsEnum::install(module);
            t_SlowFuzzyQuery::install(module);
            t_SlowFuzzyTermsEnum::install(module);
            t_SortedSetSortField::install(module);
            t_SortedSetSortField$Selector::install(module);
            regex::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.sandbox", "queries");

            t_DuplicateFilter::initialize(module);
            t_DuplicateFilter$KeepMode::initialize(module);
            t_DuplicateFilter$ProcessingMode::initialize(module);
            t_FuzzyLikeThisQuery::initialize(module);
            t_SlowCollatedStringComparator::initialize(module);
            t_SlowCollatedTermRangeFilter::initialize(module);
            t_SlowCollatedTermRangeQuery::initialize(module);
            t_SlowCollatedTermRangeTermsEnum::initialize(module);
            t_SlowFuzzyQuery::initialize(module);
            t_SlowFuzzyTermsEnum::initialize(module);
            t_SortedSetSortField::initialize(module);
            t_SortedSetSortField$Selector::initialize(module);
            regex::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/sandbox/queries/regex/JavaUtilRegexCapabilities.h"
#include "org/apache/lucene/sandbox/queries/regex/RegexCapabilities.h"
#include "org/apache/lucene/sandbox/queries/regex/RegexCapabilities$RegexMatcher.h"
#include "org/apache/lucene/sandbox/queries/regex/RegexQuery.h"
#include "org/apache/lucene/sandbox/queries/regex/RegexQueryCapable.h"
#include "org/apache/lucene/sandbox/queries/regex/RegexTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {
          namespace regex {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.sandbox.queries", "regex");

              t_JavaUtilRegexCapabilities::install(module);
              t_RegexCapabilities::install(module);
              t_RegexCapabilities$RegexMatcher::install(module);
              t_RegexQuery::install(module);
              t_RegexQueryCapable::install(module);
              t_RegexTermsEnum::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.sandbox.queries", "regex");

              t_JavaUtilRegexCapabilities::initialize(module);
              t_RegexCapabilities::initialize(module);
              t_RegexCapabilities$RegexMatcher::initialize(module);
              t_RegexQuery::initialize(module);
              t_RegexQueryCapable::initialize(module);
              t_RegexTermsEnum::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/AutomatonQuery.h"
#include "org/apache/lucene/search/BitsFilteredDocIdSet.h"
#include "org/apache/lucene/search/BooleanClause.h"
#include "org/apache/lucene/search/BooleanClause$Occur.h"
#include "org/apache/lucene/search/BooleanQuery.h"
#include "org/apache/lucene/search/BooleanQuery$TooManyClauses.h"
#include "org/apache/lucene/search/BoostAttribute.h"
#include "org/apache/lucene/search/BoostAttributeImpl.h"
#include "org/apache/lucene/search/BulkScorer.h"
#include "org/apache/lucene/search/CachingCollector.h"
#include "org/apache/lucene/search/CachingWrapperFilter.h"
#include "org/apache/lucene/search/CollectionStatistics.h"
#include "org/apache/lucene/search/CollectionTerminatedException.h"
#include "org/apache/lucene/search/Collector.h"
#include "org/apache/lucene/search/ComplexExplanation.h"
#include "org/apache/lucene/search/ConstantScoreAutoRewrite.h"
#include "org/apache/lucene/search/ConstantScoreQuery.h"
#include "org/apache/lucene/search/ControlledRealTimeReopenThread.h"
#include "org/apache/lucene/search/DisjunctionMaxQuery.h"
#include "org/apache/lucene/search/DocIdSet.h"
#include "org/apache/lucene/search/DocIdSetIterator.h"
#include "org/apache/lucene/search/DocTermOrdsRangeFilter.h"
#include "org/apache/lucene/search/DocTermOrdsRewriteMethod.h"
#include "org/apache/lucene/search/Explanation.h"
#include "org/apache/lucene/search/FieldCache.h"
#include "org/apache/lucene/search/FieldCache$ByteParser.h"
#include "org/apache/lucene/search/FieldCache$Bytes.h"
#include "org/apache/lucene/search/FieldCache$CacheEntry.h"
#include "org/apache/lucene/search/FieldCache$CreationPlaceholder.h"
#include "org/apache/lucene/search/FieldCache$DoubleParser.h"
#include "org/apache/lucene/search/FieldCache$Doubles.h"
#include "org/apache/lucene/search/FieldCache$FloatParser.h"
#include "org/apache/lucene/search/FieldCache$Floats.h"
#include "org/apache/lucene/search/FieldCache$IntParser.h"
#include "org/apache/lucene/search/FieldCache$Ints.h"
#include "org/apache/lucene/search/FieldCache$LongParser.h"
#include "org/apache/lucene/search/FieldCache$Longs.h"
#include "org/apache/lucene/search/FieldCache$Parser.h"
#include "org/apache/lucene/search/FieldCache$ShortParser.h"
#include "org/apache/lucene/search/FieldCache$Shorts.h"
#include "org/apache/lucene/search/FieldCacheDocIdSet.h"
#include "org/apache/lucene/search/FieldCacheImpl$SortedDocValuesImpl.h"
#include "org/apache/lucene/search/FieldCacheRangeFilter.h"
#include "org/apache/lucene/search/FieldCacheRewriteMethod.h"
#include "org/apache/lucene/search/FieldCacheTermsFilter.h"
#include "org/apache/lucene/search/FieldComparator.h"
#include "org/apache/lucene/search/FieldComparator$ByteComparator.h"
#include "org/apache/lucene/search/FieldComparator$DocComparator.h"
#include "org/apache/lucene/search/FieldComparator$DoubleComparator.h"
#include "org/apache/lucene/search/FieldComparator$FloatComparator.h"
#include "org/apache/lucene/search/FieldComparator$IntComparator.h"
#include "org/apache/lucene/search/FieldComparator$LongComparator.h"
#include "org/apache/lucene/search/FieldComparator$NumericComparator.h"
#include "org/apache/lucene/search/FieldComparator$RelevanceComparator.h"
#include "org/apache/lucene/search/FieldComparator$ShortComparator.h"
#include "org/apache/lucene/search/FieldComparator$TermOrdValComparator.h"
#include "org/apache/lucene/search/FieldComparator$TermValComparator.h"
#include "org/apache/lucene/search/FieldComparatorSource.h"
#include "org/apache/lucene/search/FieldDoc.h"
#include "org/apache/lucene/search/FieldValueFilter.h"
#include "org/apache/lucene/search/FieldValueHitQueue.h"
#include "org/apache/lucene/search/FieldValueHitQueue$Entry.h"
#include "org/apache/lucene/search/Filter.h"
#include "org/apache/lucene/search/FilterScorer.h"
#include "org/apache/lucene/search/FilteredDocIdSet.h"
#include "org/apache/lucene/search/FilteredDocIdSetIterator.h"
#include "org/apache/lucene/search/FilteredQuery.h"
#include "org/apache/lucene/search/FilteredQuery$FilterStrategy.h"
#include "org/apache/lucene/search/FilteredQuery$RandomAccessFilterStrategy.h"
#include "org/apache/lucene/search/FuzzyQuery.h"
#include "org/apache/lucene/search/FuzzyTermsEnum.h"
#include "org/apache/lucene/search/FuzzyTermsEnum$LevenshteinAutomataAttribute.h"
#include "org/apache/lucene/search/FuzzyTermsEnum$LevenshteinAutomataAttributeImpl.h"
#include "org/apache/lucene/search/IndexSearcher.h"
#include "org/apache/lucene/search/IndexSearcher$LeafSlice.h"
#include "org/apache/lucene/search/LiveFieldValues.h"
#include "org/apache/lucene/search/MatchAllDocsQuery.h"
#include "org/apache/lucene/search/MaxNonCompetitiveBoostAttribute.h"
#include "org/apache/lucene/search/MaxNonCompetitiveBoostAttributeImpl.h"
#include "org/apache/lucene/search/MultiCollector.h"
#include "org/apache/lucene/search/MultiPhraseQuery.h"
#include "org/apache/lucene/search/MultiTermQuery.h"
#include "org/apache/lucene/search/MultiTermQuery$ConstantScoreAutoRewrite.h"
#include "org/apache/lucene/search/MultiTermQuery$RewriteMethod.h"
#include "org/apache/lucene/search/MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite.h"
#include "org/apache/lucene/search/MultiTermQuery$TopTermsScoringBooleanQueryRewrite.h"
#include "org/apache/lucene/search/MultiTermQueryWrapperFilter.h"
#include "org/apache/lucene/search/NGramPhraseQuery.h"
#include "org/apache/lucene/search/NumericRangeFilter.h"
#include "org/apache/lucene/search/NumericRangeQuery.h"
#include "org/apache/lucene/search/PhraseQuery.h"
#include "org/apache/lucene/search/PositiveScoresOnlyCollector.h"
#include "org/apache/lucene/search/PrefixFilter.h"
#include "org/apache/lucene/search/PrefixQuery.h"
#include "org/apache/lucene/search/PrefixTermsEnum.h"
#include "org/apache/lucene/search/Query.h"
#include "org/apache/lucene/search/QueryRescorer.h"
#include "org/apache/lucene/search/QueryWrapperFilter.h"
#include "org/apache/lucene/search/ReferenceManager.h"
#include "org/apache/lucene/search/ReferenceManager$RefreshListener.h"
#include "org/apache/lucene/search/RegexpQuery.h"
#include "org/apache/lucene/search/Rescorer.h"
#include "org/apache/lucene/search/ScoreCachingWrappingScorer.h"
#include "org/apache/lucene/search/ScoreDoc.h"
#include "org/apache/lucene/search/Scorer.h"
#include "org/apache/lucene/search/Scorer$ChildScorer.h"
#include "org/apache/lucene/search/ScoringRewrite.h"
#include "org/apache/lucene/search/SearcherFactory.h"
#include "org/apache/lucene/search/SearcherLifetimeManager.h"
#include "org/apache/lucene/search/SearcherLifetimeManager$PruneByAge.h"
#include "org/apache/lucene/search/SearcherLifetimeManager$Pruner.h"
#include "org/apache/lucene/search/SearcherManager.h"
#include "org/apache/lucene/search/Sort.h"
#include "org/apache/lucene/search/SortField.h"
#include "org/apache/lucene/search/SortField$Type.h"
#include "org/apache/lucene/search/SortRescorer.h"
#include "org/apache/lucene/search/SortedNumericSelector.h"
#include "org/apache/lucene/search/SortedNumericSelector$Type.h"
#include "org/apache/lucene/search/SortedNumericSortField.h"
#include "org/apache/lucene/search/TermCollectingRewrite.h"
#include "org/apache/lucene/search/TermQuery.h"
#include "org/apache/lucene/search/TermRangeFilter.h"
#include "org/apache/lucene/search/TermRangeQuery.h"
#include "org/apache/lucene/search/TermRangeTermsEnum.h"
#include "org/apache/lucene/search/TermStatistics.h"
#include "org/apache/lucene/search/TimeLimitingCollector.h"
#include "org/apache/lucene/search/TimeLimitingCollector$TimeExceededException.h"
#include "org/apache/lucene/search/TimeLimitingCollector$TimerThread.h"
#include "org/apache/lucene/search/TopDocs.h"
#include "org/apache/lucene/search/TopDocsCollector.h"
#include "org/apache/lucene/search/TopFieldCollector.h"
#include "org/apache/lucene/search/TopFieldDocs.h"
#include "org/apache/lucene/search/TopScoreDocCollector.h"
#include "org/apache/lucene/search/TopTermsRewrite.h"
#include "org/apache/lucene/search/TotalHitCountCollector.h"
#include "org/apache/lucene/search/Weight.h"
#include "org/apache/lucene/search/WildcardQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        namespace grouping {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace highlight {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace join {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace payloads {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace postingshighlight {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace similarities {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace spans {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace spell {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace suggest {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace vectorhighlight {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "search");

          t_AutomatonQuery::install(module);
          t_BitsFilteredDocIdSet::install(module);
          t_BooleanClause::install(module);
          t_BooleanClause$Occur::install(module);
          t_BooleanQuery::install(module);
          t_BooleanQuery$TooManyClauses::install(module);
          t_BoostAttribute::install(module);
          t_BoostAttributeImpl::install(module);
          t_BulkScorer::install(module);
          t_CachingCollector::install(module);
          t_CachingWrapperFilter::install(module);
          t_CollectionStatistics::install(module);
          t_CollectionTerminatedException::install(module);
          t_Collector::install(module);
          t_ComplexExplanation::install(module);
          t_ConstantScoreAutoRewrite::install(module);
          t_ConstantScoreQuery::install(module);
          t_ControlledRealTimeReopenThread::install(module);
          t_DisjunctionMaxQuery::install(module);
          t_DocIdSet::install(module);
          t_DocIdSetIterator::install(module);
          t_DocTermOrdsRangeFilter::install(module);
          t_DocTermOrdsRewriteMethod::install(module);
          t_Explanation::install(module);
          t_FieldCache::install(module);
          t_FieldCache$ByteParser::install(module);
          t_FieldCache$Bytes::install(module);
          t_FieldCache$CacheEntry::install(module);
          t_FieldCache$CreationPlaceholder::install(module);
          t_FieldCache$DoubleParser::install(module);
          t_FieldCache$Doubles::install(module);
          t_FieldCache$FloatParser::install(module);
          t_FieldCache$Floats::install(module);
          t_FieldCache$IntParser::install(module);
          t_FieldCache$Ints::install(module);
          t_FieldCache$LongParser::install(module);
          t_FieldCache$Longs::install(module);
          t_FieldCache$Parser::install(module);
          t_FieldCache$ShortParser::install(module);
          t_FieldCache$Shorts::install(module);
          t_FieldCacheDocIdSet::install(module);
          t_FieldCacheImpl$SortedDocValuesImpl::install(module);
          t_FieldCacheRangeFilter::install(module);
          t_FieldCacheRewriteMethod::install(module);
          t_FieldCacheTermsFilter::install(module);
          t_FieldComparator::install(module);
          t_FieldComparator$ByteComparator::install(module);
          t_FieldComparator$DocComparator::install(module);
          t_FieldComparator$DoubleComparator::install(module);
          t_FieldComparator$FloatComparator::install(module);
          t_FieldComparator$IntComparator::install(module);
          t_FieldComparator$LongComparator::install(module);
          t_FieldComparator$NumericComparator::install(module);
          t_FieldComparator$RelevanceComparator::install(module);
          t_FieldComparator$ShortComparator::install(module);
          t_FieldComparator$TermOrdValComparator::install(module);
          t_FieldComparator$TermValComparator::install(module);
          t_FieldComparatorSource::install(module);
          t_FieldDoc::install(module);
          t_FieldValueFilter::install(module);
          t_FieldValueHitQueue::install(module);
          t_FieldValueHitQueue$Entry::install(module);
          t_Filter::install(module);
          t_FilterScorer::install(module);
          t_FilteredDocIdSet::install(module);
          t_FilteredDocIdSetIterator::install(module);
          t_FilteredQuery::install(module);
          t_FilteredQuery$FilterStrategy::install(module);
          t_FilteredQuery$RandomAccessFilterStrategy::install(module);
          t_FuzzyQuery::install(module);
          t_FuzzyTermsEnum::install(module);
          t_FuzzyTermsEnum$LevenshteinAutomataAttribute::install(module);
          t_FuzzyTermsEnum$LevenshteinAutomataAttributeImpl::install(module);
          t_IndexSearcher::install(module);
          t_IndexSearcher$LeafSlice::install(module);
          t_LiveFieldValues::install(module);
          t_MatchAllDocsQuery::install(module);
          t_MaxNonCompetitiveBoostAttribute::install(module);
          t_MaxNonCompetitiveBoostAttributeImpl::install(module);
          t_MultiCollector::install(module);
          t_MultiPhraseQuery::install(module);
          t_MultiTermQuery::install(module);
          t_MultiTermQuery$ConstantScoreAutoRewrite::install(module);
          t_MultiTermQuery$RewriteMethod::install(module);
          t_MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite::install(module);
          t_MultiTermQuery$TopTermsScoringBooleanQueryRewrite::install(module);
          t_MultiTermQueryWrapperFilter::install(module);
          t_NGramPhraseQuery::install(module);
          t_NumericRangeFilter::install(module);
          t_NumericRangeQuery::install(module);
          t_PhraseQuery::install(module);
          t_PositiveScoresOnlyCollector::install(module);
          t_PrefixFilter::install(module);
          t_PrefixQuery::install(module);
          t_PrefixTermsEnum::install(module);
          t_Query::install(module);
          t_QueryRescorer::install(module);
          t_QueryWrapperFilter::install(module);
          t_ReferenceManager::install(module);
          t_ReferenceManager$RefreshListener::install(module);
          t_RegexpQuery::install(module);
          t_Rescorer::install(module);
          t_ScoreCachingWrappingScorer::install(module);
          t_ScoreDoc::install(module);
          t_Scorer::install(module);
          t_Scorer$ChildScorer::install(module);
          t_ScoringRewrite::install(module);
          t_SearcherFactory::install(module);
          t_SearcherLifetimeManager::install(module);
          t_SearcherLifetimeManager$PruneByAge::install(module);
          t_SearcherLifetimeManager$Pruner::install(module);
          t_SearcherManager::install(module);
          t_Sort::install(module);
          t_SortField::install(module);
          t_SortField$Type::install(module);
          t_SortRescorer::install(module);
          t_SortedNumericSelector::install(module);
          t_SortedNumericSelector$Type::install(module);
          t_SortedNumericSortField::install(module);
          t_TermCollectingRewrite::install(module);
          t_TermQuery::install(module);
          t_TermRangeFilter::install(module);
          t_TermRangeQuery::install(module);
          t_TermRangeTermsEnum::install(module);
          t_TermStatistics::install(module);
          t_TimeLimitingCollector::install(module);
          t_TimeLimitingCollector$TimeExceededException::install(module);
          t_TimeLimitingCollector$TimerThread::install(module);
          t_TopDocs::install(module);
          t_TopDocsCollector::install(module);
          t_TopFieldCollector::install(module);
          t_TopFieldDocs::install(module);
          t_TopScoreDocCollector::install(module);
          t_TopTermsRewrite::install(module);
          t_TotalHitCountCollector::install(module);
          t_Weight::install(module);
          t_WildcardQuery::install(module);
          grouping::__install__(module);
          highlight::__install__(module);
          join::__install__(module);
          payloads::__install__(module);
          postingshighlight::__install__(module);
          similarities::__install__(module);
          spans::__install__(module);
          spell::__install__(module);
          suggest::__install__(module);
          vectorhighlight::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "search");

          t_AutomatonQuery::initialize(module);
          t_BitsFilteredDocIdSet::initialize(module);
          t_BooleanClause::initialize(module);
          t_BooleanClause$Occur::initialize(module);
          t_BooleanQuery::initialize(module);
          t_BooleanQuery$TooManyClauses::initialize(module);
          t_BoostAttribute::initialize(module);
          t_BoostAttributeImpl::initialize(module);
          t_BulkScorer::initialize(module);
          t_CachingCollector::initialize(module);
          t_CachingWrapperFilter::initialize(module);
          t_CollectionStatistics::initialize(module);
          t_CollectionTerminatedException::initialize(module);
          t_Collector::initialize(module);
          t_ComplexExplanation::initialize(module);
          t_ConstantScoreAutoRewrite::initialize(module);
          t_ConstantScoreQuery::initialize(module);
          t_ControlledRealTimeReopenThread::initialize(module);
          t_DisjunctionMaxQuery::initialize(module);
          t_DocIdSet::initialize(module);
          t_DocIdSetIterator::initialize(module);
          t_DocTermOrdsRangeFilter::initialize(module);
          t_DocTermOrdsRewriteMethod::initialize(module);
          t_Explanation::initialize(module);
          t_FieldCache::initialize(module);
          t_FieldCache$ByteParser::initialize(module);
          t_FieldCache$Bytes::initialize(module);
          t_FieldCache$CacheEntry::initialize(module);
          t_FieldCache$CreationPlaceholder::initialize(module);
          t_FieldCache$DoubleParser::initialize(module);
          t_FieldCache$Doubles::initialize(module);
          t_FieldCache$FloatParser::initialize(module);
          t_FieldCache$Floats::initialize(module);
          t_FieldCache$IntParser::initialize(module);
          t_FieldCache$Ints::initialize(module);
          t_FieldCache$LongParser::initialize(module);
          t_FieldCache$Longs::initialize(module);
          t_FieldCache$Parser::initialize(module);
          t_FieldCache$ShortParser::initialize(module);
          t_FieldCache$Shorts::initialize(module);
          t_FieldCacheDocIdSet::initialize(module);
          t_FieldCacheImpl$SortedDocValuesImpl::initialize(module);
          t_FieldCacheRangeFilter::initialize(module);
          t_FieldCacheRewriteMethod::initialize(module);
          t_FieldCacheTermsFilter::initialize(module);
          t_FieldComparator::initialize(module);
          t_FieldComparator$ByteComparator::initialize(module);
          t_FieldComparator$DocComparator::initialize(module);
          t_FieldComparator$DoubleComparator::initialize(module);
          t_FieldComparator$FloatComparator::initialize(module);
          t_FieldComparator$IntComparator::initialize(module);
          t_FieldComparator$LongComparator::initialize(module);
          t_FieldComparator$NumericComparator::initialize(module);
          t_FieldComparator$RelevanceComparator::initialize(module);
          t_FieldComparator$ShortComparator::initialize(module);
          t_FieldComparator$TermOrdValComparator::initialize(module);
          t_FieldComparator$TermValComparator::initialize(module);
          t_FieldComparatorSource::initialize(module);
          t_FieldDoc::initialize(module);
          t_FieldValueFilter::initialize(module);
          t_FieldValueHitQueue::initialize(module);
          t_FieldValueHitQueue$Entry::initialize(module);
          t_Filter::initialize(module);
          t_FilterScorer::initialize(module);
          t_FilteredDocIdSet::initialize(module);
          t_FilteredDocIdSetIterator::initialize(module);
          t_FilteredQuery::initialize(module);
          t_FilteredQuery$FilterStrategy::initialize(module);
          t_FilteredQuery$RandomAccessFilterStrategy::initialize(module);
          t_FuzzyQuery::initialize(module);
          t_FuzzyTermsEnum::initialize(module);
          t_FuzzyTermsEnum$LevenshteinAutomataAttribute::initialize(module);
          t_FuzzyTermsEnum$LevenshteinAutomataAttributeImpl::initialize(module);
          t_IndexSearcher::initialize(module);
          t_IndexSearcher$LeafSlice::initialize(module);
          t_LiveFieldValues::initialize(module);
          t_MatchAllDocsQuery::initialize(module);
          t_MaxNonCompetitiveBoostAttribute::initialize(module);
          t_MaxNonCompetitiveBoostAttributeImpl::initialize(module);
          t_MultiCollector::initialize(module);
          t_MultiPhraseQuery::initialize(module);
          t_MultiTermQuery::initialize(module);
          t_MultiTermQuery$ConstantScoreAutoRewrite::initialize(module);
          t_MultiTermQuery$RewriteMethod::initialize(module);
          t_MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite::initialize(module);
          t_MultiTermQuery$TopTermsScoringBooleanQueryRewrite::initialize(module);
          t_MultiTermQueryWrapperFilter::initialize(module);
          t_NGramPhraseQuery::initialize(module);
          t_NumericRangeFilter::initialize(module);
          t_NumericRangeQuery::initialize(module);
          t_PhraseQuery::initialize(module);
          t_PositiveScoresOnlyCollector::initialize(module);
          t_PrefixFilter::initialize(module);
          t_PrefixQuery::initialize(module);
          t_PrefixTermsEnum::initialize(module);
          t_Query::initialize(module);
          t_QueryRescorer::initialize(module);
          t_QueryWrapperFilter::initialize(module);
          t_ReferenceManager::initialize(module);
          t_ReferenceManager$RefreshListener::initialize(module);
          t_RegexpQuery::initialize(module);
          t_Rescorer::initialize(module);
          t_ScoreCachingWrappingScorer::initialize(module);
          t_ScoreDoc::initialize(module);
          t_Scorer::initialize(module);
          t_Scorer$ChildScorer::initialize(module);
          t_ScoringRewrite::initialize(module);
          t_SearcherFactory::initialize(module);
          t_SearcherLifetimeManager::initialize(module);
          t_SearcherLifetimeManager$PruneByAge::initialize(module);
          t_SearcherLifetimeManager$Pruner::initialize(module);
          t_SearcherManager::initialize(module);
          t_Sort::initialize(module);
          t_SortField::initialize(module);
          t_SortField$Type::initialize(module);
          t_SortRescorer::initialize(module);
          t_SortedNumericSelector::initialize(module);
          t_SortedNumericSelector$Type::initialize(module);
          t_SortedNumericSortField::initialize(module);
          t_TermCollectingRewrite::initialize(module);
          t_TermQuery::initialize(module);
          t_TermRangeFilter::initialize(module);
          t_TermRangeQuery::initialize(module);
          t_TermRangeTermsEnum::initialize(module);
          t_TermStatistics::initialize(module);
          t_TimeLimitingCollector::initialize(module);
          t_TimeLimitingCollector$TimeExceededException::initialize(module);
          t_TimeLimitingCollector$TimerThread::initialize(module);
          t_TopDocs::initialize(module);
          t_TopDocsCollector::initialize(module);
          t_TopFieldCollector::initialize(module);
          t_TopFieldDocs::initialize(module);
          t_TopScoreDocCollector::initialize(module);
          t_TopTermsRewrite::initialize(module);
          t_TotalHitCountCollector::initialize(module);
          t_Weight::initialize(module);
          t_WildcardQuery::initialize(module);
          grouping::__initialize__(module);
          highlight::__initialize__(module);
          join::__initialize__(module);
          payloads::__initialize__(module);
          postingshighlight::__initialize__(module);
          similarities::__initialize__(module);
          spans::__initialize__(module);
          spell::__initialize__(module);
          suggest::__initialize__(module);
          vectorhighlight::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/search/grouping/AbstractAllGroupHeadsCollector.h"
#include "org/apache/lucene/search/grouping/AbstractAllGroupHeadsCollector$GroupHead.h"
#include "org/apache/lucene/search/grouping/AbstractAllGroupsCollector.h"
#include "org/apache/lucene/search/grouping/AbstractDistinctValuesCollector.h"
#include "org/apache/lucene/search/grouping/AbstractDistinctValuesCollector$GroupCount.h"
#include "org/apache/lucene/search/grouping/AbstractFirstPassGroupingCollector.h"
#include "org/apache/lucene/search/grouping/AbstractGroupFacetCollector.h"
#include "org/apache/lucene/search/grouping/AbstractGroupFacetCollector$FacetEntry.h"
#include "org/apache/lucene/search/grouping/AbstractGroupFacetCollector$GroupedFacetResult.h"
#include "org/apache/lucene/search/grouping/AbstractSecondPassGroupingCollector.h"
#include "org/apache/lucene/search/grouping/AbstractSecondPassGroupingCollector$SearchGroupDocs.h"
#include "org/apache/lucene/search/grouping/BlockGroupingCollector.h"
#include "org/apache/lucene/search/grouping/CollectedSearchGroup.h"
#include "org/apache/lucene/search/grouping/GroupDocs.h"
#include "org/apache/lucene/search/grouping/GroupingSearch.h"
#include "org/apache/lucene/search/grouping/SearchGroup.h"
#include "org/apache/lucene/search/grouping/TopGroups.h"
#include "org/apache/lucene/search/grouping/TopGroups$ScoreMergeMode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          namespace function {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace term {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "grouping");

            t_AbstractAllGroupHeadsCollector::install(module);
            t_AbstractAllGroupHeadsCollector$GroupHead::install(module);
            t_AbstractAllGroupsCollector::install(module);
            t_AbstractDistinctValuesCollector::install(module);
            t_AbstractDistinctValuesCollector$GroupCount::install(module);
            t_AbstractFirstPassGroupingCollector::install(module);
            t_AbstractGroupFacetCollector::install(module);
            t_AbstractGroupFacetCollector$FacetEntry::install(module);
            t_AbstractGroupFacetCollector$GroupedFacetResult::install(module);
            t_AbstractSecondPassGroupingCollector::install(module);
            t_AbstractSecondPassGroupingCollector$SearchGroupDocs::install(module);
            t_BlockGroupingCollector::install(module);
            t_CollectedSearchGroup::install(module);
            t_GroupDocs::install(module);
            t_GroupingSearch::install(module);
            t_SearchGroup::install(module);
            t_TopGroups::install(module);
            t_TopGroups$ScoreMergeMode::install(module);
            function::__install__(module);
            term::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "grouping");

            t_AbstractAllGroupHeadsCollector::initialize(module);
            t_AbstractAllGroupHeadsCollector$GroupHead::initialize(module);
            t_AbstractAllGroupsCollector::initialize(module);
            t_AbstractDistinctValuesCollector::initialize(module);
            t_AbstractDistinctValuesCollector$GroupCount::initialize(module);
            t_AbstractFirstPassGroupingCollector::initialize(module);
            t_AbstractGroupFacetCollector::initialize(module);
            t_AbstractGroupFacetCollector$FacetEntry::initialize(module);
            t_AbstractGroupFacetCollector$GroupedFacetResult::initialize(module);
            t_AbstractSecondPassGroupingCollector::initialize(module);
            t_AbstractSecondPassGroupingCollector$SearchGroupDocs::initialize(module);
            t_BlockGroupingCollector::initialize(module);
            t_CollectedSearchGroup::initialize(module);
            t_GroupDocs::initialize(module);
            t_GroupingSearch::initialize(module);
            t_SearchGroup::initialize(module);
            t_TopGroups::initialize(module);
            t_TopGroups$ScoreMergeMode::initialize(module);
            function::__initialize__(module);
            term::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/grouping/function/FunctionAllGroupHeadsCollector.h"
#include "org/apache/lucene/search/grouping/function/FunctionAllGroupHeadsCollector$GroupHead.h"
#include "org/apache/lucene/search/grouping/function/FunctionAllGroupsCollector.h"
#include "org/apache/lucene/search/grouping/function/FunctionDistinctValuesCollector.h"
#include "org/apache/lucene/search/grouping/function/FunctionDistinctValuesCollector$GroupCount.h"
#include "org/apache/lucene/search/grouping/function/FunctionFirstPassGroupingCollector.h"
#include "org/apache/lucene/search/grouping/function/FunctionSecondPassGroupingCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          namespace function {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.grouping", "function");

              t_FunctionAllGroupHeadsCollector::install(module);
              t_FunctionAllGroupHeadsCollector$GroupHead::install(module);
              t_FunctionAllGroupsCollector::install(module);
              t_FunctionDistinctValuesCollector::install(module);
              t_FunctionDistinctValuesCollector$GroupCount::install(module);
              t_FunctionFirstPassGroupingCollector::install(module);
              t_FunctionSecondPassGroupingCollector::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.grouping", "function");

              t_FunctionAllGroupHeadsCollector::initialize(module);
              t_FunctionAllGroupHeadsCollector$GroupHead::initialize(module);
              t_FunctionAllGroupsCollector::initialize(module);
              t_FunctionDistinctValuesCollector::initialize(module);
              t_FunctionDistinctValuesCollector$GroupCount::initialize(module);
              t_FunctionFirstPassGroupingCollector::initialize(module);
              t_FunctionSecondPassGroupingCollector::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/grouping/term/TermAllGroupHeadsCollector.h"
#include "org/apache/lucene/search/grouping/term/TermAllGroupsCollector.h"
#include "org/apache/lucene/search/grouping/term/TermDistinctValuesCollector.h"
#include "org/apache/lucene/search/grouping/term/TermDistinctValuesCollector$GroupCount.h"
#include "org/apache/lucene/search/grouping/term/TermFirstPassGroupingCollector.h"
#include "org/apache/lucene/search/grouping/term/TermGroupFacetCollector.h"
#include "org/apache/lucene/search/grouping/term/TermSecondPassGroupingCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          namespace term {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.grouping", "term");

              t_TermAllGroupHeadsCollector::install(module);
              t_TermAllGroupsCollector::install(module);
              t_TermDistinctValuesCollector::install(module);
              t_TermDistinctValuesCollector$GroupCount::install(module);
              t_TermFirstPassGroupingCollector::install(module);
              t_TermGroupFacetCollector::install(module);
              t_TermSecondPassGroupingCollector::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.grouping", "term");

              t_TermAllGroupHeadsCollector::initialize(module);
              t_TermAllGroupsCollector::initialize(module);
              t_TermDistinctValuesCollector::initialize(module);
              t_TermDistinctValuesCollector$GroupCount::initialize(module);
              t_TermFirstPassGroupingCollector::initialize(module);
              t_TermGroupFacetCollector::initialize(module);
              t_TermSecondPassGroupingCollector::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/highlight/DefaultEncoder.h"
#include "org/apache/lucene/search/highlight/Encoder.h"
#include "org/apache/lucene/search/highlight/Formatter.h"
#include "org/apache/lucene/search/highlight/Fragmenter.h"
#include "org/apache/lucene/search/highlight/GradientFormatter.h"
#include "org/apache/lucene/search/highlight/Highlighter.h"
#include "org/apache/lucene/search/highlight/InvalidTokenOffsetsException.h"
#include "org/apache/lucene/search/highlight/NullFragmenter.h"
#include "org/apache/lucene/search/highlight/OffsetLimitTokenFilter.h"
#include "org/apache/lucene/search/highlight/PositionSpan.h"
#include "org/apache/lucene/search/highlight/QueryScorer.h"
#include "org/apache/lucene/search/highlight/QueryTermExtractor.h"
#include "org/apache/lucene/search/highlight/QueryTermScorer.h"
#include "org/apache/lucene/search/highlight/Scorer.h"
#include "org/apache/lucene/search/highlight/SimpleFragmenter.h"
#include "org/apache/lucene/search/highlight/SimpleHTMLEncoder.h"
#include "org/apache/lucene/search/highlight/SimpleHTMLFormatter.h"
#include "org/apache/lucene/search/highlight/SimpleSpanFragmenter.h"
#include "org/apache/lucene/search/highlight/SpanGradientFormatter.h"
#include "org/apache/lucene/search/highlight/TextFragment.h"
#include "org/apache/lucene/search/highlight/TokenGroup.h"
#include "org/apache/lucene/search/highlight/TokenSources.h"
#include "org/apache/lucene/search/highlight/TokenStreamFromTermPositionVector.h"
#include "org/apache/lucene/search/highlight/WeightedSpanTerm.h"
#include "org/apache/lucene/search/highlight/WeightedSpanTermExtractor.h"
#include "org/apache/lucene/search/highlight/WeightedTerm.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "highlight");

            t_DefaultEncoder::install(module);
            t_Encoder::install(module);
            t_Formatter::install(module);
            t_Fragmenter::install(module);
            t_GradientFormatter::install(module);
            t_Highlighter::install(module);
            t_InvalidTokenOffsetsException::install(module);
            t_NullFragmenter::install(module);
            t_OffsetLimitTokenFilter::install(module);
            t_PositionSpan::install(module);
            t_QueryScorer::install(module);
            t_QueryTermExtractor::install(module);
            t_QueryTermScorer::install(module);
            t_Scorer::install(module);
            t_SimpleFragmenter::install(module);
            t_SimpleHTMLEncoder::install(module);
            t_SimpleHTMLFormatter::install(module);
            t_SimpleSpanFragmenter::install(module);
            t_SpanGradientFormatter::install(module);
            t_TextFragment::install(module);
            t_TokenGroup::install(module);
            t_TokenSources::install(module);
            t_TokenStreamFromTermPositionVector::install(module);
            t_WeightedSpanTerm::install(module);
            t_WeightedSpanTermExtractor::install(module);
            t_WeightedTerm::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "highlight");

            t_DefaultEncoder::initialize(module);
            t_Encoder::initialize(module);
            t_Formatter::initialize(module);
            t_Fragmenter::initialize(module);
            t_GradientFormatter::initialize(module);
            t_Highlighter::initialize(module);
            t_InvalidTokenOffsetsException::initialize(module);
            t_NullFragmenter::initialize(module);
            t_OffsetLimitTokenFilter::initialize(module);
            t_PositionSpan::initialize(module);
            t_QueryScorer::initialize(module);
            t_QueryTermExtractor::initialize(module);
            t_QueryTermScorer::initialize(module);
            t_Scorer::initialize(module);
            t_SimpleFragmenter::initialize(module);
            t_SimpleHTMLEncoder::initialize(module);
            t_SimpleHTMLFormatter::initialize(module);
            t_SimpleSpanFragmenter::initialize(module);
            t_SpanGradientFormatter::initialize(module);
            t_TextFragment::initialize(module);
            t_TokenGroup::initialize(module);
            t_TokenSources::initialize(module);
            t_TokenStreamFromTermPositionVector::initialize(module);
            t_WeightedSpanTerm::initialize(module);
            t_WeightedSpanTermExtractor::initialize(module);
            t_WeightedTerm::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/join/FixedBitSetCachingWrapperFilter.h"
#include "org/apache/lucene/search/join/JoinUtil.h"
#include "org/apache/lucene/search/join/ScoreMode.h"
#include "org/apache/lucene/search/join/ToChildBlockJoinQuery.h"
#include "org/apache/lucene/search/join/ToParentBlockJoinCollector.h"
#include "org/apache/lucene/search/join/ToParentBlockJoinFieldComparator.h"
#include "org/apache/lucene/search/join/ToParentBlockJoinFieldComparator$Highest.h"
#include "org/apache/lucene/search/join/ToParentBlockJoinFieldComparator$Lowest.h"
#include "org/apache/lucene/search/join/ToParentBlockJoinQuery.h"
#include "org/apache/lucene/search/join/ToParentBlockJoinSortField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "join");

            t_FixedBitSetCachingWrapperFilter::install(module);
            t_JoinUtil::install(module);
            t_ScoreMode::install(module);
            t_ToChildBlockJoinQuery::install(module);
            t_ToParentBlockJoinCollector::install(module);
            t_ToParentBlockJoinFieldComparator::install(module);
            t_ToParentBlockJoinFieldComparator$Highest::install(module);
            t_ToParentBlockJoinFieldComparator$Lowest::install(module);
            t_ToParentBlockJoinQuery::install(module);
            t_ToParentBlockJoinSortField::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "join");

            t_FixedBitSetCachingWrapperFilter::initialize(module);
            t_JoinUtil::initialize(module);
            t_ScoreMode::initialize(module);
            t_ToChildBlockJoinQuery::initialize(module);
            t_ToParentBlockJoinCollector::initialize(module);
            t_ToParentBlockJoinFieldComparator::initialize(module);
            t_ToParentBlockJoinFieldComparator$Highest::initialize(module);
            t_ToParentBlockJoinFieldComparator$Lowest::initialize(module);
            t_ToParentBlockJoinQuery::initialize(module);
            t_ToParentBlockJoinSortField::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/payloads/AveragePayloadFunction.h"
#include "org/apache/lucene/search/payloads/MaxPayloadFunction.h"
#include "org/apache/lucene/search/payloads/MinPayloadFunction.h"
#include "org/apache/lucene/search/payloads/PayloadFunction.h"
#include "org/apache/lucene/search/payloads/PayloadNearQuery.h"
#include "org/apache/lucene/search/payloads/PayloadNearQuery$PayloadNearSpanScorer.h"
#include "org/apache/lucene/search/payloads/PayloadNearQuery$PayloadNearSpanWeight.h"
#include "org/apache/lucene/search/payloads/PayloadSpanUtil.h"
#include "org/apache/lucene/search/payloads/PayloadTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace payloads {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "payloads");

            t_AveragePayloadFunction::install(module);
            t_MaxPayloadFunction::install(module);
            t_MinPayloadFunction::install(module);
            t_PayloadFunction::install(module);
            t_PayloadNearQuery::install(module);
            t_PayloadNearQuery$PayloadNearSpanScorer::install(module);
            t_PayloadNearQuery$PayloadNearSpanWeight::install(module);
            t_PayloadSpanUtil::install(module);
            t_PayloadTermQuery::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "payloads");

            t_AveragePayloadFunction::initialize(module);
            t_MaxPayloadFunction::initialize(module);
            t_MinPayloadFunction::initialize(module);
            t_PayloadFunction::initialize(module);
            t_PayloadNearQuery::initialize(module);
            t_PayloadNearQuery$PayloadNearSpanScorer::initialize(module);
            t_PayloadNearQuery$PayloadNearSpanWeight::initialize(module);
            t_PayloadSpanUtil::initialize(module);
            t_PayloadTermQuery::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/postingshighlight/DefaultPassageFormatter.h"
#include "org/apache/lucene/search/postingshighlight/Passage.h"
#include "org/apache/lucene/search/postingshighlight/PassageFormatter.h"
#include "org/apache/lucene/search/postingshighlight/PassageScorer.h"
#include "org/apache/lucene/search/postingshighlight/PostingsHighlighter.h"
#include "org/apache/lucene/search/postingshighlight/WholeBreakIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace postingshighlight {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "postingshighlight");

            t_DefaultPassageFormatter::install(module);
            t_Passage::install(module);
            t_PassageFormatter::install(module);
            t_PassageScorer::install(module);
            t_PostingsHighlighter::install(module);
            t_WholeBreakIterator::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "postingshighlight");

            t_DefaultPassageFormatter::initialize(module);
            t_Passage::initialize(module);
            t_PassageFormatter::initialize(module);
            t_PassageScorer::initialize(module);
            t_PostingsHighlighter::initialize(module);
            t_WholeBreakIterator::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/similarities/AfterEffect.h"
#include "org/apache/lucene/search/similarities/AfterEffect$NoAfterEffect.h"
#include "org/apache/lucene/search/similarities/AfterEffectB.h"
#include "org/apache/lucene/search/similarities/AfterEffectL.h"
#include "org/apache/lucene/search/similarities/BM25Similarity.h"
#include "org/apache/lucene/search/similarities/BasicModel.h"
#include "org/apache/lucene/search/similarities/BasicModelBE.h"
#include "org/apache/lucene/search/similarities/BasicModelD.h"
#include "org/apache/lucene/search/similarities/BasicModelG.h"
#include "org/apache/lucene/search/similarities/BasicModelIF.h"
#include "org/apache/lucene/search/similarities/BasicModelIn.h"
#include "org/apache/lucene/search/similarities/BasicModelIne.h"
#include "org/apache/lucene/search/similarities/BasicModelP.h"
#include "org/apache/lucene/search/similarities/BasicStats.h"
#include "org/apache/lucene/search/similarities/DFRSimilarity.h"
#include "org/apache/lucene/search/similarities/DefaultSimilarity.h"
#include "org/apache/lucene/search/similarities/Distribution.h"
#include "org/apache/lucene/search/similarities/DistributionLL.h"
#include "org/apache/lucene/search/similarities/DistributionSPL.h"
#include "org/apache/lucene/search/similarities/IBSimilarity.h"
#include "org/apache/lucene/search/similarities/LMDirichletSimilarity.h"
#include "org/apache/lucene/search/similarities/LMJelinekMercerSimilarity.h"
#include "org/apache/lucene/search/similarities/LMSimilarity.h"
#include "org/apache/lucene/search/similarities/LMSimilarity$CollectionModel.h"
#include "org/apache/lucene/search/similarities/LMSimilarity$DefaultCollectionModel.h"
#include "org/apache/lucene/search/similarities/LMSimilarity$LMStats.h"
#include "org/apache/lucene/search/similarities/Lambda.h"
#include "org/apache/lucene/search/similarities/LambdaDF.h"
#include "org/apache/lucene/search/similarities/LambdaTTF.h"
#include "org/apache/lucene/search/similarities/MultiSimilarity.h"
#include "org/apache/lucene/search/similarities/Normalization.h"
#include "org/apache/lucene/search/similarities/Normalization$NoNormalization.h"
#include "org/apache/lucene/search/similarities/NormalizationH1.h"
#include "org/apache/lucene/search/similarities/NormalizationH2.h"
#include "org/apache/lucene/search/similarities/NormalizationH3.h"
#include "org/apache/lucene/search/similarities/NormalizationZ.h"
#include "org/apache/lucene/search/similarities/PerFieldSimilarityWrapper.h"
#include "org/apache/lucene/search/similarities/Similarity.h"
#include "org/apache/lucene/search/similarities/Similarity$SimScorer.h"
#include "org/apache/lucene/search/similarities/Similarity$SimWeight.h"
#include "org/apache/lucene/search/similarities/SimilarityBase.h"
#include "org/apache/lucene/search/similarities/TFIDFSimilarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "similarities");

            t_AfterEffect::install(module);
            t_AfterEffect$NoAfterEffect::install(module);
            t_AfterEffectB::install(module);
            t_AfterEffectL::install(module);
            t_BM25Similarity::install(module);
            t_BasicModel::install(module);
            t_BasicModelBE::install(module);
            t_BasicModelD::install(module);
            t_BasicModelG::install(module);
            t_BasicModelIF::install(module);
            t_BasicModelIn::install(module);
            t_BasicModelIne::install(module);
            t_BasicModelP::install(module);
            t_BasicStats::install(module);
            t_DFRSimilarity::install(module);
            t_DefaultSimilarity::install(module);
            t_Distribution::install(module);
            t_DistributionLL::install(module);
            t_DistributionSPL::install(module);
            t_IBSimilarity::install(module);
            t_LMDirichletSimilarity::install(module);
            t_LMJelinekMercerSimilarity::install(module);
            t_LMSimilarity::install(module);
            t_LMSimilarity$CollectionModel::install(module);
            t_LMSimilarity$DefaultCollectionModel::install(module);
            t_LMSimilarity$LMStats::install(module);
            t_Lambda::install(module);
            t_LambdaDF::install(module);
            t_LambdaTTF::install(module);
            t_MultiSimilarity::install(module);
            t_Normalization::install(module);
            t_Normalization$NoNormalization::install(module);
            t_NormalizationH1::install(module);
            t_NormalizationH2::install(module);
            t_NormalizationH3::install(module);
            t_NormalizationZ::install(module);
            t_PerFieldSimilarityWrapper::install(module);
            t_Similarity::install(module);
            t_Similarity$SimScorer::install(module);
            t_Similarity$SimWeight::install(module);
            t_SimilarityBase::install(module);
            t_TFIDFSimilarity::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "similarities");

            t_AfterEffect::initialize(module);
            t_AfterEffect$NoAfterEffect::initialize(module);
            t_AfterEffectB::initialize(module);
            t_AfterEffectL::initialize(module);
            t_BM25Similarity::initialize(module);
            t_BasicModel::initialize(module);
            t_BasicModelBE::initialize(module);
            t_BasicModelD::initialize(module);
            t_BasicModelG::initialize(module);
            t_BasicModelIF::initialize(module);
            t_BasicModelIn::initialize(module);
            t_BasicModelIne::initialize(module);
            t_BasicModelP::initialize(module);
            t_BasicStats::initialize(module);
            t_DFRSimilarity::initialize(module);
            t_DefaultSimilarity::initialize(module);
            t_Distribution::initialize(module);
            t_DistributionLL::initialize(module);
            t_DistributionSPL::initialize(module);
            t_IBSimilarity::initialize(module);
            t_LMDirichletSimilarity::initialize(module);
            t_LMJelinekMercerSimilarity::initialize(module);
            t_LMSimilarity::initialize(module);
            t_LMSimilarity$CollectionModel::initialize(module);
            t_LMSimilarity$DefaultCollectionModel::initialize(module);
            t_LMSimilarity$LMStats::initialize(module);
            t_Lambda::initialize(module);
            t_LambdaDF::initialize(module);
            t_LambdaTTF::initialize(module);
            t_MultiSimilarity::initialize(module);
            t_Normalization::initialize(module);
            t_Normalization$NoNormalization::initialize(module);
            t_NormalizationH1::initialize(module);
            t_NormalizationH2::initialize(module);
            t_NormalizationH3::initialize(module);
            t_NormalizationZ::initialize(module);
            t_PerFieldSimilarityWrapper::initialize(module);
            t_Similarity::initialize(module);
            t_Similarity$SimScorer::initialize(module);
            t_Similarity$SimWeight::initialize(module);
            t_SimilarityBase::initialize(module);
            t_TFIDFSimilarity::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/spans/FieldMaskingSpanQuery.h"
#include "org/apache/lucene/search/spans/NearSpansOrdered.h"
#include "org/apache/lucene/search/spans/NearSpansUnordered.h"
#include "org/apache/lucene/search/spans/SpanFirstQuery.h"
#include "org/apache/lucene/search/spans/SpanMultiTermQueryWrapper.h"
#include "org/apache/lucene/search/spans/SpanMultiTermQueryWrapper$SpanRewriteMethod.h"
#include "org/apache/lucene/search/spans/SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite.h"
#include "org/apache/lucene/search/spans/SpanNearPayloadCheckQuery.h"
#include "org/apache/lucene/search/spans/SpanNearQuery.h"
#include "org/apache/lucene/search/spans/SpanNotQuery.h"
#include "org/apache/lucene/search/spans/SpanOrQuery.h"
#include "org/apache/lucene/search/spans/SpanPayloadCheckQuery.h"
#include "org/apache/lucene/search/spans/SpanPositionCheckQuery.h"
#include "org/apache/lucene/search/spans/SpanPositionRangeQuery.h"
#include "org/apache/lucene/search/spans/SpanQuery.h"
#include "org/apache/lucene/search/spans/SpanScorer.h"
#include "org/apache/lucene/search/spans/SpanTermQuery.h"
#include "org/apache/lucene/search/spans/SpanWeight.h"
#include "org/apache/lucene/search/spans/Spans.h"
#include "org/apache/lucene/search/spans/TermSpans.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "spans");

            t_FieldMaskingSpanQuery::install(module);
            t_NearSpansOrdered::install(module);
            t_NearSpansUnordered::install(module);
            t_SpanFirstQuery::install(module);
            t_SpanMultiTermQueryWrapper::install(module);
            t_SpanMultiTermQueryWrapper$SpanRewriteMethod::install(module);
            t_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite::install(module);
            t_SpanNearPayloadCheckQuery::install(module);
            t_SpanNearQuery::install(module);
            t_SpanNotQuery::install(module);
            t_SpanOrQuery::install(module);
            t_SpanPayloadCheckQuery::install(module);
            t_SpanPositionCheckQuery::install(module);
            t_SpanPositionRangeQuery::install(module);
            t_SpanQuery::install(module);
            t_SpanScorer::install(module);
            t_SpanTermQuery::install(module);
            t_SpanWeight::install(module);
            t_Spans::install(module);
            t_TermSpans::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "spans");

            t_FieldMaskingSpanQuery::initialize(module);
            t_NearSpansOrdered::initialize(module);
            t_NearSpansUnordered::initialize(module);
            t_SpanFirstQuery::initialize(module);
            t_SpanMultiTermQueryWrapper::initialize(module);
            t_SpanMultiTermQueryWrapper$SpanRewriteMethod::initialize(module);
            t_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite::initialize(module);
            t_SpanNearPayloadCheckQuery::initialize(module);
            t_SpanNearQuery::initialize(module);
            t_SpanNotQuery::initialize(module);
            t_SpanOrQuery::initialize(module);
            t_SpanPayloadCheckQuery::initialize(module);
            t_SpanPositionCheckQuery::initialize(module);
            t_SpanPositionRangeQuery::initialize(module);
            t_SpanQuery::initialize(module);
            t_SpanScorer::initialize(module);
            t_SpanTermQuery::initialize(module);
            t_SpanWeight::initialize(module);
            t_Spans::initialize(module);
            t_TermSpans::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/spell/CombineSuggestion.h"
#include "org/apache/lucene/search/spell/Dictionary.h"
#include "org/apache/lucene/search/spell/DirectSpellChecker.h"
#include "org/apache/lucene/search/spell/HighFrequencyDictionary.h"
#include "org/apache/lucene/search/spell/JaroWinklerDistance.h"
#include "org/apache/lucene/search/spell/LevensteinDistance.h"
#include "org/apache/lucene/search/spell/LuceneDictionary.h"
#include "org/apache/lucene/search/spell/LuceneLevenshteinDistance.h"
#include "org/apache/lucene/search/spell/NGramDistance.h"
#include "org/apache/lucene/search/spell/PlainTextDictionary.h"
#include "org/apache/lucene/search/spell/SpellChecker.h"
#include "org/apache/lucene/search/spell/StringDistance.h"
#include "org/apache/lucene/search/spell/SuggestMode.h"
#include "org/apache/lucene/search/spell/SuggestWord.h"
#include "org/apache/lucene/search/spell/SuggestWordFrequencyComparator.h"
#include "org/apache/lucene/search/spell/SuggestWordQueue.h"
#include "org/apache/lucene/search/spell/SuggestWordScoreComparator.h"
#include "org/apache/lucene/search/spell/TermFreqIterator.h"
#include "org/apache/lucene/search/spell/TermFreqIterator$TermFreqIteratorWrapper.h"
#include "org/apache/lucene/search/spell/WordBreakSpellChecker.h"
#include "org/apache/lucene/search/spell/WordBreakSpellChecker$BreakSuggestionSortMethod.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "spell");

            t_CombineSuggestion::install(module);
            t_Dictionary::install(module);
            t_DirectSpellChecker::install(module);
            t_HighFrequencyDictionary::install(module);
            t_JaroWinklerDistance::install(module);
            t_LevensteinDistance::install(module);
            t_LuceneDictionary::install(module);
            t_LuceneLevenshteinDistance::install(module);
            t_NGramDistance::install(module);
            t_PlainTextDictionary::install(module);
            t_SpellChecker::install(module);
            t_StringDistance::install(module);
            t_SuggestMode::install(module);
            t_SuggestWord::install(module);
            t_SuggestWordFrequencyComparator::install(module);
            t_SuggestWordQueue::install(module);
            t_SuggestWordScoreComparator::install(module);
            t_TermFreqIterator::install(module);
            t_TermFreqIterator$TermFreqIteratorWrapper::install(module);
            t_WordBreakSpellChecker::install(module);
            t_WordBreakSpellChecker$BreakSuggestionSortMethod::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "spell");

            t_CombineSuggestion::initialize(module);
            t_Dictionary::initialize(module);
            t_DirectSpellChecker::initialize(module);
            t_HighFrequencyDictionary::initialize(module);
            t_JaroWinklerDistance::initialize(module);
            t_LevensteinDistance::initialize(module);
            t_LuceneDictionary::initialize(module);
            t_LuceneLevenshteinDistance::initialize(module);
            t_NGramDistance::initialize(module);
            t_PlainTextDictionary::initialize(module);
            t_SpellChecker::initialize(module);
            t_StringDistance::initialize(module);
            t_SuggestMode::initialize(module);
            t_SuggestWord::initialize(module);
            t_SuggestWordFrequencyComparator::initialize(module);
            t_SuggestWordQueue::initialize(module);
            t_SuggestWordScoreComparator::initialize(module);
            t_TermFreqIterator::initialize(module);
            t_TermFreqIterator$TermFreqIteratorWrapper::initialize(module);
            t_WordBreakSpellChecker::initialize(module);
            t_WordBreakSpellChecker$BreakSuggestionSortMethod::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/suggest/BufferedInputIterator.h"
#include "org/apache/lucene/search/suggest/BufferingTermFreqIteratorWrapper.h"
#include "org/apache/lucene/search/suggest/DocumentDictionary.h"
#include "org/apache/lucene/search/suggest/DocumentValueSourceDictionary.h"
#include "org/apache/lucene/search/suggest/FileDictionary.h"
#include "org/apache/lucene/search/suggest/InMemorySorter.h"
#include "org/apache/lucene/search/suggest/InputIterator.h"
#include "org/apache/lucene/search/suggest/InputIterator$InputIteratorWrapper.h"
#include "org/apache/lucene/search/suggest/Lookup.h"
#include "org/apache/lucene/search/suggest/Lookup$LookupPriorityQueue.h"
#include "org/apache/lucene/search/suggest/Lookup$LookupResult.h"
#include "org/apache/lucene/search/suggest/SortedInputIterator.h"
#include "org/apache/lucene/search/suggest/SortedTermFreqIteratorWrapper.h"
#include "org/apache/lucene/search/suggest/UnsortedInputIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          namespace analyzing {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace fst {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace jaspell {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace tst {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "suggest");

            t_BufferedInputIterator::install(module);
            t_BufferingTermFreqIteratorWrapper::install(module);
            t_DocumentDictionary::install(module);
            t_DocumentValueSourceDictionary::install(module);
            t_FileDictionary::install(module);
            t_InMemorySorter::install(module);
            t_InputIterator::install(module);
            t_InputIterator$InputIteratorWrapper::install(module);
            t_Lookup::install(module);
            t_Lookup$LookupPriorityQueue::install(module);
            t_Lookup$LookupResult::install(module);
            t_SortedInputIterator::install(module);
            t_SortedTermFreqIteratorWrapper::install(module);
            t_UnsortedInputIterator::install(module);
            analyzing::__install__(module);
            fst::__install__(module);
            jaspell::__install__(module);
            tst::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "suggest");

            t_BufferedInputIterator::initialize(module);
            t_BufferingTermFreqIteratorWrapper::initialize(module);
            t_DocumentDictionary::initialize(module);
            t_DocumentValueSourceDictionary::initialize(module);
            t_FileDictionary::initialize(module);
            t_InMemorySorter::initialize(module);
            t_InputIterator::initialize(module);
            t_InputIterator$InputIteratorWrapper::initialize(module);
            t_Lookup::initialize(module);
            t_Lookup$LookupPriorityQueue::initialize(module);
            t_Lookup$LookupResult::initialize(module);
            t_SortedInputIterator::initialize(module);
            t_SortedTermFreqIteratorWrapper::initialize(module);
            t_UnsortedInputIterator::initialize(module);
            analyzing::__initialize__(module);
            fst::__initialize__(module);
            jaspell::__initialize__(module);
            tst::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/suggest/analyzing/AnalyzingInfixSuggester.h"
#include "org/apache/lucene/search/suggest/analyzing/AnalyzingSuggester.h"
#include "org/apache/lucene/search/suggest/analyzing/BlendedInfixSuggester.h"
#include "org/apache/lucene/search/suggest/analyzing/BlendedInfixSuggester$BlenderType.h"
#include "org/apache/lucene/search/suggest/analyzing/FSTUtil.h"
#include "org/apache/lucene/search/suggest/analyzing/FSTUtil$Path.h"
#include "org/apache/lucene/search/suggest/analyzing/FreeTextSuggester.h"
#include "org/apache/lucene/search/suggest/analyzing/FuzzySuggester.h"
#include "org/apache/lucene/search/suggest/analyzing/SuggestStopFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "analyzing");

              t_AnalyzingInfixSuggester::install(module);
              t_AnalyzingSuggester::install(module);
              t_BlendedInfixSuggester::install(module);
              t_BlendedInfixSuggester$BlenderType::install(module);
              t_FSTUtil::install(module);
              t_FSTUtil$Path::install(module);
              t_FreeTextSuggester::install(module);
              t_FuzzySuggester::install(module);
              t_SuggestStopFilter::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "analyzing");

              t_AnalyzingInfixSuggester::initialize(module);
              t_AnalyzingSuggester::initialize(module);
              t_BlendedInfixSuggester::initialize(module);
              t_BlendedInfixSuggester$BlenderType::initialize(module);
              t_FSTUtil::initialize(module);
              t_FSTUtil$Path::initialize(module);
              t_FreeTextSuggester::initialize(module);
              t_FuzzySuggester::initialize(module);
              t_SuggestStopFilter::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/suggest/fst/BytesRefSorter.h"
#include "org/apache/lucene/search/suggest/fst/ExternalRefSorter.h"
#include "org/apache/lucene/search/suggest/fst/FSTCompletion.h"
#include "org/apache/lucene/search/suggest/fst/FSTCompletion$Completion.h"
#include "org/apache/lucene/search/suggest/fst/FSTCompletionBuilder.h"
#include "org/apache/lucene/search/suggest/fst/FSTCompletionLookup.h"
#include "org/apache/lucene/search/suggest/fst/WFSTCompletionLookup.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "fst");

              t_BytesRefSorter::install(module);
              t_ExternalRefSorter::install(module);
              t_FSTCompletion::install(module);
              t_FSTCompletion$Completion::install(module);
              t_FSTCompletionBuilder::install(module);
              t_FSTCompletionLookup::install(module);
              t_WFSTCompletionLookup::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "fst");

              t_BytesRefSorter::initialize(module);
              t_ExternalRefSorter::initialize(module);
              t_FSTCompletion::initialize(module);
              t_FSTCompletion$Completion::initialize(module);
              t_FSTCompletionBuilder::initialize(module);
              t_FSTCompletionLookup::initialize(module);
              t_WFSTCompletionLookup::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/suggest/jaspell/JaspellLookup.h"
#include "org/apache/lucene/search/suggest/jaspell/JaspellTernarySearchTrie.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace jaspell {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "jaspell");

              t_JaspellLookup::install(module);
              t_JaspellTernarySearchTrie::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "jaspell");

              t_JaspellLookup::initialize(module);
              t_JaspellTernarySearchTrie::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/suggest/tst/TSTAutocomplete.h"
#include "org/apache/lucene/search/suggest/tst/TSTLookup.h"
#include "org/apache/lucene/search/suggest/tst/TernaryTreeNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace tst {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "tst");

              t_TSTAutocomplete::install(module);
              t_TSTLookup::install(module);
              t_TernaryTreeNode::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "tst");

              t_TSTAutocomplete::initialize(module);
              t_TSTLookup::initialize(module);
              t_TernaryTreeNode::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/vectorhighlight/BaseFragListBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/BaseFragmentsBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/BoundaryScanner.h"
#include "org/apache/lucene/search/vectorhighlight/BreakIteratorBoundaryScanner.h"
#include "org/apache/lucene/search/vectorhighlight/FastVectorHighlighter.h"
#include "org/apache/lucene/search/vectorhighlight/FieldFragList.h"
#include "org/apache/lucene/search/vectorhighlight/FieldFragList$WeightedFragInfo.h"
#include "org/apache/lucene/search/vectorhighlight/FieldFragList$WeightedFragInfo$SubInfo.h"
#include "org/apache/lucene/search/vectorhighlight/FieldPhraseList.h"
#include "org/apache/lucene/search/vectorhighlight/FieldPhraseList$WeightedPhraseInfo.h"
#include "org/apache/lucene/search/vectorhighlight/FieldPhraseList$WeightedPhraseInfo$Toffs.h"
#include "org/apache/lucene/search/vectorhighlight/FieldQuery.h"
#include "org/apache/lucene/search/vectorhighlight/FieldQuery$QueryPhraseMap.h"
#include "org/apache/lucene/search/vectorhighlight/FieldTermStack.h"
#include "org/apache/lucene/search/vectorhighlight/FieldTermStack$TermInfo.h"
#include "org/apache/lucene/search/vectorhighlight/FragListBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/FragmentsBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/ScoreOrderFragmentsBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/ScoreOrderFragmentsBuilder$ScoreComparator.h"
#include "org/apache/lucene/search/vectorhighlight/SimpleBoundaryScanner.h"
#include "org/apache/lucene/search/vectorhighlight/SimpleFieldFragList.h"
#include "org/apache/lucene/search/vectorhighlight/SimpleFragListBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/SimpleFragmentsBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/SingleFragListBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/WeightedFieldFragList.h"
#include "org/apache/lucene/search/vectorhighlight/WeightedFragListBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "vectorhighlight");

            t_BaseFragListBuilder::install(module);
            t_BaseFragmentsBuilder::install(module);
            t_BoundaryScanner::install(module);
            t_BreakIteratorBoundaryScanner::install(module);
            t_FastVectorHighlighter::install(module);
            t_FieldFragList::install(module);
            t_FieldFragList$WeightedFragInfo::install(module);
            t_FieldFragList$WeightedFragInfo$SubInfo::install(module);
            t_FieldPhraseList::install(module);
            t_FieldPhraseList$WeightedPhraseInfo::install(module);
            t_FieldPhraseList$WeightedPhraseInfo$Toffs::install(module);
            t_FieldQuery::install(module);
            t_FieldQuery$QueryPhraseMap::install(module);
            t_FieldTermStack::install(module);
            t_FieldTermStack$TermInfo::install(module);
            t_FragListBuilder::install(module);
            t_FragmentsBuilder::install(module);
            t_ScoreOrderFragmentsBuilder::install(module);
            t_ScoreOrderFragmentsBuilder$ScoreComparator::install(module);
            t_SimpleBoundaryScanner::install(module);
            t_SimpleFieldFragList::install(module);
            t_SimpleFragListBuilder::install(module);
            t_SimpleFragmentsBuilder::install(module);
            t_SingleFragListBuilder::install(module);
            t_WeightedFieldFragList::install(module);
            t_WeightedFragListBuilder::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "vectorhighlight");

            t_BaseFragListBuilder::initialize(module);
            t_BaseFragmentsBuilder::initialize(module);
            t_BoundaryScanner::initialize(module);
            t_BreakIteratorBoundaryScanner::initialize(module);
            t_FastVectorHighlighter::initialize(module);
            t_FieldFragList::initialize(module);
            t_FieldFragList$WeightedFragInfo::initialize(module);
            t_FieldFragList$WeightedFragInfo$SubInfo::initialize(module);
            t_FieldPhraseList::initialize(module);
            t_FieldPhraseList$WeightedPhraseInfo::initialize(module);
            t_FieldPhraseList$WeightedPhraseInfo$Toffs::initialize(module);
            t_FieldQuery::initialize(module);
            t_FieldQuery$QueryPhraseMap::initialize(module);
            t_FieldTermStack::initialize(module);
            t_FieldTermStack$TermInfo::initialize(module);
            t_FragListBuilder::initialize(module);
            t_FragmentsBuilder::initialize(module);
            t_ScoreOrderFragmentsBuilder::initialize(module);
            t_ScoreOrderFragmentsBuilder$ScoreComparator::initialize(module);
            t_SimpleBoundaryScanner::initialize(module);
            t_SimpleFieldFragList::initialize(module);
            t_SimpleFragListBuilder::initialize(module);
            t_SimpleFragmentsBuilder::initialize(module);
            t_SingleFragListBuilder::initialize(module);
            t_WeightedFieldFragList::initialize(module);
            t_WeightedFragListBuilder::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/store/AlreadyClosedException.h"
#include "org/apache/lucene/store/BaseDirectory.h"
#include "org/apache/lucene/store/BufferedChecksum.h"
#include "org/apache/lucene/store/BufferedChecksumIndexInput.h"
#include "org/apache/lucene/store/BufferedIndexInput.h"
#include "org/apache/lucene/store/ByteArrayDataInput.h"
#include "org/apache/lucene/store/ByteArrayDataOutput.h"
#include "org/apache/lucene/store/ChecksumIndexInput.h"
#include "org/apache/lucene/store/CompoundFileDirectory.h"
#include "org/apache/lucene/store/CompoundFileDirectory$FileEntry.h"
#include "org/apache/lucene/store/DataInput.h"
#include "org/apache/lucene/store/DataOutput.h"
#include "org/apache/lucene/store/Directory.h"
#include "org/apache/lucene/store/FSDirectory.h"
#include "org/apache/lucene/store/FSLockFactory.h"
#include "org/apache/lucene/store/FileSwitchDirectory.h"
#include "org/apache/lucene/store/FilterDirectory.h"
#include "org/apache/lucene/store/FlushInfo.h"
#include "org/apache/lucene/store/IOContext.h"
#include "org/apache/lucene/store/IOContext$Context.h"
#include "org/apache/lucene/store/IndexInput.h"
#include "org/apache/lucene/store/IndexOutput.h"
#include "org/apache/lucene/store/InputStreamDataInput.h"
#include "org/apache/lucene/store/Lock.h"
#include "org/apache/lucene/store/Lock$With.h"
#include "org/apache/lucene/store/LockFactory.h"
#include "org/apache/lucene/store/LockObtainFailedException.h"
#include "org/apache/lucene/store/LockReleaseFailedException.h"
#include "org/apache/lucene/store/LockStressTest.h"
#include "org/apache/lucene/store/LockVerifyServer.h"
#include "org/apache/lucene/store/MMapDirectory.h"
#include "org/apache/lucene/store/MergeInfo.h"
#include "org/apache/lucene/store/NIOFSDirectory.h"
#include "org/apache/lucene/store/NRTCachingDirectory.h"
#include "org/apache/lucene/store/NativeFSLockFactory.h"
#include "org/apache/lucene/store/NoLockFactory.h"
#include "org/apache/lucene/store/NoSuchDirectoryException.h"
#include "org/apache/lucene/store/OutputStreamDataOutput.h"
#include "org/apache/lucene/store/OutputStreamIndexOutput.h"
#include "org/apache/lucene/store/RAMDirectory.h"
#include "org/apache/lucene/store/RAMFile.h"
#include "org/apache/lucene/store/RAMInputStream.h"
#include "org/apache/lucene/store/RAMOutputStream.h"
#include "org/apache/lucene/store/RandomAccessInput.h"
#include "org/apache/lucene/store/RateLimitedDirectoryWrapper.h"
#include "org/apache/lucene/store/RateLimiter.h"
#include "org/apache/lucene/store/RateLimiter$SimpleRateLimiter.h"
#include "org/apache/lucene/store/SimpleFSDirectory.h"
#include "org/apache/lucene/store/SimpleFSLockFactory.h"
#include "org/apache/lucene/store/SingleInstanceLockFactory.h"
#include "org/apache/lucene/store/TrackingDirectoryWrapper.h"
#include "org/apache/lucene/store/VerifyingLockFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "store");

          t_AlreadyClosedException::install(module);
          t_BaseDirectory::install(module);
          t_BufferedChecksum::install(module);
          t_BufferedChecksumIndexInput::install(module);
          t_BufferedIndexInput::install(module);
          t_ByteArrayDataInput::install(module);
          t_ByteArrayDataOutput::install(module);
          t_ChecksumIndexInput::install(module);
          t_CompoundFileDirectory::install(module);
          t_CompoundFileDirectory$FileEntry::install(module);
          t_DataInput::install(module);
          t_DataOutput::install(module);
          t_Directory::install(module);
          t_FSDirectory::install(module);
          t_FSLockFactory::install(module);
          t_FileSwitchDirectory::install(module);
          t_FilterDirectory::install(module);
          t_FlushInfo::install(module);
          t_IOContext::install(module);
          t_IOContext$Context::install(module);
          t_IndexInput::install(module);
          t_IndexOutput::install(module);
          t_InputStreamDataInput::install(module);
          t_Lock::install(module);
          t_Lock$With::install(module);
          t_LockFactory::install(module);
          t_LockObtainFailedException::install(module);
          t_LockReleaseFailedException::install(module);
          t_LockStressTest::install(module);
          t_LockVerifyServer::install(module);
          t_MMapDirectory::install(module);
          t_MergeInfo::install(module);
          t_NIOFSDirectory::install(module);
          t_NRTCachingDirectory::install(module);
          t_NativeFSLockFactory::install(module);
          t_NoLockFactory::install(module);
          t_NoSuchDirectoryException::install(module);
          t_OutputStreamDataOutput::install(module);
          t_OutputStreamIndexOutput::install(module);
          t_RAMDirectory::install(module);
          t_RAMFile::install(module);
          t_RAMInputStream::install(module);
          t_RAMOutputStream::install(module);
          t_RandomAccessInput::install(module);
          t_RateLimitedDirectoryWrapper::install(module);
          t_RateLimiter::install(module);
          t_RateLimiter$SimpleRateLimiter::install(module);
          t_SimpleFSDirectory::install(module);
          t_SimpleFSLockFactory::install(module);
          t_SingleInstanceLockFactory::install(module);
          t_TrackingDirectoryWrapper::install(module);
          t_VerifyingLockFactory::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "store");

          t_AlreadyClosedException::initialize(module);
          t_BaseDirectory::initialize(module);
          t_BufferedChecksum::initialize(module);
          t_BufferedChecksumIndexInput::initialize(module);
          t_BufferedIndexInput::initialize(module);
          t_ByteArrayDataInput::initialize(module);
          t_ByteArrayDataOutput::initialize(module);
          t_ChecksumIndexInput::initialize(module);
          t_CompoundFileDirectory::initialize(module);
          t_CompoundFileDirectory$FileEntry::initialize(module);
          t_DataInput::initialize(module);
          t_DataOutput::initialize(module);
          t_Directory::initialize(module);
          t_FSDirectory::initialize(module);
          t_FSLockFactory::initialize(module);
          t_FileSwitchDirectory::initialize(module);
          t_FilterDirectory::initialize(module);
          t_FlushInfo::initialize(module);
          t_IOContext::initialize(module);
          t_IOContext$Context::initialize(module);
          t_IndexInput::initialize(module);
          t_IndexOutput::initialize(module);
          t_InputStreamDataInput::initialize(module);
          t_Lock::initialize(module);
          t_Lock$With::initialize(module);
          t_LockFactory::initialize(module);
          t_LockObtainFailedException::initialize(module);
          t_LockReleaseFailedException::initialize(module);
          t_LockStressTest::initialize(module);
          t_LockVerifyServer::initialize(module);
          t_MMapDirectory::initialize(module);
          t_MergeInfo::initialize(module);
          t_NIOFSDirectory::initialize(module);
          t_NRTCachingDirectory::initialize(module);
          t_NativeFSLockFactory::initialize(module);
          t_NoLockFactory::initialize(module);
          t_NoSuchDirectoryException::initialize(module);
          t_OutputStreamDataOutput::initialize(module);
          t_OutputStreamIndexOutput::initialize(module);
          t_RAMDirectory::initialize(module);
          t_RAMFile::initialize(module);
          t_RAMInputStream::initialize(module);
          t_RAMOutputStream::initialize(module);
          t_RandomAccessInput::initialize(module);
          t_RateLimitedDirectoryWrapper::initialize(module);
          t_RateLimiter::initialize(module);
          t_RateLimiter$SimpleRateLimiter::initialize(module);
          t_SimpleFSDirectory::initialize(module);
          t_SimpleFSLockFactory::initialize(module);
          t_SingleInstanceLockFactory::initialize(module);
          t_TrackingDirectoryWrapper::initialize(module);
          t_VerifyingLockFactory::initialize(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/util/Accountable.h"
#include "org/apache/lucene/util/ArrayUtil.h"
#include "org/apache/lucene/util/Attribute.h"
#include "org/apache/lucene/util/AttributeFactory.h"
#include "org/apache/lucene/util/AttributeFactory$StaticImplementationAttributeFactory.h"
#include "org/apache/lucene/util/AttributeImpl.h"
#include "org/apache/lucene/util/AttributeReflector.h"
#include "org/apache/lucene/util/AttributeSource.h"
#include "org/apache/lucene/util/AttributeSource$State.h"
#include "org/apache/lucene/util/BitUtil.h"
#include "org/apache/lucene/util/Bits.h"
#include "org/apache/lucene/util/Bits$MatchAllBits.h"
#include "org/apache/lucene/util/Bits$MatchNoBits.h"
#include "org/apache/lucene/util/BroadWord.h"
#include "org/apache/lucene/util/ByteBlockPool.h"
#include "org/apache/lucene/util/ByteBlockPool$Allocator.h"
#include "org/apache/lucene/util/ByteBlockPool$DirectAllocator.h"
#include "org/apache/lucene/util/ByteBlockPool$DirectTrackingAllocator.h"
#include "org/apache/lucene/util/BytesRef.h"
#include "org/apache/lucene/util/BytesRefArray.h"
#include "org/apache/lucene/util/BytesRefHash.h"
#include "org/apache/lucene/util/BytesRefHash$BytesStartArray.h"
#include "org/apache/lucene/util/BytesRefHash$DirectBytesStartArray.h"
#include "org/apache/lucene/util/BytesRefHash$MaxBytesLengthExceededException.h"
#include "org/apache/lucene/util/BytesRefIterator.h"
#include "org/apache/lucene/util/CharsRef.h"
#include "org/apache/lucene/util/CloseableThreadLocal.h"
#include "org/apache/lucene/util/CollectionUtil.h"
#include "org/apache/lucene/util/CommandLineUtil.h"
#include "org/apache/lucene/util/Constants.h"
#include "org/apache/lucene/util/Counter.h"
#include "org/apache/lucene/util/DocIdBitSet.h"
#include "org/apache/lucene/util/DoubleBarrelLRUCache.h"
#include "org/apache/lucene/util/DoubleBarrelLRUCache$CloneableKey.h"
#include "org/apache/lucene/util/FieldCacheSanityChecker.h"
#include "org/apache/lucene/util/FieldCacheSanityChecker$Insanity.h"
#include "org/apache/lucene/util/FieldCacheSanityChecker$InsanityType.h"
#include "org/apache/lucene/util/FilterIterator.h"
#include "org/apache/lucene/util/FixedBitSet.h"
#include "org/apache/lucene/util/FixedBitSet$FixedBitSetIterator.h"
#include "org/apache/lucene/util/GrowableByteArrayDataOutput.h"
#include "org/apache/lucene/util/IOUtils.h"
#include "org/apache/lucene/util/InPlaceMergeSorter.h"
#include "org/apache/lucene/util/IndexableBinaryStringTools.h"
#include "org/apache/lucene/util/InfoStream.h"
#include "org/apache/lucene/util/IntBlockPool.h"
#include "org/apache/lucene/util/IntBlockPool$Allocator.h"
#include "org/apache/lucene/util/IntBlockPool$DirectAllocator.h"
#include "org/apache/lucene/util/IntBlockPool$SliceReader.h"
#include "org/apache/lucene/util/IntBlockPool$SliceWriter.h"
#include "org/apache/lucene/util/IntroSorter.h"
#include "org/apache/lucene/util/IntsRef.h"
#include "org/apache/lucene/util/LongBitSet.h"
#include "org/apache/lucene/util/LongValues.h"
#include "org/apache/lucene/util/LongsRef.h"
#include "org/apache/lucene/util/MapOfSets.h"
#include "org/apache/lucene/util/MathUtil.h"
#include "org/apache/lucene/util/MergedIterator.h"
#include "org/apache/lucene/util/MutableBits.h"
#include "org/apache/lucene/util/NamedSPILoader.h"
#include "org/apache/lucene/util/NamedSPILoader$NamedSPI.h"
#include "org/apache/lucene/util/NamedThreadFactory.h"
#include "org/apache/lucene/util/NumericUtils.h"
#include "org/apache/lucene/util/NumericUtils$IntRangeBuilder.h"
#include "org/apache/lucene/util/NumericUtils$LongRangeBuilder.h"
#include "org/apache/lucene/util/OfflineSorter.h"
#include "org/apache/lucene/util/OfflineSorter$BufferSize.h"
#include "org/apache/lucene/util/OfflineSorter$ByteSequencesReader.h"
#include "org/apache/lucene/util/OfflineSorter$ByteSequencesWriter.h"
#include "org/apache/lucene/util/OfflineSorter$SortInfo.h"
#include "org/apache/lucene/util/OpenBitSet.h"
#include "org/apache/lucene/util/OpenBitSetDISI.h"
#include "org/apache/lucene/util/OpenBitSetIterator.h"
#include "org/apache/lucene/util/PForDeltaDocIdSet.h"
#include "org/apache/lucene/util/PForDeltaDocIdSet$Builder.h"
#include "org/apache/lucene/util/PagedBytes.h"
#include "org/apache/lucene/util/PagedBytes$PagedBytesDataInput.h"
#include "org/apache/lucene/util/PagedBytes$PagedBytesDataOutput.h"
#include "org/apache/lucene/util/PagedBytes$Reader.h"
#include "org/apache/lucene/util/PrintStreamInfoStream.h"
#include "org/apache/lucene/util/PriorityQueue.h"
#include "org/apache/lucene/util/QueryBuilder.h"
#include "org/apache/lucene/util/RamUsageEstimator.h"
#include "org/apache/lucene/util/RamUsageEstimator$JvmFeature.h"
#include "org/apache/lucene/util/RecyclingByteBlockAllocator.h"
#include "org/apache/lucene/util/RecyclingIntBlockAllocator.h"
#include "org/apache/lucene/util/RefCount.h"
#include "org/apache/lucene/util/RollingBuffer.h"
#include "org/apache/lucene/util/RollingBuffer$Resettable.h"
#include "org/apache/lucene/util/SPIClassIterator.h"
#include "org/apache/lucene/util/SentinelIntSet.h"
#include "org/apache/lucene/util/SetOnce.h"
#include "org/apache/lucene/util/SetOnce$AlreadySetException.h"
#include "org/apache/lucene/util/SloppyMath.h"
#include "org/apache/lucene/util/SmallFloat.h"
#include "org/apache/lucene/util/Sorter.h"
#include "org/apache/lucene/util/StringHelper.h"
#include "org/apache/lucene/util/ThreadInterruptedException.h"
#include "org/apache/lucene/util/TimSorter.h"
#include "org/apache/lucene/util/ToStringUtils.h"
#include "org/apache/lucene/util/UnicodeUtil.h"
#include "org/apache/lucene/util/Version.h"
#include "org/apache/lucene/util/VirtualMethod.h"
#include "org/apache/lucene/util/WAH8DocIdSet.h"
#include "org/apache/lucene/util/WAH8DocIdSet$Builder.h"
#include "org/apache/lucene/util/WAH8DocIdSet$WordBuilder.h"
#include "org/apache/lucene/util/WeakIdentityMap.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        namespace automaton {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace fst {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace mutable$ {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace packed {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "util");

          t_Accountable::install(module);
          t_ArrayUtil::install(module);
          t_Attribute::install(module);
          t_AttributeFactory::install(module);
          t_AttributeFactory$StaticImplementationAttributeFactory::install(module);
          t_AttributeImpl::install(module);
          t_AttributeReflector::install(module);
          t_AttributeSource::install(module);
          t_AttributeSource$State::install(module);
          t_BitUtil::install(module);
          t_Bits::install(module);
          t_Bits$MatchAllBits::install(module);
          t_Bits$MatchNoBits::install(module);
          t_BroadWord::install(module);
          t_ByteBlockPool::install(module);
          t_ByteBlockPool$Allocator::install(module);
          t_ByteBlockPool$DirectAllocator::install(module);
          t_ByteBlockPool$DirectTrackingAllocator::install(module);
          t_BytesRef::install(module);
          t_BytesRefArray::install(module);
          t_BytesRefHash::install(module);
          t_BytesRefHash$BytesStartArray::install(module);
          t_BytesRefHash$DirectBytesStartArray::install(module);
          t_BytesRefHash$MaxBytesLengthExceededException::install(module);
          t_BytesRefIterator::install(module);
          t_CharsRef::install(module);
          t_CloseableThreadLocal::install(module);
          t_CollectionUtil::install(module);
          t_CommandLineUtil::install(module);
          t_Constants::install(module);
          t_Counter::install(module);
          t_DocIdBitSet::install(module);
          t_DoubleBarrelLRUCache::install(module);
          t_DoubleBarrelLRUCache$CloneableKey::install(module);
          t_FieldCacheSanityChecker::install(module);
          t_FieldCacheSanityChecker$Insanity::install(module);
          t_FieldCacheSanityChecker$InsanityType::install(module);
          t_FilterIterator::install(module);
          t_FixedBitSet::install(module);
          t_FixedBitSet$FixedBitSetIterator::install(module);
          t_GrowableByteArrayDataOutput::install(module);
          t_IOUtils::install(module);
          t_InPlaceMergeSorter::install(module);
          t_IndexableBinaryStringTools::install(module);
          t_InfoStream::install(module);
          t_IntBlockPool::install(module);
          t_IntBlockPool$Allocator::install(module);
          t_IntBlockPool$DirectAllocator::install(module);
          t_IntBlockPool$SliceReader::install(module);
          t_IntBlockPool$SliceWriter::install(module);
          t_IntroSorter::install(module);
          t_IntsRef::install(module);
          t_LongBitSet::install(module);
          t_LongValues::install(module);
          t_LongsRef::install(module);
          t_MapOfSets::install(module);
          t_MathUtil::install(module);
          t_MergedIterator::install(module);
          t_MutableBits::install(module);
          t_NamedSPILoader::install(module);
          t_NamedSPILoader$NamedSPI::install(module);
          t_NamedThreadFactory::install(module);
          t_NumericUtils::install(module);
          t_NumericUtils$IntRangeBuilder::install(module);
          t_NumericUtils$LongRangeBuilder::install(module);
          t_OfflineSorter::install(module);
          t_OfflineSorter$BufferSize::install(module);
          t_OfflineSorter$ByteSequencesReader::install(module);
          t_OfflineSorter$ByteSequencesWriter::install(module);
          t_OfflineSorter$SortInfo::install(module);
          t_OpenBitSet::install(module);
          t_OpenBitSetDISI::install(module);
          t_OpenBitSetIterator::install(module);
          t_PForDeltaDocIdSet::install(module);
          t_PForDeltaDocIdSet$Builder::install(module);
          t_PagedBytes::install(module);
          t_PagedBytes$PagedBytesDataInput::install(module);
          t_PagedBytes$PagedBytesDataOutput::install(module);
          t_PagedBytes$Reader::install(module);
          t_PrintStreamInfoStream::install(module);
          t_PriorityQueue::install(module);
          t_QueryBuilder::install(module);
          t_RamUsageEstimator::install(module);
          t_RamUsageEstimator$JvmFeature::install(module);
          t_RecyclingByteBlockAllocator::install(module);
          t_RecyclingIntBlockAllocator::install(module);
          t_RefCount::install(module);
          t_RollingBuffer::install(module);
          t_RollingBuffer$Resettable::install(module);
          t_SPIClassIterator::install(module);
          t_SentinelIntSet::install(module);
          t_SetOnce::install(module);
          t_SetOnce$AlreadySetException::install(module);
          t_SloppyMath::install(module);
          t_SmallFloat::install(module);
          t_Sorter::install(module);
          t_StringHelper::install(module);
          t_ThreadInterruptedException::install(module);
          t_TimSorter::install(module);
          t_ToStringUtils::install(module);
          t_UnicodeUtil::install(module);
          t_Version::install(module);
          t_VirtualMethod::install(module);
          t_WAH8DocIdSet::install(module);
          t_WAH8DocIdSet$Builder::install(module);
          t_WAH8DocIdSet$WordBuilder::install(module);
          t_WeakIdentityMap::install(module);
          automaton::__install__(module);
          fst::__install__(module);
          mutable$::__install__(module);
          packed::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "util");

          t_Accountable::initialize(module);
          t_ArrayUtil::initialize(module);
          t_Attribute::initialize(module);
          t_AttributeFactory::initialize(module);
          t_AttributeFactory$StaticImplementationAttributeFactory::initialize(module);
          t_AttributeImpl::initialize(module);
          t_AttributeReflector::initialize(module);
          t_AttributeSource::initialize(module);
          t_AttributeSource$State::initialize(module);
          t_BitUtil::initialize(module);
          t_Bits::initialize(module);
          t_Bits$MatchAllBits::initialize(module);
          t_Bits$MatchNoBits::initialize(module);
          t_BroadWord::initialize(module);
          t_ByteBlockPool::initialize(module);
          t_ByteBlockPool$Allocator::initialize(module);
          t_ByteBlockPool$DirectAllocator::initialize(module);
          t_ByteBlockPool$DirectTrackingAllocator::initialize(module);
          t_BytesRef::initialize(module);
          t_BytesRefArray::initialize(module);
          t_BytesRefHash::initialize(module);
          t_BytesRefHash$BytesStartArray::initialize(module);
          t_BytesRefHash$DirectBytesStartArray::initialize(module);
          t_BytesRefHash$MaxBytesLengthExceededException::initialize(module);
          t_BytesRefIterator::initialize(module);
          t_CharsRef::initialize(module);
          t_CloseableThreadLocal::initialize(module);
          t_CollectionUtil::initialize(module);
          t_CommandLineUtil::initialize(module);
          t_Constants::initialize(module);
          t_Counter::initialize(module);
          t_DocIdBitSet::initialize(module);
          t_DoubleBarrelLRUCache::initialize(module);
          t_DoubleBarrelLRUCache$CloneableKey::initialize(module);
          t_FieldCacheSanityChecker::initialize(module);
          t_FieldCacheSanityChecker$Insanity::initialize(module);
          t_FieldCacheSanityChecker$InsanityType::initialize(module);
          t_FilterIterator::initialize(module);
          t_FixedBitSet::initialize(module);
          t_FixedBitSet$FixedBitSetIterator::initialize(module);
          t_GrowableByteArrayDataOutput::initialize(module);
          t_IOUtils::initialize(module);
          t_InPlaceMergeSorter::initialize(module);
          t_IndexableBinaryStringTools::initialize(module);
          t_InfoStream::initialize(module);
          t_IntBlockPool::initialize(module);
          t_IntBlockPool$Allocator::initialize(module);
          t_IntBlockPool$DirectAllocator::initialize(module);
          t_IntBlockPool$SliceReader::initialize(module);
          t_IntBlockPool$SliceWriter::initialize(module);
          t_IntroSorter::initialize(module);
          t_IntsRef::initialize(module);
          t_LongBitSet::initialize(module);
          t_LongValues::initialize(module);
          t_LongsRef::initialize(module);
          t_MapOfSets::initialize(module);
          t_MathUtil::initialize(module);
          t_MergedIterator::initialize(module);
          t_MutableBits::initialize(module);
          t_NamedSPILoader::initialize(module);
          t_NamedSPILoader$NamedSPI::initialize(module);
          t_NamedThreadFactory::initialize(module);
          t_NumericUtils::initialize(module);
          t_NumericUtils$IntRangeBuilder::initialize(module);
          t_NumericUtils$LongRangeBuilder::initialize(module);
          t_OfflineSorter::initialize(module);
          t_OfflineSorter$BufferSize::initialize(module);
          t_OfflineSorter$ByteSequencesReader::initialize(module);
          t_OfflineSorter$ByteSequencesWriter::initialize(module);
          t_OfflineSorter$SortInfo::initialize(module);
          t_OpenBitSet::initialize(module);
          t_OpenBitSetDISI::initialize(module);
          t_OpenBitSetIterator::initialize(module);
          t_PForDeltaDocIdSet::initialize(module);
          t_PForDeltaDocIdSet$Builder::initialize(module);
          t_PagedBytes::initialize(module);
          t_PagedBytes$PagedBytesDataInput::initialize(module);
          t_PagedBytes$PagedBytesDataOutput::initialize(module);
          t_PagedBytes$Reader::initialize(module);
          t_PrintStreamInfoStream::initialize(module);
          t_PriorityQueue::initialize(module);
          t_QueryBuilder::initialize(module);
          t_RamUsageEstimator::initialize(module);
          t_RamUsageEstimator$JvmFeature::initialize(module);
          t_RecyclingByteBlockAllocator::initialize(module);
          t_RecyclingIntBlockAllocator::initialize(module);
          t_RefCount::initialize(module);
          t_RollingBuffer::initialize(module);
          t_RollingBuffer$Resettable::initialize(module);
          t_SPIClassIterator::initialize(module);
          t_SentinelIntSet::initialize(module);
          t_SetOnce::initialize(module);
          t_SetOnce$AlreadySetException::initialize(module);
          t_SloppyMath::initialize(module);
          t_SmallFloat::initialize(module);
          t_Sorter::initialize(module);
          t_StringHelper::initialize(module);
          t_ThreadInterruptedException::initialize(module);
          t_TimSorter::initialize(module);
          t_ToStringUtils::initialize(module);
          t_UnicodeUtil::initialize(module);
          t_Version::initialize(module);
          t_VirtualMethod::initialize(module);
          t_WAH8DocIdSet::initialize(module);
          t_WAH8DocIdSet$Builder::initialize(module);
          t_WAH8DocIdSet$WordBuilder::initialize(module);
          t_WeakIdentityMap::initialize(module);
          automaton::__initialize__(module);
          fst::__initialize__(module);
          mutable$::__initialize__(module);
          packed::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/util/automaton/Automaton.h"
#include "org/apache/lucene/util/automaton/AutomatonProvider.h"
#include "org/apache/lucene/util/automaton/BasicAutomata.h"
#include "org/apache/lucene/util/automaton/BasicOperations.h"
#include "org/apache/lucene/util/automaton/ByteRunAutomaton.h"
#include "org/apache/lucene/util/automaton/CharacterRunAutomaton.h"
#include "org/apache/lucene/util/automaton/CompiledAutomaton.h"
#include "org/apache/lucene/util/automaton/CompiledAutomaton$AUTOMATON_TYPE.h"
#include "org/apache/lucene/util/automaton/LevenshteinAutomata.h"
#include "org/apache/lucene/util/automaton/MinimizationOperations.h"
#include "org/apache/lucene/util/automaton/RegExp.h"
#include "org/apache/lucene/util/automaton/RunAutomaton.h"
#include "org/apache/lucene/util/automaton/SortedIntSet$FrozenIntSet.h"
#include "org/apache/lucene/util/automaton/SpecialOperations.h"
#include "org/apache/lucene/util/automaton/State.h"
#include "org/apache/lucene/util/automaton/StatePair.h"
#include "org/apache/lucene/util/automaton/Transition.h"
#include "org/apache/lucene/util/automaton/UTF32ToUTF8.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "automaton");

            t_Automaton::install(module);
            t_AutomatonProvider::install(module);
            t_BasicAutomata::install(module);
            t_BasicOperations::install(module);
            t_ByteRunAutomaton::install(module);
            t_CharacterRunAutomaton::install(module);
            t_CompiledAutomaton::install(module);
            t_CompiledAutomaton$AUTOMATON_TYPE::install(module);
            t_LevenshteinAutomata::install(module);
            t_MinimizationOperations::install(module);
            t_RegExp::install(module);
            t_RunAutomaton::install(module);
            t_SortedIntSet$FrozenIntSet::install(module);
            t_SpecialOperations::install(module);
            t_State::install(module);
            t_StatePair::install(module);
            t_Transition::install(module);
            t_UTF32ToUTF8::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "automaton");

            t_Automaton::initialize(module);
            t_AutomatonProvider::initialize(module);
            t_BasicAutomata::initialize(module);
            t_BasicOperations::initialize(module);
            t_ByteRunAutomaton::initialize(module);
            t_CharacterRunAutomaton::initialize(module);
            t_CompiledAutomaton::initialize(module);
            t_CompiledAutomaton$AUTOMATON_TYPE::initialize(module);
            t_LevenshteinAutomata::initialize(module);
            t_MinimizationOperations::initialize(module);
            t_RegExp::initialize(module);
            t_RunAutomaton::initialize(module);
            t_SortedIntSet$FrozenIntSet::initialize(module);
            t_SpecialOperations::initialize(module);
            t_State::initialize(module);
            t_StatePair::initialize(module);
            t_Transition::initialize(module);
            t_UTF32ToUTF8::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/util/fst/Builder.h"
#include "org/apache/lucene/util/fst/Builder$Arc.h"
#include "org/apache/lucene/util/fst/Builder$FreezeTail.h"
#include "org/apache/lucene/util/fst/Builder$UnCompiledNode.h"
#include "org/apache/lucene/util/fst/ByteSequenceOutputs.h"
#include "org/apache/lucene/util/fst/BytesRefFSTEnum.h"
#include "org/apache/lucene/util/fst/BytesRefFSTEnum$InputOutput.h"
#include "org/apache/lucene/util/fst/CharSequenceOutputs.h"
#include "org/apache/lucene/util/fst/FST.h"
#include "org/apache/lucene/util/fst/FST$Arc.h"
#include "org/apache/lucene/util/fst/FST$BytesReader.h"
#include "org/apache/lucene/util/fst/FST$INPUT_TYPE.h"
#include "org/apache/lucene/util/fst/FSTEnum.h"
#include "org/apache/lucene/util/fst/IntSequenceOutputs.h"
#include "org/apache/lucene/util/fst/IntsRefFSTEnum.h"
#include "org/apache/lucene/util/fst/IntsRefFSTEnum$InputOutput.h"
#include "org/apache/lucene/util/fst/NoOutputs.h"
#include "org/apache/lucene/util/fst/Outputs.h"
#include "org/apache/lucene/util/fst/PairOutputs.h"
#include "org/apache/lucene/util/fst/PairOutputs$Pair.h"
#include "org/apache/lucene/util/fst/PositiveIntOutputs.h"
#include "org/apache/lucene/util/fst/Util.h"
#include "org/apache/lucene/util/fst/Util$FSTPath.h"
#include "org/apache/lucene/util/fst/Util$Result.h"
#include "org/apache/lucene/util/fst/Util$TopNSearcher.h"
#include "org/apache/lucene/util/fst/Util$TopResults.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "fst");

            t_Builder::install(module);
            t_Builder$Arc::install(module);
            t_Builder$FreezeTail::install(module);
            t_Builder$UnCompiledNode::install(module);
            t_ByteSequenceOutputs::install(module);
            t_BytesRefFSTEnum::install(module);
            t_BytesRefFSTEnum$InputOutput::install(module);
            t_CharSequenceOutputs::install(module);
            t_FST::install(module);
            t_FST$Arc::install(module);
            t_FST$BytesReader::install(module);
            t_FST$INPUT_TYPE::install(module);
            t_FSTEnum::install(module);
            t_IntSequenceOutputs::install(module);
            t_IntsRefFSTEnum::install(module);
            t_IntsRefFSTEnum$InputOutput::install(module);
            t_NoOutputs::install(module);
            t_Outputs::install(module);
            t_PairOutputs::install(module);
            t_PairOutputs$Pair::install(module);
            t_PositiveIntOutputs::install(module);
            t_Util::install(module);
            t_Util$FSTPath::install(module);
            t_Util$Result::install(module);
            t_Util$TopNSearcher::install(module);
            t_Util$TopResults::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "fst");

            t_Builder::initialize(module);
            t_Builder$Arc::initialize(module);
            t_Builder$FreezeTail::initialize(module);
            t_Builder$UnCompiledNode::initialize(module);
            t_ByteSequenceOutputs::initialize(module);
            t_BytesRefFSTEnum::initialize(module);
            t_BytesRefFSTEnum$InputOutput::initialize(module);
            t_CharSequenceOutputs::initialize(module);
            t_FST::initialize(module);
            t_FST$Arc::initialize(module);
            t_FST$BytesReader::initialize(module);
            t_FST$INPUT_TYPE::initialize(module);
            t_FSTEnum::initialize(module);
            t_IntSequenceOutputs::initialize(module);
            t_IntsRefFSTEnum::initialize(module);
            t_IntsRefFSTEnum$InputOutput::initialize(module);
            t_NoOutputs::initialize(module);
            t_Outputs::initialize(module);
            t_PairOutputs::initialize(module);
            t_PairOutputs$Pair::initialize(module);
            t_PositiveIntOutputs::initialize(module);
            t_Util::initialize(module);
            t_Util$FSTPath::initialize(module);
            t_Util$Result::initialize(module);
            t_Util$TopNSearcher::initialize(module);
            t_Util$TopResults::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/util/mutable/MutableValue.h"
#include "org/apache/lucene/util/mutable/MutableValueBool.h"
#include "org/apache/lucene/util/mutable/MutableValueDate.h"
#include "org/apache/lucene/util/mutable/MutableValueDouble.h"
#include "org/apache/lucene/util/mutable/MutableValueFloat.h"
#include "org/apache/lucene/util/mutable/MutableValueInt.h"
#include "org/apache/lucene/util/mutable/MutableValueLong.h"
#include "org/apache/lucene/util/mutable/MutableValueStr.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "mutable");

            t_MutableValue::install(module);
            t_MutableValueBool::install(module);
            t_MutableValueDate::install(module);
            t_MutableValueDouble::install(module);
            t_MutableValueFloat::install(module);
            t_MutableValueInt::install(module);
            t_MutableValueLong::install(module);
            t_MutableValueStr::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "mutable");

            t_MutableValue::initialize(module);
            t_MutableValueBool::initialize(module);
            t_MutableValueDate::initialize(module);
            t_MutableValueDouble::initialize(module);
            t_MutableValueFloat::initialize(module);
            t_MutableValueInt::initialize(module);
            t_MutableValueLong::initialize(module);
            t_MutableValueStr::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/util/packed/AbstractAppendingLongBuffer.h"
#include "org/apache/lucene/util/packed/AbstractAppendingLongBuffer$Iterator.h"
#include "org/apache/lucene/util/packed/AbstractBlockPackedWriter.h"
#include "org/apache/lucene/util/packed/AbstractPagedMutable.h"
#include "org/apache/lucene/util/packed/AppendingDeltaPackedLongBuffer.h"
#include "org/apache/lucene/util/packed/AppendingPackedLongBuffer.h"
#include "org/apache/lucene/util/packed/BlockPackedReader.h"
#include "org/apache/lucene/util/packed/BlockPackedReaderIterator.h"
#include "org/apache/lucene/util/packed/BlockPackedWriter.h"
#include "org/apache/lucene/util/packed/DirectReader.h"
#include "org/apache/lucene/util/packed/DirectWriter.h"
#include "org/apache/lucene/util/packed/EliasFanoDecoder.h"
#include "org/apache/lucene/util/packed/EliasFanoDocIdSet.h"
#include "org/apache/lucene/util/packed/EliasFanoEncoder.h"
#include "org/apache/lucene/util/packed/GrowableWriter.h"
#include "org/apache/lucene/util/packed/MonotonicAppendingLongBuffer.h"
#include "org/apache/lucene/util/packed/MonotonicBlockPackedReader.h"
#include "org/apache/lucene/util/packed/MonotonicBlockPackedWriter.h"
#include "org/apache/lucene/util/packed/PackedDataInput.h"
#include "org/apache/lucene/util/packed/PackedDataOutput.h"
#include "org/apache/lucene/util/packed/PackedInts.h"
#include "org/apache/lucene/util/packed/PackedInts$Decoder.h"
#include "org/apache/lucene/util/packed/PackedInts$Encoder.h"
#include "org/apache/lucene/util/packed/PackedInts$Format.h"
#include "org/apache/lucene/util/packed/PackedInts$FormatAndBits.h"
#include "org/apache/lucene/util/packed/PackedInts$Header.h"
#include "org/apache/lucene/util/packed/PackedInts$Mutable.h"
#include "org/apache/lucene/util/packed/PackedInts$NullReader.h"
#include "org/apache/lucene/util/packed/PackedInts$Reader.h"
#include "org/apache/lucene/util/packed/PackedInts$ReaderIterator.h"
#include "org/apache/lucene/util/packed/PackedInts$Writer.h"
#include "org/apache/lucene/util/packed/PagedGrowableWriter.h"
#include "org/apache/lucene/util/packed/PagedMutable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "packed");

            t_AbstractAppendingLongBuffer::install(module);
            t_AbstractAppendingLongBuffer$Iterator::install(module);
            t_AbstractBlockPackedWriter::install(module);
            t_AbstractPagedMutable::install(module);
            t_AppendingDeltaPackedLongBuffer::install(module);
            t_AppendingPackedLongBuffer::install(module);
            t_BlockPackedReader::install(module);
            t_BlockPackedReaderIterator::install(module);
            t_BlockPackedWriter::install(module);
            t_DirectReader::install(module);
            t_DirectWriter::install(module);
            t_EliasFanoDecoder::install(module);
            t_EliasFanoDocIdSet::install(module);
            t_EliasFanoEncoder::install(module);
            t_GrowableWriter::install(module);
            t_MonotonicAppendingLongBuffer::install(module);
            t_MonotonicBlockPackedReader::install(module);
            t_MonotonicBlockPackedWriter::install(module);
            t_PackedDataInput::install(module);
            t_PackedDataOutput::install(module);
            t_PackedInts::install(module);
            t_PackedInts$Decoder::install(module);
            t_PackedInts$Encoder::install(module);
            t_PackedInts$Format::install(module);
            t_PackedInts$FormatAndBits::install(module);
            t_PackedInts$Header::install(module);
            t_PackedInts$Mutable::install(module);
            t_PackedInts$NullReader::install(module);
            t_PackedInts$Reader::install(module);
            t_PackedInts$ReaderIterator::install(module);
            t_PackedInts$Writer::install(module);
            t_PagedGrowableWriter::install(module);
            t_PagedMutable::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "packed");

            t_AbstractAppendingLongBuffer::initialize(module);
            t_AbstractAppendingLongBuffer$Iterator::initialize(module);
            t_AbstractBlockPackedWriter::initialize(module);
            t_AbstractPagedMutable::initialize(module);
            t_AppendingDeltaPackedLongBuffer::initialize(module);
            t_AppendingPackedLongBuffer::initialize(module);
            t_BlockPackedReader::initialize(module);
            t_BlockPackedReaderIterator::initialize(module);
            t_BlockPackedWriter::initialize(module);
            t_DirectReader::initialize(module);
            t_DirectWriter::initialize(module);
            t_EliasFanoDecoder::initialize(module);
            t_EliasFanoDocIdSet::initialize(module);
            t_EliasFanoEncoder::initialize(module);
            t_GrowableWriter::initialize(module);
            t_MonotonicAppendingLongBuffer::initialize(module);
            t_MonotonicBlockPackedReader::initialize(module);
            t_MonotonicBlockPackedWriter::initialize(module);
            t_PackedDataInput::initialize(module);
            t_PackedDataOutput::initialize(module);
            t_PackedInts::initialize(module);
            t_PackedInts$Decoder::initialize(module);
            t_PackedInts$Encoder::initialize(module);
            t_PackedInts$Format::initialize(module);
            t_PackedInts$FormatAndBits::initialize(module);
            t_PackedInts$Header::initialize(module);
            t_PackedInts$Mutable::initialize(module);
            t_PackedInts$NullReader::initialize(module);
            t_PackedInts$Reader::initialize(module);
            t_PackedInts$ReaderIterator::initialize(module);
            t_PackedInts$Writer::initialize(module);
            t_PagedGrowableWriter::initialize(module);
            t_PagedMutable::initialize(module);
          }
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace pylucene {

      namespace analysis {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace index {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace queryparser {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace search {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace store {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace util {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.apache", "pylucene");

        analysis::__install__(module);
        index::__install__(module);
        queryparser::__install__(module);
        search::__install__(module);
        store::__install__(module);
        util::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.apache", "pylucene");

        analysis::__initialize__(module);
        index::__initialize__(module);
        queryparser::__initialize__(module);
        search::__initialize__(module);
        store::__initialize__(module);
        util::__initialize__(module);
      }
    }
  }
}

#include "org/apache/pylucene/analysis/PythonAnalyzer.h"
#include "org/apache/pylucene/analysis/PythonCharTokenizer.h"
#include "org/apache/pylucene/analysis/PythonFilteringTokenFilter.h"
#include "org/apache/pylucene/analysis/PythonTokenFilter.h"
#include "org/apache/pylucene/analysis/PythonTokenStream.h"
#include "org/apache/pylucene/analysis/PythonTokenizer.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "analysis");

          t_PythonAnalyzer::install(module);
          t_PythonCharTokenizer::install(module);
          t_PythonFilteringTokenFilter::install(module);
          t_PythonTokenFilter::install(module);
          t_PythonTokenStream::install(module);
          t_PythonTokenizer::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "analysis");

          t_PythonAnalyzer::initialize(module);
          t_PythonCharTokenizer::initialize(module);
          t_PythonFilteringTokenFilter::initialize(module);
          t_PythonTokenFilter::initialize(module);
          t_PythonTokenStream::initialize(module);
          t_PythonTokenizer::initialize(module);
        }
      }
    }
  }
}

#include "org/apache/pylucene/index/PythonIndexDeletionPolicy.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace index {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "index");

          t_PythonIndexDeletionPolicy::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "index");

          t_PythonIndexDeletionPolicy::initialize(module);
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace pylucene {
      namespace queryparser {

        namespace classic {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "queryparser");

          classic::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "queryparser");

          classic::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/pylucene/queryparser/classic/PythonMultiFieldQueryParser.h"
#include "org/apache/pylucene/queryparser/classic/PythonQueryParser.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace queryparser {
        namespace classic {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.queryparser", "classic");

            t_PythonMultiFieldQueryParser::install(module);
            t_PythonQueryParser::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.queryparser", "classic");

            t_PythonMultiFieldQueryParser::initialize(module);
            t_PythonQueryParser::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/pylucene/search/PythonByteParser.h"
#include "org/apache/pylucene/search/PythonCollector.h"
#include "org/apache/pylucene/search/PythonDoubleParser.h"
#include "org/apache/pylucene/search/PythonFieldComparator.h"
#include "org/apache/pylucene/search/PythonFieldComparatorSource.h"
#include "org/apache/pylucene/search/PythonFilter.h"
#include "org/apache/pylucene/search/PythonFloatParser.h"
#include "org/apache/pylucene/search/PythonIntParser.h"
#include "org/apache/pylucene/search/PythonLongParser.h"
#include "org/apache/pylucene/search/PythonShortParser.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {

        namespace highlight {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace similarities {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace spans {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "search");

          t_PythonByteParser::install(module);
          t_PythonCollector::install(module);
          t_PythonDoubleParser::install(module);
          t_PythonFieldComparator::install(module);
          t_PythonFieldComparatorSource::install(module);
          t_PythonFilter::install(module);
          t_PythonFloatParser::install(module);
          t_PythonIntParser::install(module);
          t_PythonLongParser::install(module);
          t_PythonShortParser::install(module);
          highlight::__install__(module);
          similarities::__install__(module);
          spans::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "search");

          t_PythonByteParser::initialize(module);
          t_PythonCollector::initialize(module);
          t_PythonDoubleParser::initialize(module);
          t_PythonFieldComparator::initialize(module);
          t_PythonFieldComparatorSource::initialize(module);
          t_PythonFilter::initialize(module);
          t_PythonFloatParser::initialize(module);
          t_PythonIntParser::initialize(module);
          t_PythonLongParser::initialize(module);
          t_PythonShortParser::initialize(module);
          highlight::__initialize__(module);
          similarities::__initialize__(module);
          spans::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/pylucene/search/highlight/PythonFormatter.h"
#include "org/apache/pylucene/search/highlight/PythonFragmenter.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace highlight {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.search", "highlight");

            t_PythonFormatter::install(module);
            t_PythonFragmenter::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.search", "highlight");

            t_PythonFormatter::initialize(module);
            t_PythonFragmenter::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/pylucene/search/similarities/PythonDefaultSimilarity.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace similarities {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.search", "similarities");

            t_PythonDefaultSimilarity::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.search", "similarities");

            t_PythonDefaultSimilarity::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/pylucene/search/spans/PythonSpans.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace spans {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.search", "spans");

            t_PythonSpans::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.search", "spans");

            t_PythonSpans::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/pylucene/store/PythonDirectory.h"
#include "org/apache/pylucene/store/PythonIndexInput.h"
#include "org/apache/pylucene/store/PythonIndexOutput.h"
#include "org/apache/pylucene/store/PythonLock.h"
#include "org/apache/pylucene/store/PythonLockFactory.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "store");

          t_PythonDirectory::install(module);
          t_PythonIndexInput::install(module);
          t_PythonIndexOutput::install(module);
          t_PythonLock::install(module);
          t_PythonLockFactory::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "store");

          t_PythonDirectory::initialize(module);
          t_PythonIndexInput::initialize(module);
          t_PythonIndexOutput::initialize(module);
          t_PythonLock::initialize(module);
          t_PythonLockFactory::initialize(module);
        }
      }
    }
  }
}

#include "org/apache/pylucene/util/PythonAttribute.h"
#include "org/apache/pylucene/util/PythonAttributeImpl.h"
#include "org/apache/pylucene/util/PythonComparable.h"
#include "org/apache/pylucene/util/PythonIterator.h"
#include "org/apache/pylucene/util/PythonList.h"
#include "org/apache/pylucene/util/PythonListIterator.h"
#include "org/apache/pylucene/util/PythonSet.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "util");

          t_PythonAttribute::install(module);
          t_PythonAttributeImpl::install(module);
          t_PythonComparable::install(module);
          t_PythonIterator::install(module);
          t_PythonList::install(module);
          t_PythonListIterator::install(module);
          t_PythonSet::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "util");

          t_PythonAttribute::initialize(module);
          t_PythonAttributeImpl::initialize(module);
          t_PythonComparable::initialize(module);
          t_PythonIterator::initialize(module);
          t_PythonList::initialize(module);
          t_PythonListIterator::initialize(module);
          t_PythonSet::initialize(module);
        }
      }
    }
  }
}


namespace org {
  namespace egothor {

    namespace stemmer {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "org", "egothor");

      stemmer::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "org", "egothor");

      stemmer::__initialize__(module);
    }
  }
}

#include "org/egothor/stemmer/Compile.h"
#include "org/egothor/stemmer/Diff.h"
#include "org/egothor/stemmer/DiffIt.h"
#include "org/egothor/stemmer/Gener.h"
#include "org/egothor/stemmer/Lift.h"
#include "org/egothor/stemmer/MultiTrie.h"
#include "org/egothor/stemmer/MultiTrie2.h"
#include "org/egothor/stemmer/Optimizer.h"
#include "org/egothor/stemmer/Optimizer2.h"
#include "org/egothor/stemmer/Reduce.h"
#include "org/egothor/stemmer/Row.h"
#include "org/egothor/stemmer/Trie.h"

namespace org {
  namespace egothor {
    namespace stemmer {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.egothor", "stemmer");

        t_Compile::install(module);
        t_Diff::install(module);
        t_DiffIt::install(module);
        t_Gener::install(module);
        t_Lift::install(module);
        t_MultiTrie::install(module);
        t_MultiTrie2::install(module);
        t_Optimizer::install(module);
        t_Optimizer2::install(module);
        t_Reduce::install(module);
        t_Row::install(module);
        t_Trie::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.egothor", "stemmer");

        t_Compile::initialize(module);
        t_Diff::initialize(module);
        t_DiffIt::initialize(module);
        t_Gener::initialize(module);
        t_Lift::initialize(module);
        t_MultiTrie::initialize(module);
        t_MultiTrie2::initialize(module);
        t_Optimizer::initialize(module);
        t_Optimizer2::initialize(module);
        t_Reduce::initialize(module);
        t_Row::initialize(module);
        t_Trie::initialize(module);
      }
    }
  }
}


namespace org {
  namespace tartarus {

    namespace snowball {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "org", "tartarus");

      snowball::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "org", "tartarus");

      snowball::__initialize__(module);
    }
  }
}

#include "org/tartarus/snowball/Among.h"
#include "org/tartarus/snowball/SnowballProgram.h"

namespace org {
  namespace tartarus {
    namespace snowball {

      namespace ext {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.tartarus", "snowball");

        t_Among::install(module);
        t_SnowballProgram::install(module);
        ext::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.tartarus", "snowball");

        t_Among::initialize(module);
        t_SnowballProgram::initialize(module);
        ext::__initialize__(module);
      }
    }
  }
}

#include "org/tartarus/snowball/ext/ArmenianStemmer.h"
#include "org/tartarus/snowball/ext/BasqueStemmer.h"
#include "org/tartarus/snowball/ext/CatalanStemmer.h"
#include "org/tartarus/snowball/ext/DanishStemmer.h"
#include "org/tartarus/snowball/ext/DutchStemmer.h"
#include "org/tartarus/snowball/ext/EnglishStemmer.h"
#include "org/tartarus/snowball/ext/FinnishStemmer.h"
#include "org/tartarus/snowball/ext/FrenchStemmer.h"
#include "org/tartarus/snowball/ext/German2Stemmer.h"
#include "org/tartarus/snowball/ext/GermanStemmer.h"
#include "org/tartarus/snowball/ext/HungarianStemmer.h"
#include "org/tartarus/snowball/ext/IrishStemmer.h"
#include "org/tartarus/snowball/ext/ItalianStemmer.h"
#include "org/tartarus/snowball/ext/KpStemmer.h"
#include "org/tartarus/snowball/ext/LovinsStemmer.h"
#include "org/tartarus/snowball/ext/NorwegianStemmer.h"
#include "org/tartarus/snowball/ext/PorterStemmer.h"
#include "org/tartarus/snowball/ext/PortugueseStemmer.h"
#include "org/tartarus/snowball/ext/RomanianStemmer.h"
#include "org/tartarus/snowball/ext/RussianStemmer.h"
#include "org/tartarus/snowball/ext/SpanishStemmer.h"
#include "org/tartarus/snowball/ext/SwedishStemmer.h"
#include "org/tartarus/snowball/ext/TurkishStemmer.h"

namespace org {
  namespace tartarus {
    namespace snowball {
      namespace ext {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.tartarus.snowball", "ext");

          t_ArmenianStemmer::install(module);
          t_BasqueStemmer::install(module);
          t_CatalanStemmer::install(module);
          t_DanishStemmer::install(module);
          t_DutchStemmer::install(module);
          t_EnglishStemmer::install(module);
          t_FinnishStemmer::install(module);
          t_FrenchStemmer::install(module);
          t_German2Stemmer::install(module);
          t_GermanStemmer::install(module);
          t_HungarianStemmer::install(module);
          t_IrishStemmer::install(module);
          t_ItalianStemmer::install(module);
          t_KpStemmer::install(module);
          t_LovinsStemmer::install(module);
          t_NorwegianStemmer::install(module);
          t_PorterStemmer::install(module);
          t_PortugueseStemmer::install(module);
          t_RomanianStemmer::install(module);
          t_RussianStemmer::install(module);
          t_SpanishStemmer::install(module);
          t_SwedishStemmer::install(module);
          t_TurkishStemmer::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.tartarus.snowball", "ext");

          t_ArmenianStemmer::initialize(module);
          t_BasqueStemmer::initialize(module);
          t_CatalanStemmer::initialize(module);
          t_DanishStemmer::initialize(module);
          t_DutchStemmer::initialize(module);
          t_EnglishStemmer::initialize(module);
          t_FinnishStemmer::initialize(module);
          t_FrenchStemmer::initialize(module);
          t_German2Stemmer::initialize(module);
          t_GermanStemmer::initialize(module);
          t_HungarianStemmer::initialize(module);
          t_IrishStemmer::initialize(module);
          t_ItalianStemmer::initialize(module);
          t_KpStemmer::initialize(module);
          t_LovinsStemmer::initialize(module);
          t_NorwegianStemmer::initialize(module);
          t_PorterStemmer::initialize(module);
          t_PortugueseStemmer::initialize(module);
          t_RomanianStemmer::initialize(module);
          t_RussianStemmer::initialize(module);
          t_SpanishStemmer::initialize(module);
          t_SwedishStemmer::initialize(module);
          t_TurkishStemmer::initialize(module);
        }
      }
    }
  }
}


namespace org {
  namespace xml {

    namespace sax {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "org", "xml");

      sax::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "org", "xml");

      sax::__initialize__(module);
    }
  }
}


namespace org {
  namespace xml {
    namespace sax {

      namespace helpers {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.xml", "sax");

        helpers::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.xml", "sax");

        helpers::__initialize__(module);
      }
    }
  }
}

#include "org/xml/sax/helpers/DefaultHandler.h"

namespace org {
  namespace xml {
    namespace sax {
      namespace helpers {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.xml.sax", "helpers");

          t_DefaultHandler::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.xml.sax", "helpers");

          t_DefaultHandler::initialize(module);
        }
      }
    }
  }
}

