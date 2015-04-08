#ifndef org_apache_lucene_util_ThreadInterruptedException_H
#define org_apache_lucene_util_ThreadInterruptedException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class Class;
    class InterruptedException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ThreadInterruptedException : public ::java::lang::RuntimeException {
        public:
          enum {
            mid_init$_f201c224,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ThreadInterruptedException(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ThreadInterruptedException(const ThreadInterruptedException& obj) : ::java::lang::RuntimeException(obj) {}

          ThreadInterruptedException(const ::java::lang::InterruptedException &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(ThreadInterruptedException);

        class t_ThreadInterruptedException {
        public:
          PyObject_HEAD
          ThreadInterruptedException object;
          static PyObject *wrap_Object(const ThreadInterruptedException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
