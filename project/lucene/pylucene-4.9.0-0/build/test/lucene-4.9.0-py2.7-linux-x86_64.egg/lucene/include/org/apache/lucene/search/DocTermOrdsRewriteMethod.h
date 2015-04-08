#ifndef org_apache_lucene_search_DocTermOrdsRewriteMethod_H
#define org_apache_lucene_search_DocTermOrdsRewriteMethod_H

#include "org/apache/lucene/search/MultiTermQuery$RewriteMethod.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class Query;
        class MultiTermQuery;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DocTermOrdsRewriteMethod : public ::org::apache::lucene::search::MultiTermQuery$RewriteMethod {
        public:
          enum {
            mid_init$_54c6a166,
            mid_equals_290588e2,
            mid_hashCode_54c6a179,
            mid_rewrite_925c5bbc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocTermOrdsRewriteMethod(jobject obj) : ::org::apache::lucene::search::MultiTermQuery$RewriteMethod(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DocTermOrdsRewriteMethod(const DocTermOrdsRewriteMethod& obj) : ::org::apache::lucene::search::MultiTermQuery$RewriteMethod(obj) {}

          DocTermOrdsRewriteMethod();

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::MultiTermQuery &) const;
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
        extern PyTypeObject PY_TYPE(DocTermOrdsRewriteMethod);

        class t_DocTermOrdsRewriteMethod {
        public:
          PyObject_HEAD
          DocTermOrdsRewriteMethod object;
          static PyObject *wrap_Object(const DocTermOrdsRewriteMethod&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
