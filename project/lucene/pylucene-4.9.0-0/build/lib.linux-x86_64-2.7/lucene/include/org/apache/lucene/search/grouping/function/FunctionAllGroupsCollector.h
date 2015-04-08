#ifndef org_apache_lucene_search_grouping_function_FunctionAllGroupsCollector_H
#define org_apache_lucene_search_grouping_function_FunctionAllGroupsCollector_H

#include "org/apache/lucene/search/grouping/AbstractAllGroupsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {
          class MutableValue;
        }
      }
      namespace index {
        class AtomicReaderContext;
      }
      namespace queries {
        namespace function {
          class ValueSource;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Collection;
  }
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
        namespace grouping {
          namespace function {

            class FunctionAllGroupsCollector : public ::org::apache::lucene::search::grouping::AbstractAllGroupsCollector {
            public:
              enum {
                mid_init$_9d3ebac8,
                mid_collect_39c7bd3c,
                mid_getGroups_2d2d7de4,
                mid_setNextReader_a6f59947,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FunctionAllGroupsCollector(jobject obj) : ::org::apache::lucene::search::grouping::AbstractAllGroupsCollector(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FunctionAllGroupsCollector(const FunctionAllGroupsCollector& obj) : ::org::apache::lucene::search::grouping::AbstractAllGroupsCollector(obj) {}

              FunctionAllGroupsCollector(const ::org::apache::lucene::queries::function::ValueSource &, const ::java::util::Map &);

              void collect(jint) const;
              ::java::util::Collection getGroups() const;
              void setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
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
            extern PyTypeObject PY_TYPE(FunctionAllGroupsCollector);

            class t_FunctionAllGroupsCollector {
            public:
              PyObject_HEAD
              FunctionAllGroupsCollector object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FunctionAllGroupsCollector *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FunctionAllGroupsCollector&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FunctionAllGroupsCollector&, PyTypeObject *);
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
