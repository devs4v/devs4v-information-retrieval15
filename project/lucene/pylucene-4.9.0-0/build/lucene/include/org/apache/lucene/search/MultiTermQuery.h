#ifndef org_apache_lucene_search_MultiTermQuery_H
#define org_apache_lucene_search_MultiTermQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class MultiTermQuery$RewriteMethod;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
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
      namespace search {

        class MultiTermQuery : public ::org::apache::lucene::search::Query {
        public:
          enum {
            mid_init$_5fdc3f48,
            mid_equals_290588e2,
            mid_getField_14c7b5c5,
            mid_getRewriteMethod_8919154b,
            mid_hashCode_54c6a179,
            mid_rewrite_7edcaa43,
            mid_setRewriteMethod_c3c3909e,
            mid_getTermsEnum_fb3ac14e,
            mid_getTermsEnum_67b5a29a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiTermQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiTermQuery(const MultiTermQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *CONSTANT_SCORE_AUTO_REWRITE_DEFAULT;
          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *CONSTANT_SCORE_BOOLEAN_QUERY_REWRITE;
          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *CONSTANT_SCORE_FILTER_REWRITE;
          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *SCORING_BOOLEAN_QUERY_REWRITE;

          MultiTermQuery(const ::java::lang::String &);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getField() const;
          ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getRewriteMethod() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          void setRewriteMethod(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(MultiTermQuery);

        class t_MultiTermQuery {
        public:
          PyObject_HEAD
          MultiTermQuery object;
          static PyObject *wrap_Object(const MultiTermQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
