#ifndef java_util_concurrent_Future_H
#define java_util_concurrent_Future_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class Class;
  }
  namespace util {
    namespace concurrent {
      class TimeUnit;
      class TimeoutException;
      class ExecutionException;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class Future : public ::java::lang::Object {
      public:
        enum {
          mid_cancel_bb0c7673,
          mid_get_846352c3,
          mid_get_c84b4f45,
          mid_isCancelled_54c6a16a,
          mid_isDone_54c6a16a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Future(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        Future(const Future& obj) : ::java::lang::Object(obj) {}

        jboolean cancel(jboolean) const;
        ::java::lang::Object get() const;
        ::java::lang::Object get(jlong, const ::java::util::concurrent::TimeUnit &) const;
        jboolean isCancelled() const;
        jboolean isDone() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyTypeObject PY_TYPE(Future);

      class t_Future {
      public:
        PyObject_HEAD
        Future object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Future *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Future&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Future&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
