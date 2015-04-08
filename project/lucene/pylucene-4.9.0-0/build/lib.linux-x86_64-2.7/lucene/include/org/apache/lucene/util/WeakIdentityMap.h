#ifndef org_apache_lucene_util_WeakIdentityMap_H
#define org_apache_lucene_util_WeakIdentityMap_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class WeakIdentityMap : public ::java::lang::Object {
        public:
          enum {
            mid_clear_54c6a166,
            mid_containsKey_290588e2,
            mid_get_a932a95f,
            mid_isEmpty_54c6a16a,
            mid_keyIterator_40858c90,
            mid_newConcurrentHashMap_0c924cc6,
            mid_newConcurrentHashMap_8f638b79,
            mid_newHashMap_0c924cc6,
            mid_newHashMap_8f638b79,
            mid_put_537d5bdf,
            mid_reap_54c6a166,
            mid_remove_a932a95f,
            mid_size_54c6a179,
            mid_valueIterator_40858c90,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WeakIdentityMap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          WeakIdentityMap(const WeakIdentityMap& obj) : ::java::lang::Object(obj) {}

          void clear() const;
          jboolean containsKey(const ::java::lang::Object &) const;
          ::java::lang::Object get(const ::java::lang::Object &) const;
          jboolean isEmpty() const;
          ::java::util::Iterator keyIterator() const;
          static WeakIdentityMap newConcurrentHashMap();
          static WeakIdentityMap newConcurrentHashMap(jboolean);
          static WeakIdentityMap newHashMap();
          static WeakIdentityMap newHashMap(jboolean);
          ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
          void reap() const;
          ::java::lang::Object remove(const ::java::lang::Object &) const;
          jint size() const;
          ::java::util::Iterator valueIterator() const;
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
        extern PyTypeObject PY_TYPE(WeakIdentityMap);

        class t_WeakIdentityMap {
        public:
          PyObject_HEAD
          WeakIdentityMap object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_WeakIdentityMap *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const WeakIdentityMap&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const WeakIdentityMap&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
