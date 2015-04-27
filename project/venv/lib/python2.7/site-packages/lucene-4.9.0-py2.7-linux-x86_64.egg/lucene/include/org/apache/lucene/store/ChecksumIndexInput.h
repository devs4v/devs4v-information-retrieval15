#ifndef org_apache_lucene_store_ChecksumIndexInput_H
#define org_apache_lucene_store_ChecksumIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace java {
  namespace lang {
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

        class ChecksumIndexInput : public ::org::apache::lucene::store::IndexInput {
        public:
          enum {
            mid_getChecksum_54c6a17a,
            mid_seek_0ee6df2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ChecksumIndexInput(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ChecksumIndexInput(const ChecksumIndexInput& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          jlong getChecksum() const;
          void seek(jlong) const;
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
        extern PyTypeObject PY_TYPE(ChecksumIndexInput);

        class t_ChecksumIndexInput {
        public:
          PyObject_HEAD
          ChecksumIndexInput object;
          static PyObject *wrap_Object(const ChecksumIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
