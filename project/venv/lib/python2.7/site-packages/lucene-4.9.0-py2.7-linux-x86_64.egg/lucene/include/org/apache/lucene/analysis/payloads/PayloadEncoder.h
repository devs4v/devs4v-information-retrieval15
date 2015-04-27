#ifndef org_apache_lucene_analysis_payloads_PayloadEncoder_H
#define org_apache_lucene_analysis_payloads_PayloadEncoder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace payloads {

          class PayloadEncoder : public ::java::lang::Object {
          public:
            enum {
              mid_encode_09e96eed,
              mid_encode_871544e1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadEncoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PayloadEncoder(const PayloadEncoder& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::BytesRef encode(const JArray< jchar > &) const;
            ::org::apache::lucene::util::BytesRef encode(const JArray< jchar > &, jint, jint) const;
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
          extern PyTypeObject PY_TYPE(PayloadEncoder);

          class t_PayloadEncoder {
          public:
            PyObject_HEAD
            PayloadEncoder object;
            static PyObject *wrap_Object(const PayloadEncoder&);
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
