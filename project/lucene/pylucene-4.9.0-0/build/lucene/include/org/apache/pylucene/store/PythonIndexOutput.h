#ifndef org_apache_pylucene_store_PythonIndexOutput_H
#define org_apache_pylucene_store_PythonIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {

        class PythonIndexOutput : public ::org::apache::lucene::store::IndexOutput {
        public:
          enum {
            mid_init$_54c6a166,
            mid_close_54c6a166,
            mid_finalize_54c6a166,
            mid_flush_54c6a166,
            mid_getChecksum_54c6a17a,
            mid_getFilePointer_54c6a17a,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            mid_writeByte_b2271687,
            mid_writeBytes_49b4f12b,
            mid_writeBytes_86f4435f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIndexOutput(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonIndexOutput(const PythonIndexOutput& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          PythonIndexOutput();

          void close() const;
          void finalize() const;
          void flush() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {
        extern PyTypeObject PY_TYPE(PythonIndexOutput);

        class t_PythonIndexOutput {
        public:
          PyObject_HEAD
          PythonIndexOutput object;
          static PyObject *wrap_Object(const PythonIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
