#ifndef org_apache_lucene_queryparser_surround_query_SrndTruncQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndTruncQuery_H

#include "org/apache/lucene/queryparser/surround/query/SimpleTerm.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
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

            class SrndTruncQuery : public ::org::apache::lucene::queryparser::surround::query::SimpleTerm {
            public:
              enum {
                mid_init$_d9707974,
                mid_getTruncated_14c7b5c5,
                mid_toStringUnquoted_14c7b5c5,
                mid_visitMatchingTerms_330199a1,
                mid_matchingChar_87fd5456,
                mid_appendRegExpForChar_1dca1640,
                mid_truncatedToPrefixAndPattern_54c6a166,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SrndTruncQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SrndTruncQuery(const SrndTruncQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {}

              SrndTruncQuery(const ::java::lang::String &, jchar, jchar);

              ::java::lang::String getTruncated() const;
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
            extern PyTypeObject PY_TYPE(SrndTruncQuery);

            class t_SrndTruncQuery {
            public:
              PyObject_HEAD
              SrndTruncQuery object;
              static PyObject *wrap_Object(const SrndTruncQuery&);
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
