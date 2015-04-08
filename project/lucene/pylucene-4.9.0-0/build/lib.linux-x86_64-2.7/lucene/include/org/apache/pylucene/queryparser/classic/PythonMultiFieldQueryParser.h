#ifndef org_apache_pylucene_queryparser_classic_PythonMultiFieldQueryParser_H
#define org_apache_pylucene_queryparser_classic_PythonMultiFieldQueryParser_H

#include "org/apache/lucene/queryparser/classic/MultiFieldQueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace classic {
          class ParseException;
        }
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace queryparser {
        namespace classic {

          class PythonMultiFieldQueryParser : public ::org::apache::lucene::queryparser::classic::MultiFieldQueryParser {
          public:
            enum {
              mid_init$_822fc5c3,
              mid_finalize_54c6a166,
              mid_getBooleanQuery_3d190f1c,
              mid_getFieldQuery_bd696f55,
              mid_getFieldQuery_c7c8d9a8,
              mid_getFieldQuery_quoted_bd696f55,
              mid_getFieldQuery_quoted_super_bd696f55,
              mid_getFieldQuery_slop_c7c8d9a8,
              mid_getFieldQuery_slop_super_c7c8d9a8,
              mid_getFuzzyQuery_45995161,
              mid_getPrefixQuery_38d6e77e,
              mid_getRangeQuery_75fd45b6,
              mid_getWildcardQuery_38d6e77e,
              mid_pythonDecRef_54c6a166,
              mid_pythonExtension_54c6a17a,
              mid_pythonExtension_0ee6df2f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonMultiFieldQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::MultiFieldQueryParser(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PythonMultiFieldQueryParser(const PythonMultiFieldQueryParser& obj) : ::org::apache::lucene::queryparser::classic::MultiFieldQueryParser(obj) {}

            PythonMultiFieldQueryParser(const ::org::apache::lucene::util::Version &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &);

            void finalize() const;
            ::org::apache::lucene::search::Query getBooleanQuery(const ::java::util::List &, jboolean) const;
            ::org::apache::lucene::search::Query getFieldQuery(const ::java::lang::String &, const ::java::lang::String &, jboolean) const;
            ::org::apache::lucene::search::Query getFieldQuery(const ::java::lang::String &, const ::java::lang::String &, jint) const;
            ::org::apache::lucene::search::Query getFieldQuery_quoted(const ::java::lang::String &, const ::java::lang::String &, jboolean) const;
            ::org::apache::lucene::search::Query getFieldQuery_quoted_super(const ::java::lang::String &, const ::java::lang::String &, jboolean) const;
            ::org::apache::lucene::search::Query getFieldQuery_slop(const ::java::lang::String &, const ::java::lang::String &, jint) const;
            ::org::apache::lucene::search::Query getFieldQuery_slop_super(const ::java::lang::String &, const ::java::lang::String &, jint) const;
            ::org::apache::lucene::search::Query getFuzzyQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat) const;
            ::org::apache::lucene::search::Query getPrefixQuery(const ::java::lang::String &, const ::java::lang::String &) const;
            ::org::apache::lucene::search::Query getRangeQuery(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
            ::org::apache::lucene::search::Query getWildcardQuery(const ::java::lang::String &, const ::java::lang::String &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace queryparser {
        namespace classic {
          extern PyTypeObject PY_TYPE(PythonMultiFieldQueryParser);

          class t_PythonMultiFieldQueryParser {
          public:
            PyObject_HEAD
            PythonMultiFieldQueryParser object;
            static PyObject *wrap_Object(const PythonMultiFieldQueryParser&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
