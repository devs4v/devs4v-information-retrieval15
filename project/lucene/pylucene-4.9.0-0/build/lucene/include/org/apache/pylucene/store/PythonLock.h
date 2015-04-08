#ifndef org_apache_pylucene_store_PythonLock_H
#define org_apache_pylucene_store_PythonLock_H

#include "org/apache/lucene/store/Lock.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {

        class PythonLock : public ::org::apache::lucene::store::Lock {
        public:
          enum {
            mid_init$_54c6a166,
            mid_close_54c6a166,
            mid_finalize_54c6a166,
            mid_isLocked_54c6a16a,
            mid_obtain_54c6a16a,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            mid_release_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonLock(jobject obj) : ::org::apache::lucene::store::Lock(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonLock(const PythonLock& obj) : ::org::apache::lucene::store::Lock(obj) {}

          PythonLock();

          void close() const;
          void finalize() const;
          jboolean isLocked() const;
          jboolean obtain() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void release() const;
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
        extern PyTypeObject PY_TYPE(PythonLock);

        class t_PythonLock {
        public:
          PyObject_HEAD
          PythonLock object;
          static PyObject *wrap_Object(const PythonLock&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
