#ifndef org_apache_lucene_util_RecyclingIntBlockAllocator_H
#define org_apache_lucene_util_RecyclingIntBlockAllocator_H

#include "org/apache/lucene/util/IntBlockPool$Allocator.h"

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

        class RecyclingIntBlockAllocator : public ::org::apache::lucene::util::IntBlockPool$Allocator {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_d8d154a6,
            mid_init$_bdd89aab,
            mid_bytesUsed_54c6a17a,
            mid_freeBlocks_39c7bd23,
            mid_getIntBlock_dab10e75,
            mid_maxBufferedBlocks_54c6a179,
            mid_numBufferedBlocks_54c6a179,
            mid_recycleIntBlocks_9f62f13c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RecyclingIntBlockAllocator(jobject obj) : ::org::apache::lucene::util::IntBlockPool$Allocator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RecyclingIntBlockAllocator(const RecyclingIntBlockAllocator& obj) : ::org::apache::lucene::util::IntBlockPool$Allocator(obj) {}

          static jint DEFAULT_BUFFERED_BLOCKS;

          RecyclingIntBlockAllocator();
          RecyclingIntBlockAllocator(jint, jint);
          RecyclingIntBlockAllocator(jint, jint, const ::org::apache::lucene::util::Counter &);

          jlong bytesUsed() const;
          jint freeBlocks(jint) const;
          JArray< jint > getIntBlock() const;
          jint maxBufferedBlocks() const;
          jint numBufferedBlocks() const;
          void recycleIntBlocks(const JArray< JArray< jint > > &, jint, jint) const;
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
        extern PyTypeObject PY_TYPE(RecyclingIntBlockAllocator);

        class t_RecyclingIntBlockAllocator {
        public:
          PyObject_HEAD
          RecyclingIntBlockAllocator object;
          static PyObject *wrap_Object(const RecyclingIntBlockAllocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
