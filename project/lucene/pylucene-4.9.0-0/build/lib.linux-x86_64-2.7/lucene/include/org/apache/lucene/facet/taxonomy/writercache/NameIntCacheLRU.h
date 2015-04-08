#ifndef org_apache_lucene_facet_taxonomy_writercache_NameIntCacheLRU_H
#define org_apache_lucene_facet_taxonomy_writercache_NameIntCacheLRU_H

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
      namespace facet {
        namespace taxonomy {
          namespace writercache {

            class NameIntCacheLRU : public ::java::lang::Object {
            public:
              enum {
                mid_getMaxSize_54c6a179,
                mid_getSize_54c6a179,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NameIntCacheLRU(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              NameIntCacheLRU(const NameIntCacheLRU& obj) : ::java::lang::Object(obj) {}

              jint getMaxSize() const;
              jint getSize() const;
            };
          }
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
          namespace writercache {
            extern PyTypeObject PY_TYPE(NameIntCacheLRU);

            class t_NameIntCacheLRU {
            public:
              PyObject_HEAD
              NameIntCacheLRU object;
              static PyObject *wrap_Object(const NameIntCacheLRU&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
