#ifndef org_apache_lucene_store_BufferedChecksum_H
#define org_apache_lucene_store_BufferedChecksum_H

#include "java/lang/Object.h"

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

        class BufferedChecksum : public ::java::lang::Object {
        public:
          enum {
            mid_getValue_54c6a17a,
            mid_reset_54c6a166,
            mid_update_39c7bd3c,
            mid_update_86f4435f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BufferedChecksum(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BufferedChecksum(const BufferedChecksum& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_BUFFERSIZE;

          jlong getValue() const;
          void reset() const;
          void update(jint) const;
          void update(const JArray< jbyte > &, jint, jint) const;
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
        extern PyTypeObject PY_TYPE(BufferedChecksum);

        class t_BufferedChecksum {
        public:
          PyObject_HEAD
          BufferedChecksum object;
          static PyObject *wrap_Object(const BufferedChecksum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
