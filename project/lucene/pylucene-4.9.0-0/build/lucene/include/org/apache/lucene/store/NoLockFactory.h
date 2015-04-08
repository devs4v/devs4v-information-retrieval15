#ifndef org_apache_lucene_store_NoLockFactory_H
#define org_apache_lucene_store_NoLockFactory_H

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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class NoLockFactory : public ::org::apache::lucene::store::LockFactory {
        public:
          enum {
            mid_clearLock_5fdc3f48,
            mid_getNoLockFactory_a2b6ff3e,
            mid_makeLock_f26bb9a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NoLockFactory(jobject obj) : ::org::apache::lucene::store::LockFactory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NoLockFactory(const NoLockFactory& obj) : ::org::apache::lucene::store::LockFactory(obj) {}

          void clearLock(const ::java::lang::String &) const;
          static NoLockFactory getNoLockFactory();
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
        extern PyTypeObject PY_TYPE(NoLockFactory);

        class t_NoLockFactory {
        public:
          PyObject_HEAD
          NoLockFactory object;
          static PyObject *wrap_Object(const NoLockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
