#ifndef org_apache_lucene_search_CollectionTerminatedException_H
#define org_apache_lucene_search_CollectionTerminatedException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class CollectionTerminatedException : public ::java::lang::RuntimeException {
        public:
          enum {
            mid_init$_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CollectionTerminatedException(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CollectionTerminatedException(const CollectionTerminatedException& obj) : ::java::lang::RuntimeException(obj) {}

          CollectionTerminatedException();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(CollectionTerminatedException);

        class t_CollectionTerminatedException {
        public:
          PyObject_HEAD
          CollectionTerminatedException object;
          static PyObject *wrap_Object(const CollectionTerminatedException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
