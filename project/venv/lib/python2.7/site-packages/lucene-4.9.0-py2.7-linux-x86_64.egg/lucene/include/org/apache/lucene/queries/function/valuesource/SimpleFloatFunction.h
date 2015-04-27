#ifndef org_apache_lucene_queries_function_valuesource_SimpleFloatFunction_H
#define org_apache_lucene_queries_function_valuesource_SimpleFloatFunction_H

#include "org/apache/lucene/queries/function/valuesource/SingleFunction.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace queries {
        namespace function {
          class FunctionValues;
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
  namespace util {
    class Map;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class SimpleFloatFunction : public ::org::apache::lucene::queries::function::valuesource::SingleFunction {
            public:
              enum {
                mid_init$_ca78fe7a,
                mid_getValues_4c566485,
                mid_func_2223df21,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SimpleFloatFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::SingleFunction(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SimpleFloatFunction(const SimpleFloatFunction& obj) : ::org::apache::lucene::queries::function::valuesource::SingleFunction(obj) {}

              SimpleFloatFunction(const ::org::apache::lucene::queries::function::ValueSource &);

              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::AtomicReaderContext &) const;
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
            extern PyTypeObject PY_TYPE(SimpleFloatFunction);

            class t_SimpleFloatFunction {
            public:
              PyObject_HEAD
              SimpleFloatFunction object;
              static PyObject *wrap_Object(const SimpleFloatFunction&);
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
