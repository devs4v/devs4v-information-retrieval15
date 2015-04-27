#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacets_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacets_H

#include "org/apache/lucene/facet/Facets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class TaxonomyFacets : public ::org::apache::lucene::facet::Facets {
          public:
            enum {
              mid_getAllDims_cdc2a528,
              mid_verifyDim_7d95dc61,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacets(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacets(const TaxonomyFacets& obj) : ::org::apache::lucene::facet::Facets(obj) {}

            ::java::util::List getAllDims(jint) const;
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
          extern PyTypeObject PY_TYPE(TaxonomyFacets);

          class t_TaxonomyFacets {
          public:
            PyObject_HEAD
            TaxonomyFacets object;
            static PyObject *wrap_Object(const TaxonomyFacets&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
