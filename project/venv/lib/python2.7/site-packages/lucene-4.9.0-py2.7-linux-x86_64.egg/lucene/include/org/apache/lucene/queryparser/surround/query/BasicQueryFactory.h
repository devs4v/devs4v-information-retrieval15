#ifndef org_apache_lucene_queryparser_surround_query_BasicQueryFactory_H
#define org_apache_lucene_queryparser_surround_query_BasicQueryFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class TooManyBasicQueries;
          }
        }
      }
      namespace search {
        class TermQuery;
        namespace spans {
          class SpanTermQuery;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {

            class BasicQueryFactory : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                mid_init$_39c7bd3c,
                mid_equals_290588e2,
                mid_getMaxBasicQueries_54c6a179,
                mid_getNrQueriesMade_54c6a179,
                mid_hashCode_54c6a179,
                mid_newSpanTermQuery_538d14f1,
                mid_newTermQuery_ab5e03f9,
                mid_toString_14c7b5c5,
                mid_checkMax_54c6a166,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BasicQueryFactory(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              BasicQueryFactory(const BasicQueryFactory& obj) : ::java::lang::Object(obj) {}

              BasicQueryFactory();
              BasicQueryFactory(jint);

              jboolean equals(const ::java::lang::Object &) const;
              jint getMaxBasicQueries() const;
              jint getNrQueriesMade() const;
              jint hashCode() const;
              ::org::apache::lucene::search::spans::SpanTermQuery newSpanTermQuery(const ::org::apache::lucene::index::Term &) const;
              ::org::apache::lucene::search::TermQuery newTermQuery(const ::org::apache::lucene::index::Term &) const;
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
            extern PyTypeObject PY_TYPE(BasicQueryFactory);

            class t_BasicQueryFactory {
            public:
              PyObject_HEAD
              BasicQueryFactory object;
              static PyObject *wrap_Object(const BasicQueryFactory&);
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
