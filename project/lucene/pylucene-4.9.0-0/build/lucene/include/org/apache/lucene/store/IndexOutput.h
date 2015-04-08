#ifndef org_apache_lucene_store_IndexOutput_H
#define org_apache_lucene_store_IndexOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class IndexOutput : public ::org::apache::lucene::store::DataOutput {
        public:
          enum {
            mid_init$_54c6a166,
            mid_close_54c6a166,
            mid_flush_54c6a166,
            mid_getChecksum_54c6a17a,
            mid_getFilePointer_54c6a17a,
            mid_length_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexOutput(const IndexOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          IndexOutput();

          void close() const;
          void flush() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          jlong length() const;
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
        extern PyTypeObject PY_TYPE(IndexOutput);

        class t_IndexOutput {
        public:
          PyObject_HEAD
          IndexOutput object;
          static PyObject *wrap_Object(const IndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
