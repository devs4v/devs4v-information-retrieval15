#ifndef org_apache_lucene_analysis_hu_HungarianLightStemFilter_H
#define org_apache_lucene_analysis_hu_HungarianLightStemFilter_H

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
        namespace hu {

          class HungarianLightStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
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

            explicit HungarianLightStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            HungarianLightStemFilter(const HungarianLightStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            HungarianLightStemFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
        namespace hu {
          extern PyTypeObject PY_TYPE(HungarianLightStemFilter);

          class t_HungarianLightStemFilter {
          public:
            PyObject_HEAD
            HungarianLightStemFilter object;
            static PyObject *wrap_Object(const HungarianLightStemFilter&);
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
