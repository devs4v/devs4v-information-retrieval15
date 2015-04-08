#ifndef org_apache_lucene_store_BufferedIndexInput_H
#define org_apache_lucene_store_BufferedIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RandomAccessInput;
        class IOContext;
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

        class BufferedIndexInput : public ::org::apache::lucene::store::IndexInput {
        public:
          enum {
            mid_init$_5fdc3f48,
            mid_init$_501c6f1c,
            mid_init$_6e53ccc6,
            mid_bufferSize_e43288a5,
            mid_clone_c014db58,
            mid_getBufferSize_54c6a179,
            mid_getFilePointer_54c6a17a,
            mid_readByte_54c6a172,
            mid_readByte_0ee6df3b,
            mid_readBytes_86f4435f,
            mid_readBytes_717964e8,
            mid_readInt_54c6a179,
            mid_readInt_0ee6df30,
            mid_readLong_54c6a17a,
            mid_readLong_0ee6df33,
            mid_readShort_54c6a163,
            mid_readShort_0ee6df2a,
            mid_readVInt_54c6a179,
            mid_readVLong_54c6a17a,
            mid_seek_0ee6df2f,
            mid_setBufferSize_39c7bd3c,
            mid_slice_d00c83eb,
            mid_wrap_3bd7a9bc,
            mid_flushBuffer_b3b465fc,
            mid_newBuffer_49b4f12b,
            mid_readInternal_86f4435f,
            mid_seekInternal_0ee6df2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BufferedIndexInput(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BufferedIndexInput(const BufferedIndexInput& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          static jint BUFFER_SIZE;
          static jint MERGE_BUFFER_SIZE;
          static jint MIN_BUFFER_SIZE;

          BufferedIndexInput(const ::java::lang::String &);
          BufferedIndexInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
          BufferedIndexInput(const ::java::lang::String &, jint);

          static jint bufferSize(const ::org::apache::lucene::store::IOContext &);
          BufferedIndexInput clone() const;
          jint getBufferSize() const;
          jlong getFilePointer() const;
          jbyte readByte() const;
          jbyte readByte(jlong) const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void readBytes(const JArray< jbyte > &, jint, jint, jboolean) const;
          jint readInt() const;
          jint readInt(jlong) const;
          jlong readLong() const;
          jlong readLong(jlong) const;
          jshort readShort() const;
          jshort readShort(jlong) const;
          jint readVInt() const;
          jlong readVLong() const;
          void seek(jlong) const;
          void setBufferSize(jint) const;
          ::org::apache::lucene::store::IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
          static BufferedIndexInput wrap(const ::java::lang::String &, const ::org::apache::lucene::store::IndexInput &, jlong, jlong);
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
        extern PyTypeObject PY_TYPE(BufferedIndexInput);

        class t_BufferedIndexInput {
        public:
          PyObject_HEAD
          BufferedIndexInput object;
          static PyObject *wrap_Object(const BufferedIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
