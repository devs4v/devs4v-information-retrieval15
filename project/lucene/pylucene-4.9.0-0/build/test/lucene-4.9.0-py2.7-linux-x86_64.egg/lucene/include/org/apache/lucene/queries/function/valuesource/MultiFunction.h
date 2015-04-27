#ifndef org_apache_lucene_queries_function_valuesource_MultiFunction_H
#define org_apache_lucene_queries_function_valuesource_MultiFunction_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class IndexSearcher;
      }
      namespace queries {
        namespace function {
          class FunctionValues;
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
    class Object;
    class Class;
    class String;
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

            class MultiFunction : public ::org::apache::lucene::queries::function::ValueSource {
            public:
              enum {
                mid_init$_1fde8fc3,
                mid_createWeight_1b6125ba,
                mid_description_14c7b5c5,
                mid_description_4a33a010,
                mid_equals_290588e2,
                mid_hashCode_54c6a179,
                mid_toString_6f3fdb48,
                mid_valsArr_4dc40b54,
                mid_name_14c7b5c5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MultiFunction(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              MultiFunction(const MultiFunction& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              MultiFunction(const ::java::util::List &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              static ::java::lang::String description(const ::java::lang::String &, const ::java::util::List &);
              jboolean equals(const ::java::lang::Object &) const;
              jint hashCode() const;
              static ::java::lang::String toString(const ::java::lang::String &, const JArray< ::org::apache::lucene::queries::function::FunctionValues > &, jint);
              static JArray< ::org::apache::lucene::queries::function::FunctionValues > valsArr(const ::java::util::List &, const ::java::util::Map &, const ::org::apache::lucene::index::AtomicReaderContext &);
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
            extern PyTypeObject PY_TYPE(MultiFunction);

            class t_MultiFunction {
            public:
              PyObject_HEAD
              MultiFunction object;
              static PyObject *wrap_Object(const MultiFunction&);
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
