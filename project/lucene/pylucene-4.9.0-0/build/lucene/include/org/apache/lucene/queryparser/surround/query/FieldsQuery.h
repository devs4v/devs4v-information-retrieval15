#ifndef org_apache_lucene_queryparser_surround_query_FieldsQuery_H
#define org_apache_lucene_queryparser_surround_query_FieldsQuery_H

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

            class FieldsQuery : public ::org::apache::lucene::queryparser::surround::query::SrndQuery {
            public:
              enum {
                mid_init$_2649f1ba,
                mid_init$_bcbc5f3f,
                mid_getFieldNames_87851566,
                mid_getFieldOperator_54c6a173,
                mid_isFieldsSubQueryAcceptable_54c6a16a,
                mid_makeLuceneQueryFieldNoBoost_1aaeee30,
                mid_makeLuceneQueryNoBoost_3d79835e,
                mid_toString_14c7b5c5,
                mid_fieldNamesToString_9f94ae34,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldsQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FieldsQuery(const FieldsQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {}

              FieldsQuery(const ::org::apache::lucene::queryparser::surround::query::SrndQuery &, const ::java::util::List &, jchar);
              FieldsQuery(const ::org::apache::lucene::queryparser::surround::query::SrndQuery &, const ::java::lang::String &, jchar);

              ::java::util::List getFieldNames() const;
              jchar getFieldOperator() const;
              jboolean isFieldsSubQueryAcceptable() const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::org::apache::lucene::search::Query makeLuceneQueryNoBoost(const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
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
            extern PyTypeObject PY_TYPE(FieldsQuery);

            class t_FieldsQuery {
            public:
              PyObject_HEAD
              FieldsQuery object;
              static PyObject *wrap_Object(const FieldsQuery&);
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
