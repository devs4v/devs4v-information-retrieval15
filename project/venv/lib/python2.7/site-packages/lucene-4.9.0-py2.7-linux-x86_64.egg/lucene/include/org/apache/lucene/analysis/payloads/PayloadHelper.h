#ifndef org_apache_lucene_analysis_payloads_PayloadHelper_H
#define org_apache_lucene_analysis_payloads_PayloadHelper_H

#include "java/lang/Object.h"

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

          class PayloadHelper : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_decodeFloat_49b4f13b,
              mid_decodeFloat_b8354c53,
              mid_decodeInt_b8354c5c,
              mid_encodeFloat_909f9221,
              mid_encodeFloat_a555a4d0,
              mid_encodeInt_b4292e98,
              mid_encodeInt_1bd14047,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadHelper(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PayloadHelper(const PayloadHelper& obj) : ::java::lang::Object(obj) {}

            PayloadHelper();

            static jfloat decodeFloat(const JArray< jbyte > &);
            static jfloat decodeFloat(const JArray< jbyte > &, jint);
            static jint decodeInt(const JArray< jbyte > &, jint);
            static JArray< jbyte > encodeFloat(jfloat);
            static JArray< jbyte > encodeFloat(jfloat, const JArray< jbyte > &, jint);
            static JArray< jbyte > encodeInt(jint);
            static JArray< jbyte > encodeInt(jint, const JArray< jbyte > &, jint);
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
          extern PyTypeObject PY_TYPE(PayloadHelper);

          class t_PayloadHelper {
          public:
            PyObject_HEAD
            PayloadHelper object;
            static PyObject *wrap_Object(const PayloadHelper&);
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
