#ifndef java_io_InputStreamReader_H
#define java_io_InputStreamReader_H

#include "java/io/Reader.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class UnsupportedEncodingException;
    class IOException;
    class InputStream;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class InputStreamReader : public ::java::io::Reader {
    public:
      enum {
        mid_init$_be2e4f90,
        mid_init$_32277d42,
        mid_close_54c6a166,
        mid_getEncoding_14c7b5c5,
        mid_read_54c6a179,
        mid_read_6f0bb349,
        mid_ready_54c6a16a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit InputStreamReader(jobject obj) : ::java::io::Reader(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      InputStreamReader(const InputStreamReader& obj) : ::java::io::Reader(obj) {}

      InputStreamReader(const ::java::io::InputStream &);
      InputStreamReader(const ::java::io::InputStream &, const ::java::lang::String &);

      void close() const;
      ::java::lang::String getEncoding() const;
      jint read() const;
      jint read(const JArray< jchar > &, jint, jint) const;
      jboolean ready() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyTypeObject PY_TYPE(InputStreamReader);

    class t_InputStreamReader {
    public:
      PyObject_HEAD
      InputStreamReader object;
      static PyObject *wrap_Object(const InputStreamReader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
