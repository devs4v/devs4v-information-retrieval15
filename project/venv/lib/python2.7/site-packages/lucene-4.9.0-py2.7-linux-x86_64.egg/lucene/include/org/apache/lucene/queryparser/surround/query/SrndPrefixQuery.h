#ifndef org_apache_lucene_queryparser_surround_query_SrndPrefixQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndPrefixQuery_H

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

            class SrndPrefixQuery : public ::org::apache::lucene::queryparser::surround::query::SimpleTerm {
            public:
              enum {
                mid_init$_f33a591b,
                mid_getLucenePrefixTerm_2864f4ee,
                mid_getPrefix_14c7b5c5,
                mid_getSuffixOperator_54c6a173,
                mid_toStringUnquoted_14c7b5c5,
                mid_visitMatchingTerms_330199a1,
                mid_suffixToString_9f94ae34,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SrndPrefixQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SrndPrefixQuery(const SrndPrefixQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {}

              SrndPrefixQuery(const ::java::lang::String &, jboolean, jchar);

              ::org::apache::lucene::index::Term getLucenePrefixTerm(const ::java::lang::String &) const;
              ::java::lang::String getPrefix() const;
              jchar getSuffixOperator() const;
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
            extern PyTypeObject PY_TYPE(SrndPrefixQuery);

            class t_SrndPrefixQuery {
            public:
              PyObject_HEAD
              SrndPrefixQuery object;
              static PyObject *wrap_Object(const SrndPrefixQuery&);
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
