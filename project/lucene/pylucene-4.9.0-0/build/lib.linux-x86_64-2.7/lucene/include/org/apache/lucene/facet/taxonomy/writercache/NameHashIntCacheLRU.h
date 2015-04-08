#ifndef org_apache_lucene_facet_taxonomy_writercache_NameHashIntCacheLRU_H
#define org_apache_lucene_facet_taxonomy_writercache_NameHashIntCacheLRU_H

#include "org/apache/lucene/facet/taxonomy/writercache/NameIntCacheLRU.h"

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

            class NameHashIntCacheLRU : public ::org::apache::lucene::facet::taxonomy::writercache::NameIntCacheLRU {
            public:

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NameHashIntCacheLRU(jobject obj) : ::org::apache::lucene::facet::taxonomy::writercache::NameIntCacheLRU(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              NameHashIntCacheLRU(const NameHashIntCacheLRU& obj) : ::org::apache::lucene::facet::taxonomy::writercache::NameIntCacheLRU(obj) {}
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
            extern PyTypeObject PY_TYPE(NameHashIntCacheLRU);

            class t_NameHashIntCacheLRU {
            public:
              PyObject_HEAD
              NameHashIntCacheLRU object;
              static PyObject *wrap_Object(const NameHashIntCacheLRU&);
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
