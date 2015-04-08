#ifndef org_apache_lucene_queries_function_valuesource_MinFloatFunction_H
#define org_apache_lucene_queries_function_valuesource_MinFloatFunction_H

#include "org/apache/lucene/queries/function/valuesource/MultiFloatFunction.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class ValueSource;
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
      namespace queries {
        namespace function {
          namespace valuesource {

            class MinFloatFunction : public ::org::apache::lucene::queries::function::valuesource::MultiFloatFunction {
            public:
              enum {
                mid_init$_ee9922ca,
                mid_name_14c7b5c5,
                mid_func_d2e34bb9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MinFloatFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::MultiFloatFunction(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              MinFloatFunction(const MinFloatFunction& obj) : ::org::apache::lucene::queries::function::valuesource::MultiFloatFunction(obj) {}

              MinFloatFunction(const JArray< ::org::apache::lucene::queries::function::ValueSource > &);
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
            extern PyTypeObject PY_TYPE(MinFloatFunction);

            class t_MinFloatFunction {
            public:
              PyObject_HEAD
              MinFloatFunction object;
              static PyObject *wrap_Object(const MinFloatFunction&);
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
