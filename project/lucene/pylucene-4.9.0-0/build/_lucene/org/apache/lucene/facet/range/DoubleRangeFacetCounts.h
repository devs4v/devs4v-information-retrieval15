#ifndef org_apache_lucene_facet_range_DoubleRangeFacetCounts_H
#define org_apache_lucene_facet_range_DoubleRangeFacetCounts_H

#include "org/apache/lucene/facet/range/RangeFacetCounts.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {
          class DoubleRange;
        }
        class FacetsCollector;
      }
      namespace search {
        class Filter;
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
        namespace range {

          class DoubleRangeFacetCounts : public ::org::apache::lucene::facet::range::RangeFacetCounts {
          public:
            enum {
              mid_init$_9ae8847d,
              mid_init$_828c1751,
              mid_init$_f6d04191,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoubleRangeFacetCounts(jobject obj) : ::org::apache::lucene::facet::range::RangeFacetCounts(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DoubleRangeFacetCounts(const DoubleRangeFacetCounts& obj) : ::org::apache::lucene::facet::range::RangeFacetCounts(obj) {}

            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::Filter &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
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
        namespace range {
          extern PyTypeObject PY_TYPE(DoubleRangeFacetCounts);

          class t_DoubleRangeFacetCounts {
          public:
            PyObject_HEAD
            DoubleRangeFacetCounts object;
            static PyObject *wrap_Object(const DoubleRangeFacetCounts&);
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
