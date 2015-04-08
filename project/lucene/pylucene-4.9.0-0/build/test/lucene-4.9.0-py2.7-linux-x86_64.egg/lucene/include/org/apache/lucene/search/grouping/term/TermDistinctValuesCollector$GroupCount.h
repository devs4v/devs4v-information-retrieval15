#ifndef org_apache_lucene_search_grouping_term_TermDistinctValuesCollector$GroupCount_H
#define org_apache_lucene_search_grouping_term_TermDistinctValuesCollector$GroupCount_H

#include "org/apache/lucene/search/grouping/AbstractDistinctValuesCollector$GroupCount.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
          namespace term {

            class TermDistinctValuesCollector$GroupCount : public ::org::apache::lucene::search::grouping::AbstractDistinctValuesCollector$GroupCount {
            public:

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TermDistinctValuesCollector$GroupCount(jobject obj) : ::org::apache::lucene::search::grouping::AbstractDistinctValuesCollector$GroupCount(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              TermDistinctValuesCollector$GroupCount(const TermDistinctValuesCollector$GroupCount& obj) : ::org::apache::lucene::search::grouping::AbstractDistinctValuesCollector$GroupCount(obj) {}
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
          namespace term {
            extern PyTypeObject PY_TYPE(TermDistinctValuesCollector$GroupCount);

            class t_TermDistinctValuesCollector$GroupCount {
            public:
              PyObject_HEAD
              TermDistinctValuesCollector$GroupCount object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_TermDistinctValuesCollector$GroupCount *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TermDistinctValuesCollector$GroupCount&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TermDistinctValuesCollector$GroupCount&, PyTypeObject *);
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
