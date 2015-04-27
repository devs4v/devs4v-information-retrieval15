#ifndef org_apache_lucene_queries_function_valuesource_SingleFunction_H
#define org_apache_lucene_queries_function_valuesource_SingleFunction_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
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

            class SingleFunction : public ::org::apache::lucene::queries::function::ValueSource {
            public:
              enum {
                mid_init$_ca78fe7a,
                mid_createWeight_1b6125ba,
                mid_description_14c7b5c5,
                mid_equals_290588e2,
                mid_hashCode_54c6a179,
                mid_name_14c7b5c5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SingleFunction(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SingleFunction(const SingleFunction& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              SingleFunction(const ::org::apache::lucene::queries::function::ValueSource &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              jint hashCode() const;
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
            extern PyTypeObject PY_TYPE(SingleFunction);

            class t_SingleFunction {
            public:
              PyObject_HEAD
              SingleFunction object;
              static PyObject *wrap_Object(const SingleFunction&);
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
