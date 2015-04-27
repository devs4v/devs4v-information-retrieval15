#ifndef org_apache_lucene_queryparser_surround_query_SpanNearClauseFactory_H
#define org_apache_lucene_queryparser_surround_query_SpanNearClauseFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexReader;
      }
      namespace search {
        class Query;
        namespace spans {
          class SpanQuery;
        }
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
    class Class;
    class String;
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

            class SpanNearClauseFactory : public ::java::lang::Object {
            public:
              enum {
                mid_init$_e15223d7,
                mid_addSpanQuery_6e301113,
                mid_addTermWeighted_286d05ee,
                mid_clear_54c6a166,
                mid_getBasicQueryFactory_d652c3af,
                mid_getFieldName_14c7b5c5,
                mid_getIndexReader_94bbd010,
                mid_makeSpanClause_d3aa0332,
                mid_size_54c6a179,
                mid_addSpanQueryWeighted_3125e560,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SpanNearClauseFactory(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SpanNearClauseFactory(const SpanNearClauseFactory& obj) : ::java::lang::Object(obj) {}

              SpanNearClauseFactory(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &);

              void addSpanQuery(const ::org::apache::lucene::search::Query &) const;
              void addTermWeighted(const ::org::apache::lucene::index::Term &, jfloat) const;
              void clear() const;
              ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory getBasicQueryFactory() const;
              ::java::lang::String getFieldName() const;
              ::org::apache::lucene::index::IndexReader getIndexReader() const;
              ::org::apache::lucene::search::spans::SpanQuery makeSpanClause() const;
              jint size() const;
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
            extern PyTypeObject PY_TYPE(SpanNearClauseFactory);

            class t_SpanNearClauseFactory {
            public:
              PyObject_HEAD
              SpanNearClauseFactory object;
              static PyObject *wrap_Object(const SpanNearClauseFactory&);
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
