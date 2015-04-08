#ifndef org_apache_lucene_search_grouping_function_FunctionAllGroupHeadsCollector$GroupHead_H
#define org_apache_lucene_search_grouping_function_FunctionAllGroupHeadsCollector$GroupHead_H

#include "org/apache/lucene/search/grouping/AbstractAllGroupHeadsCollector$GroupHead.h"

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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          namespace function {

            class FunctionAllGroupHeadsCollector$GroupHead : public ::org::apache::lucene::search::grouping::AbstractAllGroupHeadsCollector$GroupHead {
            public:
              enum {
                mid_compare_d8d154b9,
                mid_updateDocHead_39c7bd3c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FunctionAllGroupHeadsCollector$GroupHead(jobject obj) : ::org::apache::lucene::search::grouping::AbstractAllGroupHeadsCollector$GroupHead(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FunctionAllGroupHeadsCollector$GroupHead(const FunctionAllGroupHeadsCollector$GroupHead& obj) : ::org::apache::lucene::search::grouping::AbstractAllGroupHeadsCollector$GroupHead(obj) {}

              jint compare(jint, jint) const;
              void updateDocHead(jint) const;
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
            extern PyTypeObject PY_TYPE(FunctionAllGroupHeadsCollector$GroupHead);

            class t_FunctionAllGroupHeadsCollector$GroupHead {
            public:
              PyObject_HEAD
              FunctionAllGroupHeadsCollector$GroupHead object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FunctionAllGroupHeadsCollector$GroupHead *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FunctionAllGroupHeadsCollector$GroupHead&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FunctionAllGroupHeadsCollector$GroupHead&, PyTypeObject *);
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
