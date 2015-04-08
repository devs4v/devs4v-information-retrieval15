#ifndef org_apache_lucene_queryparser_surround_query_DistanceQuery_H
#define org_apache_lucene_queryparser_surround_query_DistanceQuery_H

#include "org/apache/lucene/queryparser/surround/query/ComposedQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class SrndQuery;
            class SpanNearClauseFactory;
            class BasicQueryFactory;
            class DistanceSubQuery;
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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
      namespace queryparser {
        namespace surround {
          namespace query {

            class DistanceQuery : public ::org::apache::lucene::queryparser::surround::query::ComposedQuery {
            public:
              enum {
                mid_init$_6c38956d,
                mid_addSpanQueries_0564f431,
                mid_distanceSubQueryNotAllowed_14c7b5c5,
                mid_getOpDistance_54c6a179,
                mid_getSpanNearQuery_b440d198,
                mid_makeLuceneQueryFieldNoBoost_1aaeee30,
                mid_subQueriesOrdered_54c6a16a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DistanceQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              DistanceQuery(const DistanceQuery& obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {}

              DistanceQuery(const ::java::util::List &, jboolean, jint, const ::java::lang::String &, jboolean);

              void addSpanQueries(const ::org::apache::lucene::queryparser::surround::query::SpanNearClauseFactory &) const;
              ::java::lang::String distanceSubQueryNotAllowed() const;
              jint getOpDistance() const;
              ::org::apache::lucene::search::Query getSpanNearQuery(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, jfloat, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              jboolean subQueriesOrdered() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            extern PyTypeObject PY_TYPE(DistanceQuery);

            class t_DistanceQuery {
            public:
              PyObject_HEAD
              DistanceQuery object;
              static PyObject *wrap_Object(const DistanceQuery&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
