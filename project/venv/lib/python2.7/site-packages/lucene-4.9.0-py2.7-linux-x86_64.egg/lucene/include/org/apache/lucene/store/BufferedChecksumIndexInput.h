#ifndef org_apache_lucene_store_BufferedChecksumIndexInput_H
#define org_apache_lucene_store_BufferedChecksumIndexInput_H

#include "org/apache/lucene/store/ChecksumIndexInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class BufferedChecksumIndexInput : public ::org::apache::lucene::store::ChecksumIndexInput {
        public:
          enum {
            mid_init$_0441f0b2,
            mid_clone_4baa952b,
            mid_close_54c6a166,
            mid_getChecksum_54c6a17a,
            mid_getFilePointer_54c6a17a,
            mid_length_54c6a17a,
            mid_readByte_54c6a172,
            mid_readBytes_86f4435f,
            mid_slice_d00c83eb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BufferedChecksumIndexInput(jobject obj) : ::org::apache::lucene::store::ChecksumIndexInput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BufferedChecksumIndexInput(const BufferedChecksumIndexInput& obj) : ::org::apache::lucene::store::ChecksumIndexInput(obj) {}

          BufferedChecksumIndexInput(const ::org::apache::lucene::store::IndexInput &);

          ::org::apache::lucene::store::IndexInput clone() const;
          void close() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          jlong length() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          ::org::apache::lucene::store::IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
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
        extern PyTypeObject PY_TYPE(BufferedChecksumIndexInput);

        class t_BufferedChecksumIndexInput {
        public:
          PyObject_HEAD
          BufferedChecksumIndexInput object;
          static PyObject *wrap_Object(const BufferedChecksumIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
