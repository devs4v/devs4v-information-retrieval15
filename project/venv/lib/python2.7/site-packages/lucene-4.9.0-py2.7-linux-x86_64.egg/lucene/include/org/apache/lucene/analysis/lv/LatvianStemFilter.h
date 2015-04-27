#ifndef org_apache_lucene_analysis_lv_LatvianStemFilter_H
#define org_apache_lucene_analysis_lv_LatvianStemFilter_H

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
        namespace lv {

          class LatvianStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_c7c794dc,
              mid_incrementToken_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LatvianStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LatvianStemFilter(const LatvianStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            LatvianStemFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
        namespace lv {
          extern PyTypeObject PY_TYPE(LatvianStemFilter);

          class t_LatvianStemFilter {
          public:
            PyObject_HEAD
            LatvianStemFilter object;
            static PyObject *wrap_Object(const LatvianStemFilter&);
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
