#ifndef java_lang_CloneNotSupportedException_H
#define java_lang_CloneNotSupportedException_H

#include "java/lang/Exception.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class CloneNotSupportedException : public ::java::lang::Exception {
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

      explicit CloneNotSupportedException(jobject obj) : ::java::lang::Exception(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      CloneNotSupportedException(const CloneNotSupportedException& obj) : ::java::lang::Exception(obj) {}

      CloneNotSupportedException();
      CloneNotSupportedException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyTypeObject PY_TYPE(CloneNotSupportedException);

    class t_CloneNotSupportedException {
    public:
      PyObject_HEAD
      CloneNotSupportedException object;
      static PyObject *wrap_Object(const CloneNotSupportedException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
