#ifndef org_apache_lucene_search_IndexSearcher_H
#define org_apache_lucene_search_IndexSearcher_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReaderContext;
        class Term;
        class TermContext;
        class StoredFieldVisitor;
        class IndexReader;
      }
      namespace search {
        class Sort;
        class Weight;
        namespace similarities {
          class Similarity;
        }
        class Explanation;
        class TopDocs;
        class Filter;
        class CollectionStatistics;
        class Collector;
        class Query;
        class TermStatistics;
        class ScoreDoc;
        class TopFieldDocs;
      }
      namespace document {
        class Document;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    namespace concurrent {
      class ExecutorService;
    }
    class Set;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndexSearcher : public ::java::lang::Object {
        public:
          enum {
            mid_init$_7d7eaea9,
            mid_init$_4df5686b,
            mid_init$_b62f0212,
            mid_init$_17c46694,
            mid_collectionStatistics_3acb4b2e,
            mid_createNormalizedWeight_fd935220,
            mid_doc_9c2cfcf9,
            mid_doc_f65cb155,
            mid_doc_a2ea3ebe,
            mid_document_f65cb155,
            mid_explain_5241f7f4,
            mid_getDefaultSimilarity_efcb1233,
            mid_getIndexReader_94bbd010,
            mid_getSimilarity_efcb1233,
            mid_getTopReaderContext_5823c99a,
            mid_rewrite_b1155c95,
            mid_search_01552069,
            mid_search_5e8d6ed3,
            mid_search_d8b721b3,
            mid_search_8e69de9d,
            mid_search_9a382bd2,
            mid_search_e8c6fc04,
            mid_search_e0d35976,
            mid_searchAfter_131bd79f,
            mid_searchAfter_fb33e921,
            mid_searchAfter_86183cf1,
            mid_searchAfter_59c01c23,
            mid_searchAfter_3f95b001,
            mid_setSimilarity_3b778066,
            mid_termStatistics_699f82fc,
            mid_toString_14c7b5c5,
            mid_search_d30ddef1,
            mid_search_8ccf64e3,
            mid_search_ec76ede8,
            mid_search_1352a6c3,
            mid_search_4d4907ad,
            mid_search_5b056f10,
            mid_explain_423d06cb,
            mid_slices_240d90fc,
            mid_wrapFilter_d642d32f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSearcher(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexSearcher(const IndexSearcher& obj) : ::java::lang::Object(obj) {}

          IndexSearcher(const ::org::apache::lucene::index::IndexReader &);
          IndexSearcher(const ::org::apache::lucene::index::IndexReaderContext &);
          IndexSearcher(const ::org::apache::lucene::index::IndexReaderContext &, const ::java::util::concurrent::ExecutorService &);
          IndexSearcher(const ::org::apache::lucene::index::IndexReader &, const ::java::util::concurrent::ExecutorService &);

          ::org::apache::lucene::search::CollectionStatistics collectionStatistics(const ::java::lang::String &) const;
          ::org::apache::lucene::search::Weight createNormalizedWeight(const ::org::apache::lucene::search::Query &) const;
          ::org::apache::lucene::document::Document doc(jint) const;
          ::org::apache::lucene::document::Document doc(jint, const ::java::util::Set &) const;
          void doc(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          ::org::apache::lucene::document::Document document(jint, const ::java::util::Set &) const;
          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::Query &, jint) const;
          static ::org::apache::lucene::search::similarities::Similarity getDefaultSimilarity();
          ::org::apache::lucene::index::IndexReader getIndexReader() const;
          ::org::apache::lucene::search::similarities::Similarity getSimilarity() const;
          ::org::apache::lucene::index::IndexReaderContext getTopReaderContext() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::Query &) const;
          void search(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Collector &) const;
          ::org::apache::lucene::search::TopDocs search(const ::org::apache::lucene::search::Query &, jint) const;
          void search(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, const ::org::apache::lucene::search::Collector &) const;
          ::org::apache::lucene::search::TopDocs search(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, jint) const;
          ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &) const;
          ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, jint, const ::org::apache::lucene::search::Sort &) const;
          ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, jint, const ::org::apache::lucene::search::Sort &, jboolean, jboolean) const;
          ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint) const;
          ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &) const;
          ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, jint) const;
          ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, jint, const ::org::apache::lucene::search::Sort &) const;
          ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, jint, const ::org::apache::lucene::search::Sort &, jboolean, jboolean) const;
          void setSimilarity(const ::org::apache::lucene::search::similarities::Similarity &) const;
          ::org::apache::lucene::search::TermStatistics termStatistics(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::index::TermContext &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(IndexSearcher);

        class t_IndexSearcher {
        public:
          PyObject_HEAD
          IndexSearcher object;
          static PyObject *wrap_Object(const IndexSearcher&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
