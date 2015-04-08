#ifndef org_apache_lucene_queryparser_surround_query_OrQuery_H
#define org_apache_lucene_queryparser_surround_query_OrQuery_H

#include "org/apache/lucene/queryparser/surround/query/ComposedQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
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

            class OrQuery : public ::org::apache::lucene::queryparser::surround::query::ComposedQuery {
            public:
              enum {
                mid_init$_4136185e,
                mid_addSpanQueries_0564f431,
                mid_distanceSubQueryNotAllowed_14c7b5c5,
                mid_makeLuceneQueryFieldNoBoost_1aaeee30,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit OrQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              OrQuery(const OrQuery& obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {}

              OrQuery(const ::java::util::List &, jboolean, const ::java::lang::String &);

              void addSpanQueries(const ::org::apache::lucene::queryparser::surround::query::SpanNearClauseFactory &) const;
              ::java::lang::String distanceSubQueryNotAllowed() const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
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
            extern PyTypeObject PY_TYPE(OrQuery);

            class t_OrQuery {
            public:
              PyObject_HEAD
              OrQuery object;
              static PyObject *wrap_Object(const OrQuery&);
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
