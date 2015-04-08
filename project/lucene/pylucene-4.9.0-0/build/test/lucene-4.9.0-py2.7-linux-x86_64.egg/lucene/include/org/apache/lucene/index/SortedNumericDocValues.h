#ifndef org_apache_lucene_index_SortedNumericDocValues_H
#define org_apache_lucene_index_SortedNumericDocValues_H

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

        class SortedNumericDocValues : public ::java::lang::Object {
        public:
          enum {
            mid_count_54c6a179,
            mid_setDocument_39c7bd3c,
            mid_valueAt_39c7bd20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedNumericDocValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SortedNumericDocValues(const SortedNumericDocValues& obj) : ::java::lang::Object(obj) {}

          jint count() const;
          void setDocument(jint) const;
          jlong valueAt(jint) const;
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
        extern PyTypeObject PY_TYPE(SortedNumericDocValues);

        class t_SortedNumericDocValues {
        public:
          PyObject_HEAD
          SortedNumericDocValues object;
          static PyObject *wrap_Object(const SortedNumericDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
