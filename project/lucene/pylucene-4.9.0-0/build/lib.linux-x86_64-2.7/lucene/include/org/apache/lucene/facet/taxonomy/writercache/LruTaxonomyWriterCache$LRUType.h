#ifndef org_apache_lucene_facet_taxonomy_writercache_LruTaxonomyWriterCache$LRUType_H
#define org_apache_lucene_facet_taxonomy_writercache_LruTaxonomyWriterCache$LRUType_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
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

            class LruTaxonomyWriterCache$LRUType : public ::java::lang::Enum {
            public:
              enum {
                mid_valueOf_dc8e332a,
                mid_values_bbbf1f8c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LruTaxonomyWriterCache$LRUType(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              LruTaxonomyWriterCache$LRUType(const LruTaxonomyWriterCache$LRUType& obj) : ::java::lang::Enum(obj) {}

              static LruTaxonomyWriterCache$LRUType *LRU_HASHED;
              static LruTaxonomyWriterCache$LRUType *LRU_STRING;

              static LruTaxonomyWriterCache$LRUType valueOf(const ::java::lang::String &);
              static JArray< LruTaxonomyWriterCache$LRUType > values();
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
            extern PyTypeObject PY_TYPE(LruTaxonomyWriterCache$LRUType);

            class t_LruTaxonomyWriterCache$LRUType {
            public:
              PyObject_HEAD
              LruTaxonomyWriterCache$LRUType object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_LruTaxonomyWriterCache$LRUType *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const LruTaxonomyWriterCache$LRUType&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const LruTaxonomyWriterCache$LRUType&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
