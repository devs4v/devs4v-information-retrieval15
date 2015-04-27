#ifndef org_apache_lucene_facet_range_LongRangeFacetCounts_H
#define org_apache_lucene_facet_range_LongRangeFacetCounts_H

#include "org/apache/lucene/facet/range/RangeFacetCounts.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {
          class LongRange;
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
        namespace range {

          class LongRangeFacetCounts : public ::org::apache::lucene::facet::range::RangeFacetCounts {
          public:
            enum {
              mid_init$_d97a5aae,
              mid_init$_f040242a,
              mid_init$_9056893a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongRangeFacetCounts(jobject obj) : ::org::apache::lucene::facet::range::RangeFacetCounts(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LongRangeFacetCounts(const LongRangeFacetCounts& obj) : ::org::apache::lucene::facet::range::RangeFacetCounts(obj) {}

            LongRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::LongRange > &);
            LongRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::LongRange > &);
            LongRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::Filter &, const JArray< ::org::apache::lucene::facet::range::LongRange > &);
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
          extern PyTypeObject PY_TYPE(LongRangeFacetCounts);

          class t_LongRangeFacetCounts {
          public:
            PyObject_HEAD
            LongRangeFacetCounts object;
            static PyObject *wrap_Object(const LongRangeFacetCounts&);
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
