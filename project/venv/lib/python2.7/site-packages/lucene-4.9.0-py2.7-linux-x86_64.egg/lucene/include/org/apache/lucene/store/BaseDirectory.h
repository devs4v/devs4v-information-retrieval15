#ifndef org_apache_lucene_store_BaseDirectory_H
#define org_apache_lucene_store_BaseDirectory_H

#include "org/apache/lucene/store/Directory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Lock;
        class LockFactory;
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

        class BaseDirectory : public ::org::apache::lucene::store::Directory {
        public:
          enum {
            mid_clearLock_5fdc3f48,
            mid_getLockFactory_e4e9c36d,
            mid_makeLock_f26bb9a8,
            mid_setLockFactory_9892eb8c,
            mid_ensureOpen_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BaseDirectory(jobject obj) : ::org::apache::lucene::store::Directory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BaseDirectory(const BaseDirectory& obj) : ::org::apache::lucene::store::Directory(obj) {}

          void clearLock(const ::java::lang::String &) const;
          ::org::apache::lucene::store::LockFactory getLockFactory() const;
          ::org::apache::lucene::store::Lock makeLock(const ::java::lang::String &) const;
          void setLockFactory(const ::org::apache::lucene::store::LockFactory &) const;
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
        extern PyTypeObject PY_TYPE(BaseDirectory);

        class t_BaseDirectory {
        public:
          PyObject_HEAD
          BaseDirectory object;
          static PyObject *wrap_Object(const BaseDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
