#ifndef java_lang_Process_H
#define java_lang_Process_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class Class;
  }
  namespace io {
    class OutputStream;
    class InputStream;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Process : public ::java::lang::Object {
    public:
      enum {
        mid_init$_54c6a166,
        mid_destroy_54c6a166,
        mid_exitValue_54c6a179,
        mid_getErrorStream_85fe05dd,
        mid_getInputStream_85fe05dd,
        mid_getOutputStream_b8460445,
        mid_waitFor_54c6a179,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Process(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Process(const Process& obj) : ::java::lang::Object(obj) {}

      Process();

      void destroy() const;
      jint exitValue() const;
      ::java::io::InputStream getErrorStream() const;
      ::java::io::InputStream getInputStream() const;
      ::java::io::OutputStream getOutputStream() const;
      jint waitFor() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyTypeObject PY_TYPE(Process);

    class t_Process {
    public:
      PyObject_HEAD
      Process object;
      static PyObject *wrap_Object(const Process&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
