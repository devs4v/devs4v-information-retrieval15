#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacetSumValueSource_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacetSumValueSource_H

#include "org/apache/lucene/facet/taxonomy/FloatTaxonomyFacets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class OrdinalsReader;
          class TaxonomyReader;
        }
        class FacetsConfig;
        class FacetsCollector;
      }
      namespace queries {
        namespace function {
          class ValueSource;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class TaxonomyFacetSumValueSource : public ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets {
          public:
            enum {
              mid_init$_6182367d,
              mid_init$_855546e7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacetSumValueSource(jobject obj) : ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacetSumValueSource(const TaxonomyFacetSumValueSource& obj) : ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets(obj) {}

            TaxonomyFacetSumValueSource(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::queries::function::ValueSource &);
            TaxonomyFacetSumValueSource(const ::org::apache::lucene::facet::taxonomy::OrdinalsReader &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::queries::function::ValueSource &);
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
          extern PyTypeObject PY_TYPE(TaxonomyFacetSumValueSource);

          class t_TaxonomyFacetSumValueSource {
          public:
            PyObject_HEAD
            TaxonomyFacetSumValueSource object;
            static PyObject *wrap_Object(const TaxonomyFacetSumValueSource&);
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
