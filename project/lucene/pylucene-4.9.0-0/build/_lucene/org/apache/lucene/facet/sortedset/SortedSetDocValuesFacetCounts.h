#ifndef org_apache_lucene_facet_sortedset_SortedSetDocValuesFacetCounts_H
#define org_apache_lucene_facet_sortedset_SortedSetDocValuesFacetCounts_H

#include "org/apache/lucene/facet/Facets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {
          class SortedSetDocValuesReaderState;
        }
        class FacetResult;
        class FacetsCollector;
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
        namespace sortedset {

          class SortedSetDocValuesFacetCounts : public ::org::apache::lucene::facet::Facets {
          public:
            enum {
              mid_init$_2661b27e,
              mid_getAllDims_cdc2a528,
              mid_getSpecificValue_8ecbcac9,
              mid_getTopChildren_37e8c044,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedSetDocValuesFacetCounts(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SortedSetDocValuesFacetCounts(const SortedSetDocValuesFacetCounts& obj) : ::org::apache::lucene::facet::Facets(obj) {}

            SortedSetDocValuesFacetCounts(const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &, const ::org::apache::lucene::facet::FacetsCollector &);

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
        namespace sortedset {
          extern PyTypeObject PY_TYPE(SortedSetDocValuesFacetCounts);

          class t_SortedSetDocValuesFacetCounts {
          public:
            PyObject_HEAD
            SortedSetDocValuesFacetCounts object;
            static PyObject *wrap_Object(const SortedSetDocValuesFacetCounts&);
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
