#ifndef org_apache_lucene_store_LockFactory_H
#define org_apache_lucene_store_LockFactory_H

#include "java/lang/Object.h"

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

        class LockFactory : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_clearLock_5fdc3f48,
            mid_getLockPrefix_14c7b5c5,
            mid_makeLock_f26bb9a8,
            mid_setLockPrefix_5fdc3f48,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LockFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          LockFactory(const LockFactory& obj) : ::java::lang::Object(obj) {}

          LockFactory();

          void clearLock(const ::java::lang::String &) const;
          ::java::lang::String getLockPrefix() const;
          ::org::apache::lucene::store::Lock makeLock(const ::java::lang::String &) const;
          void setLockPrefix(const ::java::lang::String &) const;
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
        extern PyTypeObject PY_TYPE(LockFactory);

        class t_LockFactory {
        public:
          PyObject_HEAD
          LockFactory object;
          static PyObject *wrap_Object(const LockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
