#ifndef org_apache_lucene_analysis_th_ThaiWordFilter_H
#define org_apache_lucene_analysis_th_ThaiWordFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
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
        namespace th {

          class ThaiWordFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_8f50e725,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ThaiWordFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ThaiWordFilter(const ThaiWordFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jboolean DBBI_AVAILABLE;

            ThaiWordFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &);

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
        namespace th {
          extern PyTypeObject PY_TYPE(ThaiWordFilter);

          class t_ThaiWordFilter {
          public:
            PyObject_HEAD
            ThaiWordFilter object;
            static PyObject *wrap_Object(const ThaiWordFilter&);
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
