#ifndef org_apache_lucene_util_ByteBlockPool_H
#define org_apache_lucene_util_ByteBlockPool_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ByteBlockPool$Allocator;
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ByteBlockPool : public ::java::lang::Object {
        public:
          enum {
            mid_init$_5679a66b,
            mid_allocSlice_b8354c5c,
            mid_append_7bc03dc4,
            mid_newSlice_39c7bd23,
            mid_nextBuffer_54c6a166,
            mid_readBytes_d6ca92d6,
            mid_reset_54c6a166,
            mid_reset_46f2e2c4,
            mid_setBytesRef_738fc2ce,
            max_mid
          };

          enum {
            fid_buffer,
            fid_buffers,
            fid_byteOffset,
            fid_byteUpto,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBlockPool(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ByteBlockPool(const ByteBlockPool& obj) : ::java::lang::Object(obj) {}

          static jint BYTE_BLOCK_MASK;
          static jint BYTE_BLOCK_SHIFT;
          static jint BYTE_BLOCK_SIZE;
          static jint FIRST_LEVEL_SIZE;
          static JArray< jint > *LEVEL_SIZE_ARRAY;
          static JArray< jint > *NEXT_LEVEL_ARRAY;

          JArray< jbyte > _get_buffer() const;
          void _set_buffer(const JArray< jbyte > &) const;
          JArray< JArray< jbyte > > _get_buffers() const;
          void _set_buffers(const JArray< JArray< jbyte > > &) const;
          jint _get_byteOffset() const;
          void _set_byteOffset(jint) const;
          jint _get_byteUpto() const;
          void _set_byteUpto(jint) const;

          ByteBlockPool(const ::org::apache::lucene::util::ByteBlockPool$Allocator &);

          jint allocSlice(const JArray< jbyte > &, jint) const;
          void append(const ::org::apache::lucene::util::BytesRef &) const;
          jint newSlice(jint) const;
          void nextBuffer() const;
          void readBytes(jlong, const JArray< jbyte > &, jint, jint) const;
          void reset() const;
          void reset(jboolean, jboolean) const;
          void setBytesRef(const ::org::apache::lucene::util::BytesRef &, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(ByteBlockPool);

        class t_ByteBlockPool {
        public:
          PyObject_HEAD
          ByteBlockPool object;
          static PyObject *wrap_Object(const ByteBlockPool&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
