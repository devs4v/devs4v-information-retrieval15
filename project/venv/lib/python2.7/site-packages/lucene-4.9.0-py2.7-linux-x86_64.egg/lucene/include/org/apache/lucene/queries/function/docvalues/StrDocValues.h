#ifndef org_apache_lucene_queries_function_docvalues_StrDocValues_H
#define org_apache_lucene_queries_function_docvalues_StrDocValues_H

#include "org/apache/lucene/queries/function/FunctionValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class FunctionValues$ValueFiller;
          class ValueSource;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace docvalues {

            class StrDocValues : public ::org::apache::lucene::queries::function::FunctionValues {
            public:
              enum {
                mid_init$_ca78fe7a,
                mid_boolVal_39c7bd30,
                mid_getValueFiller_7731f0bd,
                mid_objectVal_29be6a55,
                mid_strVal_141401b3,
                mid_toString_141401b3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit StrDocValues(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              StrDocValues(const StrDocValues& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              StrDocValues(const ::org::apache::lucene::queries::function::ValueSource &);

              jboolean boolVal(jint) const;
              ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
              ::java::lang::Object objectVal(jint) const;
              ::java::lang::String strVal(jint) const;
              ::java::lang::String toString(jint) const;
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
          namespace docvalues {
            extern PyTypeObject PY_TYPE(StrDocValues);

            class t_StrDocValues {
            public:
              PyObject_HEAD
              StrDocValues object;
              static PyObject *wrap_Object(const StrDocValues&);
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
