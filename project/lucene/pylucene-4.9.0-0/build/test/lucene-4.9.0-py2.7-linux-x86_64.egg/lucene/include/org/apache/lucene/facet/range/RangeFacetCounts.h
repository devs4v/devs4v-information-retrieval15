#ifndef org_apache_lucene_facet_range_RangeFacetCounts_H
#define org_apache_lucene_facet_range_RangeFacetCounts_H

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
  namespace lang {
    class Class;
    class Number;
    class String;
  }
  namespace util {
    class List;
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

          class RangeFacetCounts : public ::org::apache::lucene::facet::Facets {
          public:
            enum {
              mid_getAllDims_cdc2a528,
              mid_getSpecificValue_8ecbcac9,
              mid_getTopChildren_37e8c044,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RangeFacetCounts(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            RangeFacetCounts(const RangeFacetCounts& obj) : ::org::apache::lucene::facet::Facets(obj) {}

            ::java::util::List getAllDims(jint) const;
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
        namespace range {
          extern PyTypeObject PY_TYPE(RangeFacetCounts);

          class t_RangeFacetCounts {
          public:
            PyObject_HEAD
            RangeFacetCounts object;
            static PyObject *wrap_Object(const RangeFacetCounts&);
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
