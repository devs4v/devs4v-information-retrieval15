#ifndef org_apache_lucene_queryparser_surround_query_SrndQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndQuery_H

#include "java/lang/Object.h"

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
  namespace lang {
    class String;
    class Cloneable;
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

            class SrndQuery : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                mid_clone_26528772,
                mid_equals_290588e2,
                mid_getWeight_54c6a176,
                mid_getWeightOperator_14c7b5c5,
                mid_getWeightString_14c7b5c5,
                mid_hashCode_54c6a179,
                mid_isFieldsSubQueryAcceptable_54c6a16a,
                mid_isWeighted_54c6a16a,
                mid_makeLuceneQueryField_1aaeee30,
                mid_makeLuceneQueryFieldNoBoost_1aaeee30,
                mid_setWeight_06298cab,
                mid_toString_14c7b5c5,
                mid_weightToString_9f94ae34,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SrndQuery(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SrndQuery(const SrndQuery& obj) : ::java::lang::Object(obj) {}

              static ::org::apache::lucene::search::Query *theEmptyLcnQuery;

              SrndQuery();

              SrndQuery clone() const;
              jboolean equals(const ::java::lang::Object &) const;
              jfloat getWeight() const;
              ::java::lang::String getWeightOperator() const;
              ::java::lang::String getWeightString() const;
              jint hashCode() const;
              jboolean isFieldsSubQueryAcceptable() const;
              jboolean isWeighted() const;
              ::org::apache::lucene::search::Query makeLuceneQueryField(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              void setWeight(jfloat) const;
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
            extern PyTypeObject PY_TYPE(SrndQuery);

            class t_SrndQuery {
            public:
              PyObject_HEAD
              SrndQuery object;
              static PyObject *wrap_Object(const SrndQuery&);
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
