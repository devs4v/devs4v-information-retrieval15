#ifndef org_apache_lucene_analysis_no_NorwegianLightStemFilter_H
#define org_apache_lucene_analysis_no_NorwegianLightStemFilter_H

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

          class NorwegianLightStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
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

            explicit NorwegianLightStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            NorwegianLightStemFilter(const NorwegianLightStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            NorwegianLightStemFilter(const ::org::apache::lucene::analysis::TokenStream &);
            NorwegianLightStemFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);

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
          extern PyTypeObject PY_TYPE(NorwegianLightStemFilter);

          class t_NorwegianLightStemFilter {
          public:
            PyObject_HEAD
            NorwegianLightStemFilter object;
            static PyObject *wrap_Object(const NorwegianLightStemFilter&);
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
