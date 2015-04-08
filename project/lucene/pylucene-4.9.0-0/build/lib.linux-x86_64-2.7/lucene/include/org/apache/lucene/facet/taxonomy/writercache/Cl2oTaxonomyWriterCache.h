#ifndef org_apache_lucene_facet_taxonomy_writercache_Cl2oTaxonomyWriterCache_H
#define org_apache_lucene_facet_taxonomy_writercache_Cl2oTaxonomyWriterCache_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace writercache {
            class TaxonomyWriterCache;
          }
          class FacetLabel;
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
          namespace writercache {

            class Cl2oTaxonomyWriterCache : public ::java::lang::Object {
            public:
              enum {
                mid_init$_776c6331,
                mid_clear_54c6a166,
                mid_close_54c6a166,
                mid_get_283f83f5,
                mid_getMemoryUsage_54c6a179,
                mid_isFull_54c6a16a,
                mid_put_7ba580a4,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Cl2oTaxonomyWriterCache(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              Cl2oTaxonomyWriterCache(const Cl2oTaxonomyWriterCache& obj) : ::java::lang::Object(obj) {}

              Cl2oTaxonomyWriterCache(jint, jfloat, jint);

              void clear() const;
              void close() const;
              jint get(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              jint getMemoryUsage() const;
              jboolean isFull() const;
              jboolean put(const ::org::apache::lucene::facet::taxonomy::FacetLabel &, jint) const;
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
            extern PyTypeObject PY_TYPE(Cl2oTaxonomyWriterCache);

            class t_Cl2oTaxonomyWriterCache {
            public:
              PyObject_HEAD
              Cl2oTaxonomyWriterCache object;
              static PyObject *wrap_Object(const Cl2oTaxonomyWriterCache&);
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
