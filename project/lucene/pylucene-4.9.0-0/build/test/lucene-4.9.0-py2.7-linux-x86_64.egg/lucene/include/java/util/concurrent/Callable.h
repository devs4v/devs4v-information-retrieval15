#ifndef java_util_concurrent_Callable_H
#define java_util_concurrent_Callable_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Exception;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class Callable : public ::java::lang::Object {
      public:
        enum {
          mid_call_846352c3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Callable(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        Callable(const Callable& obj) : ::java::lang::Object(obj) {}

        ::java::lang::Object call() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyTypeObject PY_TYPE(Callable);

      class t_Callable {
      public:
        PyObject_HEAD
        Callable object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Callable *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Callable&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Callable&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
