#ifndef org_apache_lucene_search_MultiTermQuery$ConstantScoreAutoRewrite_H
#define org_apache_lucene_search_MultiTermQuery$ConstantScoreAutoRewrite_H

#include "org/apache/lucene/search/ConstantScoreAutoRewrite.h"

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

        class MultiTermQuery$ConstantScoreAutoRewrite : public ::org::apache::lucene::search::ConstantScoreAutoRewrite {
        public:
          enum {
            mid_init$_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiTermQuery$ConstantScoreAutoRewrite(jobject obj) : ::org::apache::lucene::search::ConstantScoreAutoRewrite(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiTermQuery$ConstantScoreAutoRewrite(const MultiTermQuery$ConstantScoreAutoRewrite& obj) : ::org::apache::lucene::search::ConstantScoreAutoRewrite(obj) {}

          MultiTermQuery$ConstantScoreAutoRewrite();
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
        extern PyTypeObject PY_TYPE(MultiTermQuery$ConstantScoreAutoRewrite);

        class t_MultiTermQuery$ConstantScoreAutoRewrite {
        public:
          PyObject_HEAD
          MultiTermQuery$ConstantScoreAutoRewrite object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MultiTermQuery$ConstantScoreAutoRewrite *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MultiTermQuery$ConstantScoreAutoRewrite&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MultiTermQuery$ConstantScoreAutoRewrite&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
