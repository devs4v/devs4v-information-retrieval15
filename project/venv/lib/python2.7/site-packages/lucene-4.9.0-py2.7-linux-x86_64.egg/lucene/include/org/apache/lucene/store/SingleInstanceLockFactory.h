#ifndef org_apache_lucene_store_SingleInstanceLockFactory_H
#define org_apache_lucene_store_SingleInstanceLockFactory_H

#include "org/apache/lucene/store/LockFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Lock;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
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

        class SingleInstanceLockFactory : public ::org::apache::lucene::store::LockFactory {
        public:
          enum {
            mid_init$_54c6a166,
            mid_clearLock_5fdc3f48,
            mid_makeLock_f26bb9a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SingleInstanceLockFactory(jobject obj) : ::org::apache::lucene::store::LockFactory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SingleInstanceLockFactory(const SingleInstanceLockFactory& obj) : ::org::apache::lucene::store::LockFactory(obj) {}

          SingleInstanceLockFactory();

          void clearLock(const ::java::lang::String &) const;
          ::org::apache::lucene::store::Lock makeLock(const ::java::lang::String &) const;
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
        extern PyTypeObject PY_TYPE(SingleInstanceLockFactory);

        class t_SingleInstanceLockFactory {
        public:
          PyObject_HEAD
          SingleInstanceLockFactory object;
          static PyObject *wrap_Object(const SingleInstanceLockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
