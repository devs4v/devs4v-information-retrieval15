#ifndef org_apache_lucene_queries_function_valuesource_ConstNumberSource_H
#define org_apache_lucene_queries_function_valuesource_ConstNumberSource_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace java {
  namespace lang {
    class Number;
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

            class ConstNumberSource : public ::org::apache::lucene::queries::function::ValueSource {
            public:
              enum {
                mid_init$_54c6a166,
                mid_getBool_54c6a16a,
                mid_getDouble_54c6a174,
                mid_getFloat_54c6a176,
                mid_getInt_54c6a179,
                mid_getLong_54c6a17a,
                mid_getNumber_ee47e3e1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ConstNumberSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              ConstNumberSource(const ConstNumberSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              ConstNumberSource();

              jboolean getBool() const;
              jdouble getDouble() const;
              jfloat getFloat() const;
              jint getInt() const;
              jlong getLong() const;
              ::java::lang::Number getNumber() const;
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
            extern PyTypeObject PY_TYPE(ConstNumberSource);

            class t_ConstNumberSource {
            public:
              PyObject_HEAD
              ConstNumberSource object;
              static PyObject *wrap_Object(const ConstNumberSource&);
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
