#ifndef org_apache_lucene_analysis_no_NorwegianMinimalStemFilter_H
#define org_apache_lucene_analysis_no_NorwegianMinimalStemFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
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
      namespace analysis {
        namespace no {

          class NorwegianMinimalStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_c7c794dc,
              mid_init$_d53bcf42,
              mid_incrementToken_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NorwegianMinimalStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            NorwegianMinimalStemFilter(const NorwegianMinimalStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            NorwegianMinimalStemFilter(const ::org::apache::lucene::analysis::TokenStream &);
            NorwegianMinimalStemFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);

            jboolean incrementToken() const;
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
        namespace no {
          extern PyTypeObject PY_TYPE(NorwegianMinimalStemFilter);

          class t_NorwegianMinimalStemFilter {
          public:
            PyObject_HEAD
            NorwegianMinimalStemFilter object;
            static PyObject *wrap_Object(const NorwegianMinimalStemFilter&);
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
