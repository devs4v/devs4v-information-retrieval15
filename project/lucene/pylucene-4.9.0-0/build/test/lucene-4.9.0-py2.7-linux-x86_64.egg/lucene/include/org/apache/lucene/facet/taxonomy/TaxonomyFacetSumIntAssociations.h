#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacetSumIntAssociations_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacetSumIntAssociations_H

#include "org/apache/lucene/facet/taxonomy/IntTaxonomyFacets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class TaxonomyReader;
        }
        class FacetsConfig;
        class FacetsCollector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
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

          class TaxonomyFacetSumIntAssociations : public ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets {
          public:
            enum {
              mid_init$_33dd1605,
              mid_init$_9888e06b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacetSumIntAssociations(jobject obj) : ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacetSumIntAssociations(const TaxonomyFacetSumIntAssociations& obj) : ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets(obj) {}

            TaxonomyFacetSumIntAssociations(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
            TaxonomyFacetSumIntAssociations(const ::java::lang::String &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
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
          extern PyTypeObject PY_TYPE(TaxonomyFacetSumIntAssociations);

          class t_TaxonomyFacetSumIntAssociations {
          public:
            PyObject_HEAD
            TaxonomyFacetSumIntAssociations object;
            static PyObject *wrap_Object(const TaxonomyFacetSumIntAssociations&);
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
