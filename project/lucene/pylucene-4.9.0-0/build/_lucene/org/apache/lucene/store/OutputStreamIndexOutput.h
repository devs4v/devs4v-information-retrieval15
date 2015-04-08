#ifndef org_apache_lucene_store_OutputStreamIndexOutput_H
#define org_apache_lucene_store_OutputStreamIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class OutputStream;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class OutputStreamIndexOutput : public ::org::apache::lucene::store::IndexOutput {
        public:
          enum {
            mid_init$_20acd1f6,
            mid_close_54c6a166,
            mid_flush_54c6a166,
            mid_getChecksum_54c6a17a,
            mid_getFilePointer_54c6a17a,
            mid_writeByte_b2271687,
            mid_writeBytes_86f4435f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OutputStreamIndexOutput(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          OutputStreamIndexOutput(const OutputStreamIndexOutput& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          OutputStreamIndexOutput(const ::java::io::OutputStream &, jint);

          void close() const;
          void flush() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyTypeObject PY_TYPE(OutputStreamIndexOutput);

        class t_OutputStreamIndexOutput {
        public:
          PyObject_HEAD
          OutputStreamIndexOutput object;
          static PyObject *wrap_Object(const OutputStreamIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
