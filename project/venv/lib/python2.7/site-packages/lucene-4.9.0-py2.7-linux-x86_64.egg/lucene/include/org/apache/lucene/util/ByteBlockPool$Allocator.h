#ifndef org_apache_lucene_util_ByteBlockPool$Allocator_H
#define org_apache_lucene_util_ByteBlockPool$Allocator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ByteBlockPool$Allocator : public ::java::lang::Object {
        public:
          enum {
            mid_init$_39c7bd3c,
            mid_getByteBlock_dab10e7e,
            mid_recycleByteBlocks_1fde8fc3,
            mid_recycleByteBlocks_d3ffa89f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBlockPool$Allocator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ByteBlockPool$Allocator(const ByteBlockPool$Allocator& obj) : ::java::lang::Object(obj) {}

          ByteBlockPool$Allocator(jint);

          JArray< jbyte > getByteBlock() const;
          void recycleByteBlocks(const ::java::util::List &) const;
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
        extern PyTypeObject PY_TYPE(ByteBlockPool$Allocator);

        class t_ByteBlockPool$Allocator {
        public:
          PyObject_HEAD
          ByteBlockPool$Allocator object;
          static PyObject *wrap_Object(const ByteBlockPool$Allocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
