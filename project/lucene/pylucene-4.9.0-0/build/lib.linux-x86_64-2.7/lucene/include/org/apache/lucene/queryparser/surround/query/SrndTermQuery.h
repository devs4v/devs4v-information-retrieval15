#ifndef org_apache_lucene_queryparser_surround_query_SrndTermQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndTermQuery_H

#include "org/apache/lucene/queryparser/surround/query/SimpleTerm.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexReader;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class SimpleTerm$MatchingTermVisitor;
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

            class SrndTermQuery : public ::org::apache::lucene::queryparser::surround::query::SimpleTerm {
            public:
              enum {
                mid_init$_f3691645,
                mid_getLuceneTerm_2864f4ee,
                mid_getTermText_14c7b5c5,
                mid_toStringUnquoted_14c7b5c5,
                mid_visitMatchingTerms_330199a1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SrndTermQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SrndTermQuery(const SrndTermQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {}

              SrndTermQuery(const ::java::lang::String &, jboolean);

              ::org::apache::lucene::index::Term getLuceneTerm(const ::java::lang::String &) const;
              ::java::lang::String getTermText() const;
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
            extern PyTypeObject PY_TYPE(SrndTermQuery);

            class t_SrndTermQuery {
            public:
              PyObject_HEAD
              SrndTermQuery object;
              static PyObject *wrap_Object(const SrndTermQuery&);
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
