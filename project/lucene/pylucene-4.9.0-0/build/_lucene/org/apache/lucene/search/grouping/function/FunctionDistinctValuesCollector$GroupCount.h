#ifndef org_apache_lucene_search_grouping_function_FunctionDistinctValuesCollector$GroupCount_H
#define org_apache_lucene_search_grouping_function_FunctionDistinctValuesCollector$GroupCount_H

#include "org/apache/lucene/search/grouping/AbstractDistinctValuesCollector$GroupCount.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {
          class MutableValue;
        }
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
        namespace grouping {
          namespace function {

            class FunctionDistinctValuesCollector$GroupCount : public ::org::apache::lucene::search::grouping::AbstractDistinctValuesCollector$GroupCount {
            public:

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FunctionDistinctValuesCollector$GroupCount(jobject obj) : ::org::apache::lucene::search::grouping::AbstractDistinctValuesCollector$GroupCount(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FunctionDistinctValuesCollector$GroupCount(const FunctionDistinctValuesCollector$GroupCount& obj) : ::org::apache::lucene::search::grouping::AbstractDistinctValuesCollector$GroupCount(obj) {}
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
      namespace search {
        namespace grouping {
          namespace function {
            extern PyTypeObject PY_TYPE(FunctionDistinctValuesCollector$GroupCount);

            class t_FunctionDistinctValuesCollector$GroupCount {
            public:
              PyObject_HEAD
              FunctionDistinctValuesCollector$GroupCount object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FunctionDistinctValuesCollector$GroupCount *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FunctionDistinctValuesCollector$GroupCount&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FunctionDistinctValuesCollector$GroupCount&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
