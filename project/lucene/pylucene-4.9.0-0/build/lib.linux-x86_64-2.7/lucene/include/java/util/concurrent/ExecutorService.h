#ifndef java_util_concurrent_ExecutorService_H
#define java_util_concurrent_ExecutorService_H

#include "java/util/concurrent/Executor.h"

namespace java {
  namespace lang {
    class Object;
    class Runnable;
    class Class;
    class InterruptedException;
  }
  namespace util {
    namespace concurrent {
      class Callable;
      class TimeUnit;
      class Future;
      class TimeoutException;
      class ExecutionException;
    }
    class List;
    class Collection;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class ExecutorService : public ::java::util::concurrent::Executor {
      public:
        enum {
          mid_awaitTermination_fbc02d9c,
          mid_invokeAll_45da4547,
          mid_invokeAll_616dd5f5,
          mid_invokeAny_abd1a366,
          mid_invokeAny_8e75d774,
          mid_isShutdown_54c6a16a,
          mid_isTerminated_54c6a16a,
          mid_shutdown_54c6a166,
          mid_shutdownNow_87851566,
          mid_submit_199c4330,
          mid_submit_db132cea,
          mid_submit_22e78fbc,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ExecutorService(jobject obj) : ::java::util::concurrent::Executor(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        ExecutorService(const ExecutorService& obj) : ::java::util::concurrent::Executor(obj) {}

        jboolean awaitTermination(jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::util::List invokeAll(const ::java::util::Collection &) const;
        ::java::util::List invokeAll(const ::java::util::Collection &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::lang::Object invokeAny(const ::java::util::Collection &) const;
        ::java::lang::Object invokeAny(const ::java::util::Collection &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        jboolean isShutdown() const;
        jboolean isTerminated() const;
        void shutdown() const;
        ::java::util::List shutdownNow() const;
        ::java::util::concurrent::Future submit(const ::java::lang::Runnable &) const;
        ::java::util::concurrent::Future submit(const ::java::util::concurrent::Callable &) const;
        ::java::util::concurrent::Future submit(const ::java::lang::Runnable &, const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyTypeObject PY_TYPE(ExecutorService);

      class t_ExecutorService {
      public:
        PyObject_HEAD
        ExecutorService object;
        static PyObject *wrap_Object(const ExecutorService&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
