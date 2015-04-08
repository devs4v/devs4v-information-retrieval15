#ifndef org_apache_lucene_analysis_ga_IrishLowerCaseFilter_H
#define org_apache_lucene_analysis_ga_IrishLowerCaseFilter_H

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
        namespace ga {

          class IrishLowerCaseFilter : public ::org::apache::lucene::analysis::TokenFilter {
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

            explicit IrishLowerCaseFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            IrishLowerCaseFilter(const IrishLowerCaseFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            IrishLowerCaseFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
        namespace ga {
          extern PyTypeObject PY_TYPE(IrishLowerCaseFilter);

          class t_IrishLowerCaseFilter {
          public:
            PyObject_HEAD
            IrishLowerCaseFilter object;
            static PyObject *wrap_Object(const IrishLowerCaseFilter&);
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
