#ifndef org_apache_lucene_util_DoubleBarrelLRUCache_H
#define org_apache_lucene_util_DoubleBarrelLRUCache_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class DoubleBarrelLRUCache$CloneableKey;
      }
    }
  }
}
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

        class DoubleBarrelLRUCache : public ::java::lang::Object {
        public:
          enum {
            mid_init$_39c7bd3c,
            mid_get_08c4f70e,
            mid_put_49de5bfd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoubleBarrelLRUCache(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DoubleBarrelLRUCache(const DoubleBarrelLRUCache& obj) : ::java::lang::Object(obj) {}

          DoubleBarrelLRUCache(jint);

          ::java::lang::Object get(const ::org::apache::lucene::util::DoubleBarrelLRUCache$CloneableKey &) const;
          void put(const ::org::apache::lucene::util::DoubleBarrelLRUCache$CloneableKey &, const ::java::lang::Object &) const;
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
        extern PyTypeObject PY_TYPE(DoubleBarrelLRUCache);

        class t_DoubleBarrelLRUCache {
        public:
          PyObject_HEAD
          DoubleBarrelLRUCache object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_DoubleBarrelLRUCache *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DoubleBarrelLRUCache&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DoubleBarrelLRUCache&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
