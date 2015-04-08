#ifndef org_apache_lucene_facet_RandomSamplingFacetsCollector_H
#define org_apache_lucene_facet_RandomSamplingFacetsCollector_H

#include "org/apache/lucene/facet/FacetsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
        class FacetsConfig;
        class FacetsCollector$MatchingDocs;
      }
      namespace search {
        class IndexSearcher;
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

        class RandomSamplingFacetsCollector : public ::org::apache::lucene::facet::FacetsCollector {
        public:
          enum {
            mid_init$_39c7bd3c,
            mid_init$_03b232b5,
            mid_amortizeFacetCounts_25b169d3,
            mid_getMatchingDocs_87851566,
            mid_getOriginalMatchingDocs_87851566,
            mid_getSamplingRate_54c6a174,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RandomSamplingFacetsCollector(jobject obj) : ::org::apache::lucene::facet::FacetsCollector(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RandomSamplingFacetsCollector(const RandomSamplingFacetsCollector& obj) : ::org::apache::lucene::facet::FacetsCollector(obj) {}

          RandomSamplingFacetsCollector(jint);
          RandomSamplingFacetsCollector(jint, jlong);

          ::org::apache::lucene::facet::FacetResult amortizeFacetCounts(const ::org::apache::lucene::facet::FacetResult &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::search::IndexSearcher &) const;
          ::java::util::List getMatchingDocs() const;
          ::java::util::List getOriginalMatchingDocs() const;
          jdouble getSamplingRate() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyTypeObject PY_TYPE(RandomSamplingFacetsCollector);

        class t_RandomSamplingFacetsCollector {
        public:
          PyObject_HEAD
          RandomSamplingFacetsCollector object;
          static PyObject *wrap_Object(const RandomSamplingFacetsCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
