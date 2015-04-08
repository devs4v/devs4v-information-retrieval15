#ifndef org_apache_lucene_search_TopTermsRewrite_H
#define org_apache_lucene_search_TopTermsRewrite_H

#include "org/apache/lucene/search/TermCollectingRewrite.h"

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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TopTermsRewrite : public ::org::apache::lucene::search::TermCollectingRewrite {
        public:
          enum {
            mid_init$_39c7bd3c,
            mid_equals_290588e2,
            mid_getSize_54c6a179,
            mid_hashCode_54c6a179,
            mid_rewrite_925c5bbc,
            mid_getMaxSize_54c6a179,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopTermsRewrite(jobject obj) : ::org::apache::lucene::search::TermCollectingRewrite(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TopTermsRewrite(const TopTermsRewrite& obj) : ::org::apache::lucene::search::TermCollectingRewrite(obj) {}

          TopTermsRewrite(jint);

          jboolean equals(const ::java::lang::Object &) const;
          jint getSize() const;
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
        extern PyTypeObject PY_TYPE(TopTermsRewrite);

        class t_TopTermsRewrite {
        public:
          PyObject_HEAD
          TopTermsRewrite object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopTermsRewrite *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopTermsRewrite&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopTermsRewrite&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
