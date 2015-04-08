#ifndef java_util_NoSuchElementException_H
#define java_util_NoSuchElementException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class NoSuchElementException : public ::java::lang::RuntimeException {
    public:
      enum {
        mid_init$_54c6a166,
        mid_init$_5fdc3f48,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NoSuchElementException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      NoSuchElementException(const NoSuchElementException& obj) : ::java::lang::RuntimeException(obj) {}

      NoSuchElementException();
      NoSuchElementException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(NoSuchElementException);

    class t_NoSuchElementException {
    public:
      PyObject_HEAD
      NoSuchElementException object;
      static PyObject *wrap_Object(const NoSuchElementException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
