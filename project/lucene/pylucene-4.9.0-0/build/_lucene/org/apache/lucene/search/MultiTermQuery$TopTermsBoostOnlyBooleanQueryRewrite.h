#ifndef org_apache_lucene_search_MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite_H
#define org_apache_lucene_search_MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite_H

#include "org/apache/lucene/search/TopTermsRewrite.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanQuery;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite : public ::org::apache::lucene::search::TopTermsRewrite {
        public:
          enum {
            mid_init$_39c7bd3c,
            mid_getMaxSize_54c6a179,
            mid_addClause_82a56efb,
            mid_getTopLevelQuery_6f9339e7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite(jobject obj) : ::org::apache::lucene::search::TopTermsRewrite(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite(const MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite& obj) : ::org::apache::lucene::search::TopTermsRewrite(obj) {}

          MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite(jint);
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
        extern PyTypeObject PY_TYPE(MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite);

        class t_MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite {
        public:
          PyObject_HEAD
          MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
