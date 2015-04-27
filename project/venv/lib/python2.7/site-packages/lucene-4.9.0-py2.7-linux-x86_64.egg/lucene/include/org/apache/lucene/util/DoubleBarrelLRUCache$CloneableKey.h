#ifndef org_apache_lucene_util_DoubleBarrelLRUCache$CloneableKey_H
#define org_apache_lucene_util_DoubleBarrelLRUCache$CloneableKey_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class DoubleBarrelLRUCache$CloneableKey : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_clone_233cec6c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoubleBarrelLRUCache$CloneableKey(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DoubleBarrelLRUCache$CloneableKey(const DoubleBarrelLRUCache$CloneableKey& obj) : ::java::lang::Object(obj) {}

          DoubleBarrelLRUCache$CloneableKey();

          DoubleBarrelLRUCache$CloneableKey clone() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(DoubleBarrelLRUCache$CloneableKey);

        class t_DoubleBarrelLRUCache$CloneableKey {
        public:
          PyObject_HEAD
          DoubleBarrelLRUCache$CloneableKey object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_DoubleBarrelLRUCache$CloneableKey *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DoubleBarrelLRUCache$CloneableKey&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DoubleBarrelLRUCache$CloneableKey&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
