#ifndef org_apache_lucene_search_FilteredQuery_H
#define org_apache_lucene_search_FilteredQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexReader;
      }
      namespace search {
        class IndexSearcher;
        class Filter;
        class FilteredQuery$FilterStrategy;
        class Weight;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace util {
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

        class FilteredQuery : public ::org::apache::lucene::search::Query {
        public:
          enum {
            mid_init$_96ca297d,
            mid_init$_61c4287b,
            mid_createWeight_367763cb,
            mid_equals_290588e2,
            mid_extractTerms_fb4f2b26,
            mid_getFilter_b40f961f,
            mid_getFilterStrategy_98d3690b,
            mid_getQuery_97e3851a,
            mid_hashCode_54c6a179,
            mid_rewrite_7edcaa43,
            mid_toString_97a5258f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilteredQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilteredQuery(const FilteredQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          static ::org::apache::lucene::search::FilteredQuery$FilterStrategy *LEAP_FROG_FILTER_FIRST_STRATEGY;
          static ::org::apache::lucene::search::FilteredQuery$FilterStrategy *LEAP_FROG_QUERY_FIRST_STRATEGY;
          static ::org::apache::lucene::search::FilteredQuery$FilterStrategy *QUERY_FIRST_FILTER_STRATEGY;
          static ::org::apache::lucene::search::FilteredQuery$FilterStrategy *RANDOM_ACCESS_FILTER_STRATEGY;

          FilteredQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &);
          FilteredQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Filter &, const ::org::apache::lucene::search::FilteredQuery$FilterStrategy &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void extractTerms(const ::java::util::Set &) const;
          ::org::apache::lucene::search::Filter getFilter() const;
          ::org::apache::lucene::search::FilteredQuery$FilterStrategy getFilterStrategy() const;
          ::org::apache::lucene::search::Query getQuery() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          ::java::lang::String toString(const ::java::lang::String &) const;
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
        extern PyTypeObject PY_TYPE(FilteredQuery);

        class t_FilteredQuery {
        public:
          PyObject_HEAD
          FilteredQuery object;
          static PyObject *wrap_Object(const FilteredQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
