#ifndef org_apache_lucene_store_FSLockFactory_H
#define org_apache_lucene_store_FSLockFactory_H

#include "org/apache/lucene/store/LockFactory.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class File;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class FSLockFactory : public ::org::apache::lucene::store::LockFactory {
        public:
          enum {
            mid_init$_54c6a166,
            mid_getLockDir_a8eb7bbe,
            mid_toString_14c7b5c5,
            mid_setLockDir_c3dacf57,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FSLockFactory(jobject obj) : ::org::apache::lucene::store::LockFactory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FSLockFactory(const FSLockFactory& obj) : ::org::apache::lucene::store::LockFactory(obj) {}

          FSLockFactory();

          ::java::io::File getLockDir() const;
          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(FSLockFactory);

        class t_FSLockFactory {
        public:
          PyObject_HEAD
          FSLockFactory object;
          static PyObject *wrap_Object(const FSLockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
