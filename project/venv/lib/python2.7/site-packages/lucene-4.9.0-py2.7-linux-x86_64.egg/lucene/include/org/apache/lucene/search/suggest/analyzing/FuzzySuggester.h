#ifndef org_apache_lucene_search_suggest_analyzing_FuzzySuggester_H
#define org_apache_lucene_search_suggest_analyzing_FuzzySuggester_H

#include "org/apache/lucene/search/suggest/analyzing/AnalyzingSuggester.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {

            class FuzzySuggester : public ::org::apache::lucene::search::suggest::analyzing::AnalyzingSuggester {
            public:
              enum {
                mid_init$_31619410,
                mid_init$_6a3c5772,
                mid_init$_ec63f0d3,
                mid_convertAutomaton_7aca8e1f,
                mid_getFullPrefixPaths_a9ea3855,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FuzzySuggester(jobject obj) : ::org::apache::lucene::search::suggest::analyzing::AnalyzingSuggester(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FuzzySuggester(const FuzzySuggester& obj) : ::org::apache::lucene::search::suggest::analyzing::AnalyzingSuggester(obj) {}

              static jint DEFAULT_MAX_EDITS;
              static jint DEFAULT_MIN_FUZZY_LENGTH;
              static jint DEFAULT_NON_FUZZY_PREFIX;
              static jboolean DEFAULT_TRANSPOSITIONS;
              static jboolean DEFAULT_UNICODE_AWARE;

              FuzzySuggester(const ::org::apache::lucene::analysis::Analyzer &);
              FuzzySuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &);
              FuzzySuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jint, jint, jboolean, jint, jboolean, jint, jint, jboolean);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {
            extern PyTypeObject PY_TYPE(FuzzySuggester);

            class t_FuzzySuggester {
            public:
              PyObject_HEAD
              FuzzySuggester object;
              static PyObject *wrap_Object(const FuzzySuggester&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
