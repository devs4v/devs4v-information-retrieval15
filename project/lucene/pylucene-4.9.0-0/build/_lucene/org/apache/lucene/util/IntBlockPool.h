#ifndef org_apache_lucene_util_IntBlockPool_H
#define org_apache_lucene_util_IntBlockPool_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntBlockPool$Allocator;
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

        class IntBlockPool : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_112445b3,
            mid_nextBuffer_54c6a166,
            mid_reset_54c6a166,
            mid_reset_46f2e2c4,
            max_mid
          };

          enum {
            fid_buffer,
            fid_buffers,
            fid_intOffset,
            fid_intUpto,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntBlockPool(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IntBlockPool(const IntBlockPool& obj) : ::java::lang::Object(obj) {}

          static jint INT_BLOCK_MASK;
          static jint INT_BLOCK_SHIFT;
          static jint INT_BLOCK_SIZE;

          JArray< jint > _get_buffer() const;
          void _set_buffer(const JArray< jint > &) const;
          JArray< JArray< jint > > _get_buffers() const;
          void _set_buffers(const JArray< JArray< jint > > &) const;
          jint _get_intOffset() const;
          void _set_intOffset(jint) const;
          jint _get_intUpto() const;
          void _set_intUpto(jint) const;

          IntBlockPool();
          IntBlockPool(const ::org::apache::lucene::util::IntBlockPool$Allocator &);

          void nextBuffer() const;
          void reset() const;
          void reset(jboolean, jboolean) const;
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
        extern PyTypeObject PY_TYPE(IntBlockPool);

        class t_IntBlockPool {
        public:
          PyObject_HEAD
          IntBlockPool object;
          static PyObject *wrap_Object(const IntBlockPool&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
