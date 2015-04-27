#ifndef java_io_FileInputStream_H
#define java_io_FileInputStream_H

#include "java/io/InputStream.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class FileDescriptor;
    class IOException;
    class File;
    class FileNotFoundException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class FileInputStream : public ::java::io::InputStream {
    public:
      enum {
        mid_init$_c3dacf57,
        mid_init$_5fdc3f48,
        mid_init$_698067a0,
        mid_available_54c6a179,
        mid_close_54c6a166,
        mid_getFD_94738b01,
        mid_read_54c6a179,
        mid_read_49b4f134,
        mid_read_86f44340,
        mid_skip_0ee6df33,
        mid_finalize_54c6a166,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit FileInputStream(jobject obj) : ::java::io::InputStream(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      FileInputStream(const FileInputStream& obj) : ::java::io::InputStream(obj) {}

      FileInputStream(const ::java::io::File &);
      FileInputStream(const ::java::lang::String &);
      FileInputStream(const ::java::io::FileDescriptor &);

      jint available() const;
      void close() const;
      ::java::io::FileDescriptor getFD() const;
      jint read() const;
      jint read(const JArray< jbyte > &) const;
      jint read(const JArray< jbyte > &, jint, jint) const;
      jlong skip(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyTypeObject PY_TYPE(FileInputStream);

    class t_FileInputStream {
    public:
      PyObject_HEAD
      FileInputStream object;
      static PyObject *wrap_Object(const FileInputStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
