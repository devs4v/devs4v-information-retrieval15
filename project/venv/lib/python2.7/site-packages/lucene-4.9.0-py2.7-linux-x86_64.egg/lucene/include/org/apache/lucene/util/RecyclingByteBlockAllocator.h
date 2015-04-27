#ifndef org_apache_lucene_util_RecyclingByteBlockAllocator_H
#define org_apache_lucene_util_RecyclingByteBlockAllocator_H

#include "org/apache/lucene/util/ByteBlockPool$Allocator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Counter;
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

        class RecyclingByteBlockAllocator : public ::org::apache::lucene::util::ByteBlockPool$Allocator {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_d8d154a6,
            mid_init$_bdd89aab,
            mid_bytesUsed_54c6a17a,
            mid_freeBlocks_39c7bd23,
            mid_getByteBlock_dab10e7e,
            mid_maxBufferedBlocks_54c6a179,
            mid_numBufferedBlocks_54c6a179,
            mid_recycleByteBlocks_d3ffa89f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RecyclingByteBlockAllocator(jobject obj) : ::org::apache::lucene::util::ByteBlockPool$Allocator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RecyclingByteBlockAllocator(const RecyclingByteBlockAllocator& obj) : ::org::apache::lucene::util::ByteBlockPool$Allocator(obj) {}

          static jint DEFAULT_BUFFERED_BLOCKS;

          RecyclingByteBlockAllocator();
          RecyclingByteBlockAllocator(jint, jint);
          RecyclingByteBlockAllocator(jint, jint, const ::org::apache::lucene::util::Counter &);

          jlong bytesUsed() const;
          jint freeBlocks(jint) const;
          JArray< jbyte > getByteBlock() const;
          jint maxBufferedBlocks() const;
          jint numBufferedBlocks() const;
          void recycleByteBlocks(const JArray< JArray< jbyte > > &, jint, jint) const;
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
        extern PyTypeObject PY_TYPE(RecyclingByteBlockAllocator);

        class t_RecyclingByteBlockAllocator {
        public:
          PyObject_HEAD
          RecyclingByteBlockAllocator object;
          static PyObject *wrap_Object(const RecyclingByteBlockAllocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
