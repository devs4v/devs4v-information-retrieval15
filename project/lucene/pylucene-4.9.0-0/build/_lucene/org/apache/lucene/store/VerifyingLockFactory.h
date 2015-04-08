#ifndef org_apache_lucene_store_VerifyingLockFactory_H
#define org_apache_lucene_store_VerifyingLockFactory_H

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
    class OutputStream;
    class IOException;
    class InputStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class VerifyingLockFactory : public ::org::apache::lucene::store::LockFactory {
        public:
          enum {
            mid_init$_118c9b94,
            mid_clearLock_5fdc3f48,
            mid_makeLock_f26bb9a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit VerifyingLockFactory(jobject obj) : ::org::apache::lucene::store::LockFactory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          VerifyingLockFactory(const VerifyingLockFactory& obj) : ::org::apache::lucene::store::LockFactory(obj) {}

          VerifyingLockFactory(const ::org::apache::lucene::store::LockFactory &, const ::java::io::InputStream &, const ::java::io::OutputStream &);

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
        extern PyTypeObject PY_TYPE(VerifyingLockFactory);

        class t_VerifyingLockFactory {
        public:
          PyObject_HEAD
          VerifyingLockFactory object;
          static PyObject *wrap_Object(const VerifyingLockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
