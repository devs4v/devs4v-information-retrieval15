#ifndef java_util_concurrent_ScheduledFuture_H
#define java_util_concurrent_ScheduledFuture_H

#include "java/util/concurrent/Delayed.h"

namespace java {
  namespace util {
    namespace concurrent {
      class Future;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class ScheduledFuture : public ::java::util::concurrent::Delayed {
      public:

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ScheduledFuture(jobject obj) : ::java::util::concurrent::Delayed(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        ScheduledFuture(const ScheduledFuture& obj) : ::java::util::concurrent::Delayed(obj) {}
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyTypeObject PY_TYPE(ScheduledFuture);

      class t_ScheduledFuture {
      public:
        PyObject_HEAD
        ScheduledFuture object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_ScheduledFuture *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ScheduledFuture&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ScheduledFuture&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
