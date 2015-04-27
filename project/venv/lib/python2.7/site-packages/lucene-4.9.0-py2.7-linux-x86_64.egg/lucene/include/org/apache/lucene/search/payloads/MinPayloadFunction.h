#ifndef org_apache_lucene_search_payloads_MinPayloadFunction_H
#define org_apache_lucene_search_payloads_MinPayloadFunction_H

#include "org/apache/lucene/search/payloads/PayloadFunction.h"

namespace java {
  namespace lang {
    class Object;
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

          class MinPayloadFunction : public ::org::apache::lucene::search::payloads::PayloadFunction {
          public:
            enum {
              mid_init$_54c6a166,
              mid_currentScore_9fe8c3f6,
              mid_docScore_08788a8d,
              mid_equals_290588e2,
              mid_hashCode_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MinPayloadFunction(jobject obj) : ::org::apache::lucene::search::payloads::PayloadFunction(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            MinPayloadFunction(const MinPayloadFunction& obj) : ::org::apache::lucene::search::payloads::PayloadFunction(obj) {}

            MinPayloadFunction();

            jfloat currentScore(jint, const ::java::lang::String &, jint, jint, jint, jfloat, jfloat) const;
            jfloat docScore(jint, const ::java::lang::String &, jint, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
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
          extern PyTypeObject PY_TYPE(MinPayloadFunction);

          class t_MinPayloadFunction {
          public:
            PyObject_HEAD
            MinPayloadFunction object;
            static PyObject *wrap_Object(const MinPayloadFunction&);
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
