#ifndef org_apache_lucene_store_RAMOutputStream_H
#define org_apache_lucene_store_RAMOutputStream_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace store {
        class RAMFile;
        class DataOutput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class RAMOutputStream : public ::org::apache::lucene::store::IndexOutput {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_ca7ad9be,
            mid_close_54c6a166,
            mid_flush_54c6a166,
            mid_getChecksum_54c6a17a,
            mid_getFilePointer_54c6a17a,
            mid_ramBytesUsed_54c6a17a,
            mid_reset_54c6a166,
            mid_writeByte_b2271687,
            mid_writeBytes_86f4435f,
            mid_writeTo_27875f57,
            mid_writeTo_b8354c43,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RAMOutputStream(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RAMOutputStream(const RAMOutputStream& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          RAMOutputStream();
          RAMOutputStream(const ::org::apache::lucene::store::RAMFile &, jboolean);

          void close() const;
          void flush() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          jlong ramBytesUsed() const;
          void reset() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
          void writeTo(const ::org::apache::lucene::store::DataOutput &) const;
          void writeTo(const JArray< jbyte > &, jint) const;
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
        extern PyTypeObject PY_TYPE(RAMOutputStream);

        class t_RAMOutputStream {
        public:
          PyObject_HEAD
          RAMOutputStream object;
          static PyObject *wrap_Object(const RAMOutputStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
