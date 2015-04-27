#ifndef org_apache_lucene_analysis_hunspell_HunspellStemFilter_H
#define org_apache_lucene_analysis_hunspell_HunspellStemFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace hunspell {
          class Dictionary;
        }
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
      namespace analysis {
        namespace hunspell {

          class HunspellStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_05177913,
              mid_init$_d3f3208c,
              mid_init$_6c7575a5,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HunspellStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            HunspellStemFilter(const HunspellStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            HunspellStemFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::hunspell::Dictionary &);
            HunspellStemFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::hunspell::Dictionary &, jboolean);
            HunspellStemFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::hunspell::Dictionary &, jboolean, jboolean);

            jboolean incrementToken() const;
            void reset() const;
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
      namespace analysis {
        namespace hunspell {
          extern PyTypeObject PY_TYPE(HunspellStemFilter);

          class t_HunspellStemFilter {
          public:
            PyObject_HEAD
            HunspellStemFilter object;
            static PyObject *wrap_Object(const HunspellStemFilter&);
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
