#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacetSumFloatAssociations_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacetSumFloatAssociations_H

#include "org/apache/lucene/facet/taxonomy/FloatTaxonomyFacets.h"

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
    class Class;
    class String;
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

          class TaxonomyFacetSumFloatAssociations : public ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets {
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

            explicit TaxonomyFacetSumFloatAssociations(jobject obj) : ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacetSumFloatAssociations(const TaxonomyFacetSumFloatAssociations& obj) : ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets(obj) {}

            TaxonomyFacetSumFloatAssociations(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
            TaxonomyFacetSumFloatAssociations(const ::java::lang::String &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
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
          extern PyTypeObject PY_TYPE(TaxonomyFacetSumFloatAssociations);

          class t_TaxonomyFacetSumFloatAssociations {
          public:
            PyObject_HEAD
            TaxonomyFacetSumFloatAssociations object;
            static PyObject *wrap_Object(const TaxonomyFacetSumFloatAssociations&);
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
