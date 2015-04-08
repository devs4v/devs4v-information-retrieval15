#ifndef org_apache_lucene_queries_function_valuesource_SumFloatFunction_H
#define org_apache_lucene_queries_function_valuesource_SumFloatFunction_H

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

            class SumFloatFunction : public ::org::apache::lucene::queries::function::valuesource::MultiFloatFunction {
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

              explicit SumFloatFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::MultiFloatFunction(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SumFloatFunction(const SumFloatFunction& obj) : ::org::apache::lucene::queries::function::valuesource::MultiFloatFunction(obj) {}

              SumFloatFunction(const JArray< ::org::apache::lucene::queries::function::ValueSource > &);
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
            extern PyTypeObject PY_TYPE(SumFloatFunction);

            class t_SumFloatFunction {
            public:
              PyObject_HEAD
              SumFloatFunction object;
              static PyObject *wrap_Object(const SumFloatFunction&);
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
