#ifndef org_apache_lucene_store_AlreadyClosedException_H
#define org_apache_lucene_store_AlreadyClosedException_H

#include "java/lang/IllegalStateException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class AlreadyClosedException : public ::java::lang::IllegalStateException {
        public:
          enum {
            mid_init$_5fdc3f48,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AlreadyClosedException(jobject obj) : ::java::lang::IllegalStateException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          AlreadyClosedException(const AlreadyClosedException& obj) : ::java::lang::IllegalStateException(obj) {}

          AlreadyClosedException(const ::java::lang::String &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyTypeObject PY_TYPE(AlreadyClosedException);

        class t_AlreadyClosedException {
        public:
          PyObject_HEAD
          AlreadyClosedException object;
          static PyObject *wrap_Object(const AlreadyClosedException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
