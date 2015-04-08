#ifndef org_apache_lucene_search_suggest_analyzing_BlendedInfixSuggester_H
#define org_apache_lucene_search_suggest_analyzing_BlendedInfixSuggester_H

#include "org/apache/lucene/search/suggest/analyzing/AnalyzingInfixSuggester.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
        class BytesRef;
      }
      namespace search {
        namespace suggest {
          class Lookup$LookupResult;
          namespace analyzing {
            class BlendedInfixSuggester$BlenderType;
          }
        }
      }
      namespace store {
        class Directory;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
    class List;
  }
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {

            class BlendedInfixSuggester : public ::org::apache::lucene::search::suggest::analyzing::AnalyzingInfixSuggester {
            public:
              enum {
                mid_init$_b2fef229,
                mid_init$_185ca32c,
                mid_lookup_dd3e9f51,
                mid_lookup_bb92c162,
                mid_getTextFieldType_a2615189,
                mid_createResults_dfa2a05f,
                mid_calculateCoefficient_39c7bd2e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BlendedInfixSuggester(jobject obj) : ::org::apache::lucene::search::suggest::analyzing::AnalyzingInfixSuggester(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              BlendedInfixSuggester(const BlendedInfixSuggester& obj) : ::org::apache::lucene::search::suggest::analyzing::AnalyzingInfixSuggester(obj) {}

              static jint DEFAULT_NUM_FACTOR;

              BlendedInfixSuggester(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &);
              BlendedInfixSuggester(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, const ::org::apache::lucene::search::suggest::analyzing::BlendedInfixSuggester$BlenderType &, jint);

              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jint, jboolean, jboolean) const;
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
            extern PyTypeObject PY_TYPE(BlendedInfixSuggester);

            class t_BlendedInfixSuggester {
            public:
              PyObject_HEAD
              BlendedInfixSuggester object;
              static PyObject *wrap_Object(const BlendedInfixSuggester&);
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
