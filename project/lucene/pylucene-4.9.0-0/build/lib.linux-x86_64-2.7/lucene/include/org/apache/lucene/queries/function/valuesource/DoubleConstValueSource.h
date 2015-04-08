#ifndef org_apache_lucene_queries_function_valuesource_DoubleConstValueSource_H
#define org_apache_lucene_queries_function_valuesource_DoubleConstValueSource_H

#include "org/apache/lucene/queries/function/valuesource/ConstNumberSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
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
    class Class;
    class Object;
    class Number;
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

            class DoubleConstValueSource : public ::org::apache::lucene::queries::function::valuesource::ConstNumberSource {
            public:
              enum {
                mid_init$_5d1c7645,
                mid_description_14c7b5c5,
                mid_equals_290588e2,
                mid_getBool_54c6a16a,
                mid_getDouble_54c6a174,
                mid_getFloat_54c6a176,
                mid_getInt_54c6a179,
                mid_getLong_54c6a17a,
                mid_getNumber_ee47e3e1,
                mid_getValues_4c566485,
                mid_hashCode_54c6a179,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DoubleConstValueSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::ConstNumberSource(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              DoubleConstValueSource(const DoubleConstValueSource& obj) : ::org::apache::lucene::queries::function::valuesource::ConstNumberSource(obj) {}

              DoubleConstValueSource(jdouble);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              jboolean getBool() const;
              jdouble getDouble() const;
              jfloat getFloat() const;
              jint getInt() const;
              jlong getLong() const;
              ::java::lang::Number getNumber() const;
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
            extern PyTypeObject PY_TYPE(DoubleConstValueSource);

            class t_DoubleConstValueSource {
            public:
              PyObject_HEAD
              DoubleConstValueSource object;
              static PyObject *wrap_Object(const DoubleConstValueSource&);
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
