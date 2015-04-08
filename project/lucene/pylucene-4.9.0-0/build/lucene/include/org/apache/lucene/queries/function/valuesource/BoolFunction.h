#ifndef org_apache_lucene_queries_function_valuesource_BoolFunction_H
#define org_apache_lucene_queries_function_valuesource_BoolFunction_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class BoolFunction : public ::org::apache::lucene::queries::function::ValueSource {
            public:
              enum {
                mid_init$_54c6a166,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BoolFunction(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              BoolFunction(const BoolFunction& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              BoolFunction();
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {
            extern PyTypeObject PY_TYPE(BoolFunction);

            class t_BoolFunction {
            public:
              PyObject_HEAD
              BoolFunction object;
              static PyObject *wrap_Object(const BoolFunction&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
