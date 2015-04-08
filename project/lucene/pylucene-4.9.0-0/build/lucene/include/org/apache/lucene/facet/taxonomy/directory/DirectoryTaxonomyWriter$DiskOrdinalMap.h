#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter$DiskOrdinalMap_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter$DiskOrdinalMap_H

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
  namespace io {
    class IOException;
    class File;
    class FileNotFoundException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace directory {

            class DirectoryTaxonomyWriter$DiskOrdinalMap : public ::java::lang::Object {
            public:
              enum {
                mid_init$_c3dacf57,
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

              explicit DirectoryTaxonomyWriter$DiskOrdinalMap(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              DirectoryTaxonomyWriter$DiskOrdinalMap(const DirectoryTaxonomyWriter$DiskOrdinalMap& obj) : ::java::lang::Object(obj) {}

              DirectoryTaxonomyWriter$DiskOrdinalMap(const ::java::io::File &);

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
            extern PyTypeObject PY_TYPE(DirectoryTaxonomyWriter$DiskOrdinalMap);

            class t_DirectoryTaxonomyWriter$DiskOrdinalMap {
            public:
              PyObject_HEAD
              DirectoryTaxonomyWriter$DiskOrdinalMap object;
              static PyObject *wrap_Object(const DirectoryTaxonomyWriter$DiskOrdinalMap&);
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
