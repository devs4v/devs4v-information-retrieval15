#ifndef org_apache_lucene_facet_taxonomy_FloatTaxonomyFacets_H
#define org_apache_lucene_facet_taxonomy_FloatTaxonomyFacets_H

#include "org/apache/lucene/facet/taxonomy/TaxonomyFacets.h"

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
  namespace lang {
    class Class;
    class String;
    class Number;
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

          class FloatTaxonomyFacets : public ::org::apache::lucene::facet::taxonomy::TaxonomyFacets {
          public:
            enum {
              mid_getSpecificValue_8ecbcac9,
              mid_getTopChildren_37e8c044,
              mid_rollup_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FloatTaxonomyFacets(jobject obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyFacets(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FloatTaxonomyFacets(const FloatTaxonomyFacets& obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyFacets(obj) {}

            ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
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
          extern PyTypeObject PY_TYPE(FloatTaxonomyFacets);

          class t_FloatTaxonomyFacets {
          public:
            PyObject_HEAD
            FloatTaxonomyFacets object;
            static PyObject *wrap_Object(const FloatTaxonomyFacets&);
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
