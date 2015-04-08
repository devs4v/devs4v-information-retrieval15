#ifndef org_apache_lucene_analysis_payloads_NumericPayloadTokenFilter_H
#define org_apache_lucene_analysis_payloads_NumericPayloadTokenFilter_H

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
    class String;
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
        namespace payloads {

          class NumericPayloadTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_333172df,
              mid_incrementToken_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NumericPayloadTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            NumericPayloadTokenFilter(const NumericPayloadTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            NumericPayloadTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, jfloat, const ::java::lang::String &);

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
        namespace payloads {
          extern PyTypeObject PY_TYPE(NumericPayloadTokenFilter);

          class t_NumericPayloadTokenFilter {
          public:
            PyObject_HEAD
            NumericPayloadTokenFilter object;
            static PyObject *wrap_Object(const NumericPayloadTokenFilter&);
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
