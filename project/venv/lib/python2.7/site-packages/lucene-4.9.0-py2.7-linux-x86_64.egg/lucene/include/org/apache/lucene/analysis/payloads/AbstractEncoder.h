#ifndef org_apache_lucene_analysis_payloads_AbstractEncoder_H
#define org_apache_lucene_analysis_payloads_AbstractEncoder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace analysis {
        namespace payloads {
          class PayloadEncoder;
        }
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

          class AbstractEncoder : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_encode_09e96eed,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractEncoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractEncoder(const AbstractEncoder& obj) : ::java::lang::Object(obj) {}

            AbstractEncoder();

            ::org::apache::lucene::util::BytesRef encode(const JArray< jchar > &) const;
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
          extern PyTypeObject PY_TYPE(AbstractEncoder);

          class t_AbstractEncoder {
          public:
            PyObject_HEAD
            AbstractEncoder object;
            static PyObject *wrap_Object(const AbstractEncoder&);
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
