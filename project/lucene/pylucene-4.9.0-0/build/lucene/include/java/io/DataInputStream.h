#ifndef java_io_DataInputStream_H
#define java_io_DataInputStream_H

#include "java/io/FilterInputStream.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
    class DataInput;
    class InputStream;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class DataInputStream : public ::java::io::FilterInputStream {
    public:
      enum {
        mid_init$_be2e4f90,
        mid_read_49b4f134,
        mid_read_86f44340,
        mid_readBoolean_54c6a16a,
        mid_readByte_54c6a172,
        mid_readChar_54c6a173,
        mid_readDouble_54c6a174,
        mid_readFloat_54c6a176,
        mid_readFully_49b4f12b,
        mid_readFully_86f4435f,
        mid_readInt_54c6a179,
        mid_readLine_14c7b5c5,
        mid_readLong_54c6a17a,
        mid_readShort_54c6a163,
        mid_readUTF_14c7b5c5,
        mid_readUTF_b3b10019,
        mid_readUnsignedByte_54c6a179,
        mid_readUnsignedShort_54c6a179,
        mid_skipBytes_39c7bd23,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DataInputStream(jobject obj) : ::java::io::FilterInputStream(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      DataInputStream(const DataInputStream& obj) : ::java::io::FilterInputStream(obj) {}

      DataInputStream(const ::java::io::InputStream &);

      jint read(const JArray< jbyte > &) const;
      jint read(const JArray< jbyte > &, jint, jint) const;
      jboolean readBoolean() const;
      jbyte readByte() const;
      jchar readChar() const;
      jdouble readDouble() const;
      jfloat readFloat() const;
      void readFully(const JArray< jbyte > &) const;
      void readFully(const JArray< jbyte > &, jint, jint) const;
      jint readInt() const;
      ::java::lang::String readLine() const;
      jlong readLong() const;
      jshort readShort() const;
      ::java::lang::String readUTF() const;
      static ::java::lang::String readUTF(const ::java::io::DataInput &);
      jint readUnsignedByte() const;
      jint readUnsignedShort() const;
      jint skipBytes(jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyTypeObject PY_TYPE(DataInputStream);

    class t_DataInputStream {
    public:
      PyObject_HEAD
      DataInputStream object;
      static PyObject *wrap_Object(const DataInputStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
