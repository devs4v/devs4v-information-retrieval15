#ifndef org_apache_lucene_store_InputStreamDataInput_H
#define org_apache_lucene_store_InputStreamDataInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
    class Closeable;
    class InputStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class InputStreamDataInput : public ::org::apache::lucene::store::DataInput {
        public:
          enum {
            mid_init$_be2e4f90,
            mid_close_54c6a166,
            mid_readByte_54c6a172,
            mid_readBytes_86f4435f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InputStreamDataInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          InputStreamDataInput(const InputStreamDataInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          InputStreamDataInput(const ::java::io::InputStream &);

          void close() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
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
        extern PyTypeObject PY_TYPE(InputStreamDataInput);

        class t_InputStreamDataInput {
        public:
          PyObject_HEAD
          InputStreamDataInput object;
          static PyObject *wrap_Object(const InputStreamDataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
