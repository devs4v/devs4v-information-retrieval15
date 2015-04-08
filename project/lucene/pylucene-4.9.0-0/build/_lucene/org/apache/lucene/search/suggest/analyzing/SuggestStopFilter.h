#ifndef org_apache_lucene_search_suggest_analyzing_SuggestStopFilter_H
#define org_apache_lucene_search_suggest_analyzing_SuggestStopFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class CharArraySet;
        }
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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

            class SuggestStopFilter : public ::org::apache::lucene::analysis::TokenFilter {
            public:
              enum {
                mid_init$_64fb9de3,
                mid_end_54c6a166,
                mid_incrementToken_54c6a16a,
                mid_reset_54c6a166,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SuggestStopFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SuggestStopFilter(const SuggestStopFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

              SuggestStopFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::util::CharArraySet &);

              void end() const;
              jboolean incrementToken() const;
              void reset() const;
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
            extern PyTypeObject PY_TYPE(SuggestStopFilter);

            class t_SuggestStopFilter {
            public:
              PyObject_HEAD
              SuggestStopFilter object;
              static PyObject *wrap_Object(const SuggestStopFilter&);
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
