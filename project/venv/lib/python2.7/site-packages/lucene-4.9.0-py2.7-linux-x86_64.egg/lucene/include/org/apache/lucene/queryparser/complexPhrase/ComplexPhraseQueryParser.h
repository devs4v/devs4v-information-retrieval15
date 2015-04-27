#ifndef org_apache_lucene_queryparser_complexPhrase_ComplexPhraseQueryParser_H
#define org_apache_lucene_queryparser_complexPhrase_ComplexPhraseQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

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
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace complexPhrase {

          class ComplexPhraseQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
          public:
            enum {
              mid_init$_504c192d,
              mid_parse_fbed2634,
              mid_setInOrder_bb0c767f,
              mid_getFieldQuery_c7c8d9a8,
              mid_newTermQuery_c8bbbdc7,
              mid_getRangeQuery_75fd45b6,
              mid_newRangeQuery_75fd45b6,
              mid_getFuzzyQuery_45995161,
              mid_getWildcardQuery_38d6e77e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ComplexPhraseQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ComplexPhraseQueryParser(const ComplexPhraseQueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {}

            ComplexPhraseQueryParser(const ::org::apache::lucene::util::Version &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);

            ::org::apache::lucene::search::Query parse(const ::java::lang::String &) const;
            void setInOrder(jboolean) const;
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
        namespace complexPhrase {
          extern PyTypeObject PY_TYPE(ComplexPhraseQueryParser);

          class t_ComplexPhraseQueryParser {
          public:
            PyObject_HEAD
            ComplexPhraseQueryParser object;
            static PyObject *wrap_Object(const ComplexPhraseQueryParser&);
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
