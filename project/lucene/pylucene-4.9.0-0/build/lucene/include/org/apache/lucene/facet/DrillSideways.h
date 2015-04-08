#ifndef org_apache_lucene_facet_DrillSideways_H
#define org_apache_lucene_facet_DrillSideways_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {
          class SortedSetDocValuesReaderState;
        }
        namespace taxonomy {
          class TaxonomyReader;
        }
        class DrillSideways$DrillSidewaysResult;
        class DrillDownQuery;
        class FacetsConfig;
      }
      namespace search {
        class Sort;
        class IndexSearcher;
        class Collector;
        class Filter;
        class ScoreDoc;
        class FieldDoc;
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

        class DrillSideways : public ::java::lang::Object {
        public:
          enum {
            mid_init$_47a6ec5e,
            mid_init$_f1ca4e8d,
            mid_init$_0ea4c17f,
            mid_search_f5942c04,
            mid_search_37cfd26e,
            mid_search_32a5c782,
            mid_search_8da44ba0,
            mid_scoreSubDocsAtOnce_54c6a16a,
            mid_buildFacetsResult_3bbe989f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DrillSideways(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DrillSideways(const DrillSideways& obj) : ::java::lang::Object(obj) {}

          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &);
          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &);
          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &);

          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::facet::DrillDownQuery &, const ::org::apache::lucene::search::Collector &) const;
          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::facet::DrillDownQuery &, jint) const;
          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::facet::DrillDownQuery &, jint) const;
          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::facet::DrillDownQuery &, const ::org::apache::lucene::search::Filter &, const ::org::apache::lucene::search::FieldDoc &, jint, const ::org::apache::lucene::search::Sort &, jboolean, jboolean) const;
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
        extern PyTypeObject PY_TYPE(DrillSideways);

        class t_DrillSideways {
        public:
          PyObject_HEAD
          DrillSideways object;
          static PyObject *wrap_Object(const DrillSideways&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
