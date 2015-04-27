#ifndef java_lang_System_H
#define java_lang_System_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class SecurityManager;
    class Class;
    class String;
  }
  namespace util {
    class Map;
    class Properties;
  }
  namespace io {
    class Console;
    class PrintStream;
    class InputStream;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class System : public ::java::lang::Object {
    public:
      enum {
        mid_arraycopy_8bcf5170,
        mid_clearProperty_97a5258f,
        mid_console_d6171648,
        mid_currentTimeMillis_54c6a17a,
        mid_exit_39c7bd3c,
        mid_gc_54c6a166,
        mid_getProperties_7e96414d,
        mid_getProperty_97a5258f,
        mid_getProperty_aacea7e9,
        mid_getSecurityManager_0361f9be,
        mid_getenv_db60befd,
        mid_getenv_97a5258f,
        mid_identityHashCode_290588f1,
        mid_lineSeparator_14c7b5c5,
        mid_load_5fdc3f48,
        mid_loadLibrary_5fdc3f48,
        mid_mapLibraryName_97a5258f,
        mid_nanoTime_54c6a17a,
        mid_runFinalization_54c6a166,
        mid_runFinalizersOnExit_bb0c767f,
        mid_setErr_1b7c898b,
        mid_setIn_be2e4f90,
        mid_setOut_1b7c898b,
        mid_setProperties_c4afb15c,
        mid_setProperty_aacea7e9,
        mid_setSecurityManager_c35b0b0b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit System(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      System(const System& obj) : ::java::lang::Object(obj) {}

      static ::java::io::PrintStream *err;
      static ::java::io::InputStream *in;
      static ::java::io::PrintStream *out;

      static void arraycopy(const ::java::lang::Object &, jint, const ::java::lang::Object &, jint, jint);
      static ::java::lang::String clearProperty(const ::java::lang::String &);
      static ::java::io::Console console();
      static jlong currentTimeMillis();
      static void exit(jint);
      static void gc();
      static ::java::util::Properties getProperties();
      static ::java::lang::String getProperty(const ::java::lang::String &);
      static ::java::lang::String getProperty(const ::java::lang::String &, const ::java::lang::String &);
      static ::java::lang::SecurityManager getSecurityManager();
      static ::java::util::Map getenv();
      static ::java::lang::String getenv(const ::java::lang::String &);
      static jint identityHashCode(const ::java::lang::Object &);
      static ::java::lang::String lineSeparator();
      static void load(const ::java::lang::String &);
      static void loadLibrary(const ::java::lang::String &);
      static ::java::lang::String mapLibraryName(const ::java::lang::String &);
      static jlong nanoTime();
      static void runFinalization();
      static void runFinalizersOnExit(jboolean);
      static void setErr(const ::java::io::PrintStream &);
      static void setIn(const ::java::io::InputStream &);
      static void setOut(const ::java::io::PrintStream &);
      static void setProperties(const ::java::util::Properties &);
      static ::java::lang::String setProperty(const ::java::lang::String &, const ::java::lang::String &);
      static void setSecurityManager(const ::java::lang::SecurityManager &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyTypeObject PY_TYPE(System);

    class t_System {
    public:
      PyObject_HEAD
      System object;
      static PyObject *wrap_Object(const System&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
