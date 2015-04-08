#ifndef java_lang_UnsupportedOperationException_H
#define java_lang_UnsupportedOperationException_H

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

    class UnsupportedOperationException : public ::java::lang::RuntimeException {
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

      explicit UnsupportedOperationException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      UnsupportedOperationException(const UnsupportedOperationException& obj) : ::java::lang::RuntimeException(obj) {}

      UnsupportedOperationException();
      UnsupportedOperationException(const ::java::lang::Throwable &);
      UnsupportedOperationException(const ::java::lang::String &);
      UnsupportedOperationException(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyTypeObject PY_TYPE(UnsupportedOperationException);

    class t_UnsupportedOperationException {
    public:
      PyObject_HEAD
      UnsupportedOperationException object;
      static PyObject *wrap_Object(const UnsupportedOperationException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
