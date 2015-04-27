#ifndef org_apache_pylucene_store_PythonLockFactory_H
#define org_apache_pylucene_store_PythonLockFactory_H

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
    class Throwable;
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
    namespace pylucene {
      namespace store {

        class PythonLockFactory : public ::org::apache::lucene::store::LockFactory {
        public:
          enum {
            mid_init$_54c6a166,
            mid_clearLock_5fdc3f48,
            mid_finalize_54c6a166,
            mid_makeLock_f26bb9a8,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonLockFactory(jobject obj) : ::org::apache::lucene::store::LockFactory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonLockFactory(const PythonLockFactory& obj) : ::org::apache::lucene::store::LockFactory(obj) {}

          PythonLockFactory();

          void clearLock(const ::java::lang::String &) const;
          void finalize() const;
          ::org::apache::lucene::store::Lock makeLock(const ::java::lang::String &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {
        extern PyTypeObject PY_TYPE(PythonLockFactory);

        class t_PythonLockFactory {
        public:
          PyObject_HEAD
          PythonLockFactory object;
          static PyObject *wrap_Object(const PythonLockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
