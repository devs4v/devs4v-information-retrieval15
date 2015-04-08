#ifndef java_lang_Runtime_H
#define java_lang_Runtime_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Process;
    class String;
    class Thread;
    class Class;
  }
  namespace io {
    class OutputStream;
    class IOException;
    class File;
    class InputStream;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Runtime : public ::java::lang::Object {
    public:
      enum {
        mid_addShutdownHook_cfc68b69,
        mid_availableProcessors_54c6a179,
        mid_exec_cb215688,
        mid_exec_a3a0dfc8,
        mid_exec_d0c45a12,
        mid_exec_dfe32e32,
        mid_exec_e1ed077f,
        mid_exec_5726a223,
        mid_exit_39c7bd3c,
        mid_freeMemory_54c6a17a,
        mid_gc_54c6a166,
        mid_getLocalizedInputStream_04932eef,
        mid_getLocalizedOutputStream_97714a3f,
        mid_getRuntime_620bf90f,
        mid_halt_39c7bd3c,
        mid_load_5fdc3f48,
        mid_loadLibrary_5fdc3f48,
        mid_maxMemory_54c6a17a,
        mid_removeShutdownHook_cfc68b65,
        mid_runFinalization_54c6a166,
        mid_runFinalizersOnExit_bb0c767f,
        mid_totalMemory_54c6a17a,
        mid_traceInstructions_bb0c767f,
        mid_traceMethodCalls_bb0c767f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Runtime(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Runtime(const Runtime& obj) : ::java::lang::Object(obj) {}

      void addShutdownHook(const ::java::lang::Thread &) const;
      jint availableProcessors() const;
      ::java::lang::Process exec(const JArray< ::java::lang::String > &) const;
      ::java::lang::Process exec(const ::java::lang::String &) const;
      ::java::lang::Process exec(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &) const;
      ::java::lang::Process exec(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
      ::java::lang::Process exec(const ::java::lang::String &, const JArray< ::java::lang::String > &, const ::java::io::File &) const;
      ::java::lang::Process exec(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::java::io::File &) const;
      void exit(jint) const;
      jlong freeMemory() const;
      void gc() const;
      ::java::io::InputStream getLocalizedInputStream(const ::java::io::InputStream &) const;
      ::java::io::OutputStream getLocalizedOutputStream(const ::java::io::OutputStream &) const;
      static Runtime getRuntime();
      void halt(jint) const;
      void load(const ::java::lang::String &) const;
      void loadLibrary(const ::java::lang::String &) const;
      jlong maxMemory() const;
      jboolean removeShutdownHook(const ::java::lang::Thread &) const;
      void runFinalization() const;
      static void runFinalizersOnExit(jboolean);
      jlong totalMemory() const;
      void traceInstructions(jboolean) const;
      void traceMethodCalls(jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyTypeObject PY_TYPE(Runtime);

    class t_Runtime {
    public:
      PyObject_HEAD
      Runtime object;
      static PyObject *wrap_Object(const Runtime&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
