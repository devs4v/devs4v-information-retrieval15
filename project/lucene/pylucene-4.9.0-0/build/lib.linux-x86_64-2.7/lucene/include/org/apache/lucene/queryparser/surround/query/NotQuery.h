#ifndef org_apache_lucene_queryparser_surround_query_NotQuery_H
#define org_apache_lucene_queryparser_surround_query_NotQuery_H

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
            class BasicQueryFactory;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {

            class NotQuery : public ::org::apache::lucene::queryparser::surround::query::ComposedQuery {
            public:
              enum {
                mid_init$_f09ca325,
                mid_makeLuceneQueryFieldNoBoost_1aaeee30,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NotQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              NotQuery(const NotQuery& obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {}

              NotQuery(const ::java::util::List &, const ::java::lang::String &);

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
            extern PyTypeObject PY_TYPE(NotQuery);

            class t_NotQuery {
            public:
              PyObject_HEAD
              NotQuery object;
              static PyObject *wrap_Object(const NotQuery&);
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
