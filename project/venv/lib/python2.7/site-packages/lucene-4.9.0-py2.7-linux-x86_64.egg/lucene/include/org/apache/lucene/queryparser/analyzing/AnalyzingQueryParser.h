#ifndef org_apache_lucene_queryparser_analyzing_AnalyzingQueryParser_H
#define org_apache_lucene_queryparser_analyzing_AnalyzingQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace analyzing {

          class AnalyzingQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
          public:
            enum {
              mid_init$_504c192d,
              mid_getFuzzyQuery_45995161,
              mid_getWildcardQuery_38d6e77e,
              mid_getPrefixQuery_38d6e77e,
              mid_analyzeSingleChunk_af6d27e3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AnalyzingQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AnalyzingQueryParser(const AnalyzingQueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {}

            AnalyzingQueryParser(const ::org::apache::lucene::util::Version &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace analyzing {
          extern PyTypeObject PY_TYPE(AnalyzingQueryParser);

          class t_AnalyzingQueryParser {
          public:
            PyObject_HEAD
            AnalyzingQueryParser object;
            static PyObject *wrap_Object(const AnalyzingQueryParser&);
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
