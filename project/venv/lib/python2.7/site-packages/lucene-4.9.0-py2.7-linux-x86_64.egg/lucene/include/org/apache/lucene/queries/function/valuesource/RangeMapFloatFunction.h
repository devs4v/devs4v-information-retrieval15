#ifndef org_apache_lucene_queries_function_valuesource_RangeMapFloatFunction_H
#define org_apache_lucene_queries_function_valuesource_RangeMapFloatFunction_H

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
  namespace lang {
    class Object;
    class Float;
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

            class RangeMapFloatFunction : public ::org::apache::lucene::queries::function::ValueSource {
            public:
              enum {
                mid_init$_6ddf6b07,
                mid_init$_e1b244a8,
                mid_createWeight_1b6125ba,
                mid_description_14c7b5c5,
                mid_equals_290588e2,
                mid_getValues_4c566485,
                mid_hashCode_54c6a179,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RangeMapFloatFunction(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              RangeMapFloatFunction(const RangeMapFloatFunction& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              RangeMapFloatFunction(const ::org::apache::lucene::queries::function::ValueSource &, jfloat, jfloat, jfloat, const ::java::lang::Float &);
              RangeMapFloatFunction(const ::org::apache::lucene::queries::function::ValueSource &, jfloat, jfloat, const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::queries::function::ValueSource &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::AtomicReaderContext &) const;
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
            extern PyTypeObject PY_TYPE(RangeMapFloatFunction);

            class t_RangeMapFloatFunction {
            public:
              PyObject_HEAD
              RangeMapFloatFunction object;
              static PyObject *wrap_Object(const RangeMapFloatFunction&);
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
