#ifndef org_apache_lucene_facet_taxonomy_writercache_TaxonomyWriterCache_H
#define org_apache_lucene_facet_taxonomy_writercache_TaxonomyWriterCache_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
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

            class TaxonomyWriterCache : public ::java::lang::Object {
            public:
              enum {
                mid_clear_54c6a166,
                mid_close_54c6a166,
                mid_get_283f83f5,
                mid_isFull_54c6a16a,
                mid_put_7ba580a4,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TaxonomyWriterCache(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              TaxonomyWriterCache(const TaxonomyWriterCache& obj) : ::java::lang::Object(obj) {}

              void clear() const;
              void close() const;
              jint get(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
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
            extern PyTypeObject PY_TYPE(TaxonomyWriterCache);

            class t_TaxonomyWriterCache {
            public:
              PyObject_HEAD
              TaxonomyWriterCache object;
              static PyObject *wrap_Object(const TaxonomyWriterCache&);
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
