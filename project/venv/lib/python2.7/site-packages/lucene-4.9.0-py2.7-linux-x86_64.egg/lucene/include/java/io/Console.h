#ifndef java_io_Console_H
#define java_io_Console_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class PrintWriter;
    class Reader;
    class Flushable;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class Console : public ::java::lang::Object {
    public:
      enum {
        mid_flush_54c6a166,
        mid_format_3c4933b2,
        mid_printf_3c4933b2,
        mid_readLine_14c7b5c5,
        mid_readLine_0fb26e3b,
        mid_readPassword_dab10e7f,
        mid_readPassword_72dac4c1,
        mid_reader_b6f16bdd,
        mid_writer_97b003a9,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Console(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Console(const Console& obj) : ::java::lang::Object(obj) {}

      void flush() const;
      Console format(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      Console printf(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      ::java::lang::String readLine() const;
      ::java::lang::String readLine(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      JArray< jchar > readPassword() const;
      JArray< jchar > readPassword(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      ::java::io::Reader reader() const;
      ::java::io::PrintWriter writer() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyTypeObject PY_TYPE(Console);

    class t_Console {
    public:
      PyObject_HEAD
      Console object;
      static PyObject *wrap_Object(const Console&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
