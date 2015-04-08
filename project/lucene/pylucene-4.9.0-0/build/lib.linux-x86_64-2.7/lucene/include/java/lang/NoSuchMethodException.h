#ifndef java_lang_NoSuchMethodException_H
#define java_lang_NoSuchMethodException_H

#include "java/lang/ReflectiveOperationException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class NoSuchMethodException : public ::java::lang::ReflectiveOperationException {
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

      explicit NoSuchMethodException(jobject obj) : ::java::lang::ReflectiveOperationException(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      NoSuchMethodException(const NoSuchMethodException& obj) : ::java::lang::ReflectiveOperationException(obj) {}

      NoSuchMethodException();
      NoSuchMethodException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyTypeObject PY_TYPE(NoSuchMethodException);

    class t_NoSuchMethodException {
    public:
      PyObject_HEAD
      NoSuchMethodException object;
      static PyObject *wrap_Object(const NoSuchMethodException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
