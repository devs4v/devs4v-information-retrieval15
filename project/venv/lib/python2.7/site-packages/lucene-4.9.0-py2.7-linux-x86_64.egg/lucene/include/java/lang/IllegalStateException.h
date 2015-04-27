#ifndef java_lang_IllegalStateException_H
#define java_lang_IllegalStateException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class Throwable;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class IllegalStateException : public ::java::lang::RuntimeException {
    public:
      enum {
        mid_init$_54c6a166,
        mid_init$_c5ec8ca4,
        mid_init$_5fdc3f48,
        mid_init$_01646a2e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit IllegalStateException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      IllegalStateException(const IllegalStateException& obj) : ::java::lang::RuntimeException(obj) {}

      IllegalStateException();
      IllegalStateException(const ::java::lang::Throwable &);
      IllegalStateException(const ::java::lang::String &);
      IllegalStateException(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyTypeObject PY_TYPE(IllegalStateException);

    class t_IllegalStateException {
    public:
      PyObject_HEAD
      IllegalStateException object;
      static PyObject *wrap_Object(const IllegalStateException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
