#ifndef org_apache_lucene_queryparser_surround_query_ComposedQuery_H
#define org_apache_lucene_queryparser_surround_query_ComposedQuery_H

#include "org/apache/lucene/queryparser/surround/query/SrndQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
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
    class Iterator;
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

            class ComposedQuery : public ::org::apache::lucene::queryparser::surround::query::SrndQuery {
            public:
              enum {
                mid_init$_4136185e,
                mid_getNrSubQueries_54c6a179,
                mid_getOperatorName_14c7b5c5,
                mid_getSubQueriesIterator_40858c90,
                mid_getSubQuery_4fe040f0,
                mid_isFieldsSubQueryAcceptable_54c6a16a,
                mid_isOperatorInfix_54c6a16a,
                mid_makeLuceneSubQueriesField_82c52c4c,
                mid_toString_14c7b5c5,
                mid_recompose_1fde8fc3,
                mid_getPrefixSeparator_14c7b5c5,
                mid_getBracketOpen_14c7b5c5,
                mid_getBracketClose_14c7b5c5,
                mid_infixToString_9f94ae34,
                mid_prefixToString_9f94ae34,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ComposedQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              ComposedQuery(const ComposedQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {}

              ComposedQuery(const ::java::util::List &, jboolean, const ::java::lang::String &);

              jint getNrSubQueries() const;
              ::java::lang::String getOperatorName() const;
              ::java::util::Iterator getSubQueriesIterator() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery getSubQuery(jint) const;
              jboolean isFieldsSubQueryAcceptable() const;
              jboolean isOperatorInfix() const;
              ::java::util::List makeLuceneSubQueriesField(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::java::lang::String toString() const;
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
            extern PyTypeObject PY_TYPE(ComposedQuery);

            class t_ComposedQuery {
            public:
              PyObject_HEAD
              ComposedQuery object;
              static PyObject *wrap_Object(const ComposedQuery&);
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
