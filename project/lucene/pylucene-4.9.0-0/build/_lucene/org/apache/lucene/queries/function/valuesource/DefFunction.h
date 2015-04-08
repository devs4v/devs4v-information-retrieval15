#ifndef org_apache_lucene_queries_function_valuesource_DefFunction_H
#define org_apache_lucene_queries_function_valuesource_DefFunction_H

#include "org/apache/lucene/queries/function/valuesource/MultiFunction.h"

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
  namespace util {
    class Map;
    class List;
  }
  namespace lang {
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
      namespace queries {
        namespace function {
          namespace valuesource {

            class DefFunction : public ::org::apache::lucene::queries::function::valuesource::MultiFunction {
            public:
              enum {
                mid_init$_1fde8fc3,
                mid_getValues_4c566485,
                mid_name_14c7b5c5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DefFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::MultiFunction(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              DefFunction(const DefFunction& obj) : ::org::apache::lucene::queries::function::valuesource::MultiFunction(obj) {}

              DefFunction(const ::java::util::List &);

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
            extern PyTypeObject PY_TYPE(DefFunction);

            class t_DefFunction {
            public:
              PyObject_HEAD
              DefFunction object;
              static PyObject *wrap_Object(const DefFunction&);
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
