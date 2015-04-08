#ifndef java_util_concurrent_ScheduledExecutorService_H
#define java_util_concurrent_ScheduledExecutorService_H

#include "java/util/concurrent/ExecutorService.h"

namespace java {
  namespace lang {
    class Object;
    class Runnable;
    class Class;
  }
  namespace util {
    namespace concurrent {
      class Callable;
      class TimeUnit;
      class ScheduledFuture;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class ScheduledExecutorService : public ::java::util::concurrent::ExecutorService {
      public:
        enum {
          mid_schedule_0702f9d2,
          mid_schedule_f9e9c274,
          mid_scheduleAtFixedRate_8a0e1fdb,
          mid_scheduleWithFixedDelay_8a0e1fdb,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ScheduledExecutorService(jobject obj) : ::java::util::concurrent::ExecutorService(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        ScheduledExecutorService(const ScheduledExecutorService& obj) : ::java::util::concurrent::ExecutorService(obj) {}

        ::java::util::concurrent::ScheduledFuture schedule(const ::java::util::concurrent::Callable &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::util::concurrent::ScheduledFuture schedule(const ::java::lang::Runnable &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::util::concurrent::ScheduledFuture scheduleAtFixedRate(const ::java::lang::Runnable &, jlong, jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::util::concurrent::ScheduledFuture scheduleWithFixedDelay(const ::java::lang::Runnable &, jlong, jlong, const ::java::util::concurrent::TimeUnit &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyTypeObject PY_TYPE(ScheduledExecutorService);

      class t_ScheduledExecutorService {
      public:
        PyObject_HEAD
        ScheduledExecutorService object;
        static PyObject *wrap_Object(const ScheduledExecutorService&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
