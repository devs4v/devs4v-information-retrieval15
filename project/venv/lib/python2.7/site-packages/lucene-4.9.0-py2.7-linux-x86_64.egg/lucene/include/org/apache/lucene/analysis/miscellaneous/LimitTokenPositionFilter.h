#ifndef org_apache_lucene_analysis_miscellaneous_LimitTokenPositionFilter_H
#define org_apache_lucene_analysis_miscellaneous_LimitTokenPositionFilter_H

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
        namespace miscellaneous {

          class LimitTokenPositionFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_d53bcf42,
              mid_init$_4f7f61d3,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LimitTokenPositionFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LimitTokenPositionFilter(const LimitTokenPositionFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            LimitTokenPositionFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);
            LimitTokenPositionFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jboolean);

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
        namespace miscellaneous {
          extern PyTypeObject PY_TYPE(LimitTokenPositionFilter);

          class t_LimitTokenPositionFilter {
          public:
            PyObject_HEAD
            LimitTokenPositionFilter object;
            static PyObject *wrap_Object(const LimitTokenPositionFilter&);
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
