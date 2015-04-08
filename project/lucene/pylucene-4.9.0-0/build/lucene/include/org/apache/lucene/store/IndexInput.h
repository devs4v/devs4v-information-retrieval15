#ifndef org_apache_lucene_store_IndexInput_H
#define org_apache_lucene_store_IndexInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RandomAccessInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
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

        class IndexInput : public ::org::apache::lucene::store::DataInput {
        public:
          enum {
            mid_clone_4baa952b,
            mid_close_54c6a166,
            mid_getFilePointer_54c6a17a,
            mid_length_54c6a17a,
            mid_randomAccessSlice_27267c8d,
            mid_seek_0ee6df2f,
            mid_slice_d00c83eb,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexInput(const IndexInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          IndexInput clone() const;
          void close() const;
          jlong getFilePointer() const;
          jlong length() const;
          ::org::apache::lucene::store::RandomAccessInput randomAccessSlice(jlong, jlong) const;
          void seek(jlong) const;
          IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(IndexInput);

        class t_IndexInput {
        public:
          PyObject_HEAD
          IndexInput object;
          static PyObject *wrap_Object(const IndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
