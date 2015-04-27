#ifndef org_apache_lucene_store_Lock_H
#define org_apache_lucene_store_Lock_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class Lock : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_close_54c6a166,
            mid_isLocked_54c6a16a,
            mid_obtain_54c6a16a,
            mid_obtain_0ee6df23,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Lock(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Lock(const Lock& obj) : ::java::lang::Object(obj) {}

          static jlong LOCK_OBTAIN_WAIT_FOREVER;
          static jlong LOCK_POLL_INTERVAL;

          Lock();

          void close() const;
          jboolean isLocked() const;
          jboolean obtain() const;
          jboolean obtain(jlong) const;
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
        extern PyTypeObject PY_TYPE(Lock);

        class t_Lock {
        public:
          PyObject_HEAD
          Lock object;
          static PyObject *wrap_Object(const Lock&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
