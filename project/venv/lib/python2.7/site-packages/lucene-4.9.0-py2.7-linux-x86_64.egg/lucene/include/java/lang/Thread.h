#ifndef java_lang_Thread_H
#define java_lang_Thread_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ThreadGroup;
    class Runnable;
    class String;
    class Thread$State;
    class ClassLoader;
    class Thread$UncaughtExceptionHandler;
    class InterruptedException;
    class StackTraceElement;
    class Throwable;
    class Class;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Thread : public ::java::lang::Object {
    public:
      enum {
        mid_init$_54c6a166,
        mid_init$_db86d7e2,
        mid_init$_5fdc3f48,
        mid_init$_749aa364,
        mid_init$_88a58d93,
        mid_init$_684615b9,
        mid_init$_5db621bb,
        mid_init$_57d87d50,
        mid_activeCount_54c6a179,
        mid_checkAccess_54c6a166,
        mid_countStackFrames_54c6a179,
        mid_currentThread_88082f50,
        mid_destroy_54c6a166,
        mid_dumpStack_54c6a166,
        mid_enumerate_9e0743ee,
        mid_getAllStackTraces_db60befd,
        mid_getContextClassLoader_8d2f11fc,
        mid_getDefaultUncaughtExceptionHandler_a65feb9b,
        mid_getId_54c6a17a,
        mid_getName_14c7b5c5,
        mid_getPriority_54c6a179,
        mid_getStackTrace_25f1f6aa,
        mid_getState_bbff3c63,
        mid_getThreadGroup_172b52b4,
        mid_getUncaughtExceptionHandler_a65feb9b,
        mid_holdsLock_290588e2,
        mid_interrupt_54c6a166,
        mid_interrupted_54c6a16a,
        mid_isAlive_54c6a16a,
        mid_isDaemon_54c6a16a,
        mid_isInterrupted_54c6a16a,
        mid_join_54c6a166,
        mid_join_0ee6df2f,
        mid_join_25d05c8f,
        mid_resume_54c6a166,
        mid_run_54c6a166,
        mid_setContextClassLoader_9110048d,
        mid_setDaemon_bb0c767f,
        mid_setDefaultUncaughtExceptionHandler_4dc005b2,
        mid_setName_5fdc3f48,
        mid_setPriority_39c7bd3c,
        mid_setUncaughtExceptionHandler_4dc005b2,
        mid_sleep_0ee6df2f,
        mid_sleep_25d05c8f,
        mid_start_54c6a166,
        mid_stop_54c6a166,
        mid_stop_c5ec8ca4,
        mid_suspend_54c6a166,
        mid_toString_14c7b5c5,
        mid_yield_54c6a166,
        mid_clone_846352c3,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Thread(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Thread(const Thread& obj) : ::java::lang::Object(obj) {}

      static jint MAX_PRIORITY;
      static jint MIN_PRIORITY;
      static jint NORM_PRIORITY;

      Thread();
      Thread(const ::java::lang::Runnable &);
      Thread(const ::java::lang::String &);
      Thread(const ::java::lang::Runnable &, const ::java::lang::String &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::String &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &, const ::java::lang::String &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &, const ::java::lang::String &, jlong);

      static jint activeCount();
      void checkAccess() const;
      jint countStackFrames() const;
      static Thread currentThread();
      void destroy() const;
      static void dumpStack();
      static jint enumerate(const JArray< Thread > &);
      static ::java::util::Map getAllStackTraces();
      ::java::lang::ClassLoader getContextClassLoader() const;
      static ::java::lang::Thread$UncaughtExceptionHandler getDefaultUncaughtExceptionHandler();
      jlong getId() const;
      ::java::lang::String getName() const;
      jint getPriority() const;
      JArray< ::java::lang::StackTraceElement > getStackTrace() const;
      ::java::lang::Thread$State getState() const;
      ::java::lang::ThreadGroup getThreadGroup() const;
      ::java::lang::Thread$UncaughtExceptionHandler getUncaughtExceptionHandler() const;
      static jboolean holdsLock(const ::java::lang::Object &);
      void interrupt() const;
      static jboolean interrupted();
      jboolean isAlive() const;
      jboolean isDaemon() const;
      jboolean isInterrupted() const;
      void join() const;
      void join(jlong) const;
      void join(jlong, jint) const;
      void resume() const;
      void run() const;
      void setContextClassLoader(const ::java::lang::ClassLoader &) const;
      void setDaemon(jboolean) const;
      static void setDefaultUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler &);
      void setName(const ::java::lang::String &) const;
      void setPriority(jint) const;
      void setUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler &) const;
      static void sleep(jlong);
      static void sleep(jlong, jint);
      void start() const;
      void stop() const;
      void stop(const ::java::lang::Throwable &) const;
      void suspend() const;
      ::java::lang::String toString() const;
      static void yield();
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyTypeObject PY_TYPE(Thread);

    class t_Thread {
    public:
      PyObject_HEAD
      Thread object;
      static PyObject *wrap_Object(const Thread&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
