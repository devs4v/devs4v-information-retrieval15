#ifndef org_apache_lucene_queryparser_surround_query_SimpleTerm_H
#define org_apache_lucene_queryparser_surround_query_SimpleTerm_H

#include "org/apache/lucene/queryparser/surround/query/SrndQuery.h"

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
            class SimpleTerm$MatchingTermVisitor;
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
  namespace lang {
    class Comparable;
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

            class SimpleTerm : public ::org::apache::lucene::queryparser::surround::query::SrndQuery {
            public:
              enum {
                mid_init$_bb0c767f,
                mid_addSpanQueries_0564f431,
                mid_compareTo_a1a1be24,
                mid_distanceSubQueryNotAllowed_14c7b5c5,
                mid_getFieldOperator_14c7b5c5,
                mid_getQuote_14c7b5c5,
                mid_makeLuceneQueryFieldNoBoost_1aaeee30,
                mid_toString_14c7b5c5,
                mid_toStringUnquoted_14c7b5c5,
                mid_visitMatchingTerms_330199a1,
                mid_suffixToString_9f94ae34,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SimpleTerm(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SimpleTerm(const SimpleTerm& obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {}

              SimpleTerm(jboolean);

              void addSpanQueries(const ::org::apache::lucene::queryparser::surround::query::SpanNearClauseFactory &) const;
              jint compareTo(const SimpleTerm &) const;
              ::java::lang::String distanceSubQueryNotAllowed() const;
              ::java::lang::String getFieldOperator() const;
              ::java::lang::String getQuote() const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::java::lang::String toString() const;
              ::java::lang::String toStringUnquoted() const;
              void visitMatchingTerms(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::SimpleTerm$MatchingTermVisitor &) const;
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
            extern PyTypeObject PY_TYPE(SimpleTerm);

            class t_SimpleTerm {
            public:
              PyObject_HEAD
              SimpleTerm object;
              static PyObject *wrap_Object(const SimpleTerm&);
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
