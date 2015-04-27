#ifndef org_apache_lucene_facet_FacetsCollector_H
#define org_apache_lucene_facet_FacetsCollector_H

#include "org/apache/lucene/search/Collector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector$MatchingDocs;
      }
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class Sort;
        class Filter;
        class TopFieldDocs;
        class TopDocs;
        class IndexSearcher;
        class Scorer;
        class Query;
        class ScoreDoc;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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

        class FacetsCollector : public ::org::apache::lucene::search::Collector {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_bb0c767f,
            mid_acceptsDocsOutOfOrder_54c6a16a,
            mid_collect_39c7bd3c,
            mid_getKeepScores_54c6a16a,
            mid_getMatchingDocs_87851566,
            mid_search_670d4dc3,
            mid_search_904a71a9,
            mid_search_d8966278,
            mid_search_c564507a,
            mid_searchAfter_4ab72933,
            mid_searchAfter_be14f375,
            mid_searchAfter_8d45b2eb,
            mid_searchAfter_b14f4589,
            mid_setNextReader_a6f59947,
            mid_setScorer_8be0880c,
            mid_createDocs_04d72adb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsCollector(jobject obj) : ::org::apache::lucene::search::Collector(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FacetsCollector(const FacetsCollector& obj) : ::org::apache::lucene::search::Collector(obj) {}

          FacetsCollector();
          FacetsCollector(jboolean);

          jboolean acceptsDocsOutOfOrder() const;
          void collect(jint) const;
          jboolean getKeepScores() const;
          ::java::util::List getMatchingDocs() const;
          static ::org::apache::lucene::search::TopDocs search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopDocs search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, jint, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, jint, const ::org::apache::lucene::search::Sort &, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, jint, const ::org::apache::lucene::search::Sort &, jboolean, jboolean, const ::org::apache::lucene::search::Collector &);
          ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Collector &) const;
          static ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, jint, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, jint, const ::org::apache::lucene::search::Sort &, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, jint, const ::org::apache::lucene::search::Sort &, jboolean, jboolean, const ::org::apache::lucene::search::Collector &);
          void setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
          void setScorer(const ::org::apache::lucene::search::Scorer &) const;
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
        extern PyTypeObject PY_TYPE(FacetsCollector);

        class t_FacetsCollector {
        public:
          PyObject_HEAD
          FacetsCollector object;
          static PyObject *wrap_Object(const FacetsCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
