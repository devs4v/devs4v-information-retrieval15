#ifndef org_apache_lucene_index_NumericDocValues_H
#define org_apache_lucene_index_NumericDocValues_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class NumericDocValues : public ::java::lang::Object {
        public:
          enum {
            mid_get_39c7bd20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericDocValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NumericDocValues(const NumericDocValues& obj) : ::java::lang::Object(obj) {}

          jlong get(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(NumericDocValues);

        class t_NumericDocValues {
        public:
          PyObject_HEAD
          NumericDocValues object;
          static PyObject *wrap_Object(const NumericDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
