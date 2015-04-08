#ifndef org_apache_lucene_facet_taxonomy_LRUHashMap_H
#define org_apache_lucene_facet_taxonomy_LRUHashMap_H

#include "java/util/LinkedHashMap.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class LRUHashMap : public ::java::util::LinkedHashMap {
          public:
            enum {
              mid_init$_39c7bd3c,
              mid_clone_544babe9,
              mid_getMaxSize_54c6a179,
              mid_setMaxSize_39c7bd3c,
              mid_removeEldestEntry_8e61453a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LRUHashMap(jobject obj) : ::java::util::LinkedHashMap(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LRUHashMap(const LRUHashMap& obj) : ::java::util::LinkedHashMap(obj) {}

            LRUHashMap(jint);

            LRUHashMap clone() const;
            jint getMaxSize() const;
            void setMaxSize(jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          extern PyTypeObject PY_TYPE(LRUHashMap);

          class t_LRUHashMap {
          public:
            PyObject_HEAD
            LRUHashMap object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_LRUHashMap *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const LRUHashMap&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const LRUHashMap&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
