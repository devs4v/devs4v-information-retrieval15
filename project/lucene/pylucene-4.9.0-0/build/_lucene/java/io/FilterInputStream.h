#ifndef java_io_FilterInputStream_H
#define java_io_FilterInputStream_H

#include "java/io/InputStream.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class FilterInputStream : public ::java::io::InputStream {
    public:
      enum {
        mid_available_54c6a179,
        mid_close_54c6a166,
        mid_mark_39c7bd3c,
        mid_markSupported_54c6a16a,
        mid_read_54c6a179,
        mid_read_49b4f134,
        mid_read_86f44340,
        mid_reset_54c6a166,
        mid_skip_0ee6df33,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit FilterInputStream(jobject obj) : ::java::io::InputStream(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      FilterInputStream(const FilterInputStream& obj) : ::java::io::InputStream(obj) {}

      jint available() const;
      void close() const;
      void mark(jint) const;
      jboolean markSupported() const;
      jint read() const;
      jint read(const JArray< jbyte > &) const;
      jint read(const JArray< jbyte > &, jint, jint) const;
      void reset() const;
      jlong skip(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyTypeObject PY_TYPE(FilterInputStream);

    class t_FilterInputStream {
    public:
      PyObject_HEAD
      FilterInputStream object;
      static PyObject *wrap_Object(const FilterInputStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
