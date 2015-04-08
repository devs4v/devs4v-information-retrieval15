#ifndef java_lang_ThreadGroup_H
#define java_lang_ThreadGroup_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Thread$UncaughtExceptionHandler;
    class Class;
    class Thread;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ThreadGroup : public ::java::lang::Object {
    public:
      enum {
        mid_init$_5fdc3f48,
        mid_init$_88a58d93,
        mid_activeCount_54c6a179,
        mid_activeGroupCount_54c6a179,
        mid_allowThreadSuspension_bb0c7673,
        mid_checkAccess_54c6a166,
        mid_destroy_54c6a166,
        mid_enumerate_35b7859e,
        mid_enumerate_9e0743ee,
        mid_enumerate_84f00d0d,
        mid_enumerate_63f523b1,
        mid_getMaxPriority_54c6a179,
        mid_getName_14c7b5c5,
        mid_getParent_172b52b4,
        mid_interrupt_54c6a166,
        mid_isDaemon_54c6a16a,
        mid_isDestroyed_54c6a16a,
        mid_list_54c6a166,
        mid_parentOf_a2f3727d,
        mid_resume_54c6a166,
        mid_setDaemon_bb0c767f,
        mid_setMaxPriority_39c7bd3c,
        mid_stop_54c6a166,
        mid_suspend_54c6a166,
        mid_toString_14c7b5c5,
        mid_uncaughtException_3fb653f5,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ThreadGroup(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      ThreadGroup(const ThreadGroup& obj) : ::java::lang::Object(obj) {}

      ThreadGroup(const ::java::lang::String &);
      ThreadGroup(const ThreadGroup &, const ::java::lang::String &);

      jint activeCount() const;
      jint activeGroupCount() const;
      jboolean allowThreadSuspension(jboolean) const;
      void checkAccess() const;
      void destroy() const;
      jint enumerate(const JArray< ThreadGroup > &) const;
      jint enumerate(const JArray< ::java::lang::Thread > &) const;
      jint enumerate(const JArray< ::java::lang::Thread > &, jboolean) const;
      jint enumerate(const JArray< ThreadGroup > &, jboolean) const;
      jint getMaxPriority() const;
      ::java::lang::String getName() const;
      ThreadGroup getParent() const;
      void interrupt() const;
      jboolean isDaemon() const;
      jboolean isDestroyed() const;
      void list() const;
      jboolean parentOf(const ThreadGroup &) const;
      void resume() const;
      void setDaemon(jboolean) const;
      void setMaxPriority(jint) const;
      void stop() const;
      void suspend() const;
      ::java::lang::String toString() const;
      void uncaughtException(const ::java::lang::Thread &, const ::java::lang::Throwable &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyTypeObject PY_TYPE(ThreadGroup);

    class t_ThreadGroup {
    public:
      PyObject_HEAD
      ThreadGroup object;
      static PyObject *wrap_Object(const ThreadGroup&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
