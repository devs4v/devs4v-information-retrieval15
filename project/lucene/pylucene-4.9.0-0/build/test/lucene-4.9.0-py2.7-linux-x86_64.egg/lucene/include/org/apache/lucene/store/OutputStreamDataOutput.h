#ifndef org_apache_lucene_store_OutputStreamDataOutput_H
#define org_apache_lucene_store_OutputStreamDataOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class OutputStream;
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class OutputStreamDataOutput : public ::org::apache::lucene::store::DataOutput {
        public:
          enum {
            mid_init$_82d865f8,
            mid_close_54c6a166,
            mid_writeByte_b2271687,
            mid_writeBytes_86f4435f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OutputStreamDataOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          OutputStreamDataOutput(const OutputStreamDataOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          OutputStreamDataOutput(const ::java::io::OutputStream &);

          void close() const;
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
        extern PyTypeObject PY_TYPE(OutputStreamDataOutput);

        class t_OutputStreamDataOutput {
        public:
          PyObject_HEAD
          OutputStreamDataOutput object;
          static PyObject *wrap_Object(const OutputStreamDataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
