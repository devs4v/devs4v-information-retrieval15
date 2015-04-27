#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter$MemoryOrdinalMap_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter$MemoryOrdinalMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace directory {
            class DirectoryTaxonomyWriter$OrdinalMap;
          }
        }
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
      namespace facet {
        namespace taxonomy {
          namespace directory {

            class DirectoryTaxonomyWriter$MemoryOrdinalMap : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                mid_addDone_54c6a166,
                mid_addMapping_d8d154a6,
                mid_getMap_dab10e75,
                mid_setSize_39c7bd3c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DirectoryTaxonomyWriter$MemoryOrdinalMap(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              DirectoryTaxonomyWriter$MemoryOrdinalMap(const DirectoryTaxonomyWriter$MemoryOrdinalMap& obj) : ::java::lang::Object(obj) {}

              DirectoryTaxonomyWriter$MemoryOrdinalMap();

              void addDone() const;
              void addMapping(jint, jint) const;
              JArray< jint > getMap() const;
              void setSize(jint) const;
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
          namespace directory {
            extern PyTypeObject PY_TYPE(DirectoryTaxonomyWriter$MemoryOrdinalMap);

            class t_DirectoryTaxonomyWriter$MemoryOrdinalMap {
            public:
              PyObject_HEAD
              DirectoryTaxonomyWriter$MemoryOrdinalMap object;
              static PyObject *wrap_Object(const DirectoryTaxonomyWriter$MemoryOrdinalMap&);
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
