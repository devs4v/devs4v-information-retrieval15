#ifndef java_lang_IndexOutOfBoundsException_H
#define java_lang_IndexOutOfBoundsException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class IndexOutOfBoundsException : public ::java::lang::RuntimeException {
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

      explicit IndexOutOfBoundsException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      IndexOutOfBoundsException(const IndexOutOfBoundsException& obj) : ::java::lang::RuntimeException(obj) {}

      IndexOutOfBoundsException();
      IndexOutOfBoundsException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyTypeObject PY_TYPE(IndexOutOfBoundsException);

    class t_IndexOutOfBoundsException {
    public:
      PyObject_HEAD
      IndexOutOfBoundsException object;
      static PyObject *wrap_Object(const IndexOutOfBoundsException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
