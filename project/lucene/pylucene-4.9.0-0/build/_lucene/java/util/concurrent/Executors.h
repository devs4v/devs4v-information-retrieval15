#ifndef java_util_concurrent_Executors_H
#define java_util_concurrent_Executors_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class Class;
  }
  namespace util {
    namespace concurrent {
      class Callable;
      class ExecutorService;
      class ThreadFactory;
      class ScheduledExecutorService;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class Executors : public ::java::lang::Object {
      public:
        enum {
          mid_callable_a93e49d5,
          mid_callable_27f60351,
          mid_defaultThreadFactory_1a8a37c6,
          mid_newCachedThreadPool_7959084a,
          mid_newCachedThreadPool_ef1f74b9,
          mid_newFixedThreadPool_8e681bb4,
          mid_newFixedThreadPool_366a7197,
          mid_newScheduledThreadPool_86106422,
          mid_newScheduledThreadPool_6380c25f,
          mid_newSingleThreadExecutor_7959084a,
          mid_newSingleThreadExecutor_ef1f74b9,
          mid_newSingleThreadScheduledExecutor_2e78bbb0,
          mid_newSingleThreadScheduledExecutor_e92dd26d,
          mid_privilegedCallable_9221e3a3,
          mid_privilegedCallableUsingCurrentClassLoader_9221e3a3,
          mid_privilegedThreadFactory_1a8a37c6,
          mid_unconfigurableExecutorService_d4c55b25,
          mid_unconfigurableScheduledExecutorService_afd7b7c3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Executors(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        Executors(const Executors& obj) : ::java::lang::Object(obj) {}

        static ::java::util::concurrent::Callable callable(const ::java::lang::Runnable &);
        static ::java::util::concurrent::Callable callable(const ::java::lang::Runnable &, const ::java::lang::Object &);
        static ::java::util::concurrent::ThreadFactory defaultThreadFactory();
        static ::java::util::concurrent::ExecutorService newCachedThreadPool();
        static ::java::util::concurrent::ExecutorService newCachedThreadPool(const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ExecutorService newFixedThreadPool(jint);
        static ::java::util::concurrent::ExecutorService newFixedThreadPool(jint, const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ScheduledExecutorService newScheduledThreadPool(jint);
        static ::java::util::concurrent::ScheduledExecutorService newScheduledThreadPool(jint, const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ExecutorService newSingleThreadExecutor();
        static ::java::util::concurrent::ExecutorService newSingleThreadExecutor(const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ScheduledExecutorService newSingleThreadScheduledExecutor();
        static ::java::util::concurrent::ScheduledExecutorService newSingleThreadScheduledExecutor(const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::Callable privilegedCallable(const ::java::util::concurrent::Callable &);
        static ::java::util::concurrent::Callable privilegedCallableUsingCurrentClassLoader(const ::java::util::concurrent::Callable &);
        static ::java::util::concurrent::ThreadFactory privilegedThreadFactory();
        static ::java::util::concurrent::ExecutorService unconfigurableExecutorService(const ::java::util::concurrent::ExecutorService &);
        static ::java::util::concurrent::ScheduledExecutorService unconfigurableScheduledExecutorService(const ::java::util::concurrent::ScheduledExecutorService &);
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyTypeObject PY_TYPE(Executors);

      class t_Executors {
      public:
        PyObject_HEAD
        Executors object;
        static PyObject *wrap_Object(const Executors&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
