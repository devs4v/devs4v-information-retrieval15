#ifndef org_apache_lucene_store_RAMFile_H
#define org_apache_lucene_store_RAMFile_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
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
      namespace store {

        class RAMFile : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_getLength_54c6a17a,
            mid_ramBytesUsed_54c6a17a,
            mid_setLength_0ee6df2f,
            mid_getBuffer_b4292e98,
            mid_newBuffer_b4292e98,
            mid_numBuffers_54c6a179,
            mid_addBuffer_b4292e98,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RAMFile(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RAMFile(const RAMFile& obj) : ::java::lang::Object(obj) {}

          RAMFile();

          jlong getLength() const;
          jlong ramBytesUsed() const;
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
        extern PyTypeObject PY_TYPE(RAMFile);

        class t_RAMFile {
        public:
          PyObject_HEAD
          RAMFile object;
          static PyObject *wrap_Object(const RAMFile&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
