#ifndef org_apache_lucene_search_payloads_PayloadFunction_H
#define org_apache_lucene_search_payloads_PayloadFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace payloads {

          class PayloadFunction : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_currentScore_9fe8c3f6,
              mid_docScore_08788a8d,
              mid_equals_290588e2,
              mid_explain_33812a26,
              mid_hashCode_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadFunction(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PayloadFunction(const PayloadFunction& obj) : ::java::lang::Object(obj) {}

            PayloadFunction();

            jfloat currentScore(jint, const ::java::lang::String &, jint, jint, jint, jfloat, jfloat) const;
            jfloat docScore(jint, const ::java::lang::String &, jint, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::Explanation explain(jint, const ::java::lang::String &, jint, jfloat) const;
            jint hashCode() const;
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
      namespace search {
        namespace payloads {
          extern PyTypeObject PY_TYPE(PayloadFunction);

          class t_PayloadFunction {
          public:
            PyObject_HEAD
            PayloadFunction object;
            static PyObject *wrap_Object(const PayloadFunction&);
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
