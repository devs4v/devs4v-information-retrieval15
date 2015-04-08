#ifndef org_apache_lucene_search_grouping_function_FunctionDistinctValuesCollector_H
#define org_apache_lucene_search_grouping_function_FunctionDistinctValuesCollector_H

#include "org/apache/lucene/search/grouping/AbstractDistinctValuesCollector.h"

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
      namespace search {
        namespace grouping {
          namespace function {
            class FunctionDistinctValuesCollector$GroupCount;
          }
          class SearchGroup;
        }
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
    class List;
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

            class FunctionDistinctValuesCollector : public ::org::apache::lucene::search::grouping::AbstractDistinctValuesCollector {
            public:
              enum {
                mid_init$_86fd8007,
                mid_collect_39c7bd3c,
                mid_getGroups_87851566,
                mid_setNextReader_a6f59947,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FunctionDistinctValuesCollector(jobject obj) : ::org::apache::lucene::search::grouping::AbstractDistinctValuesCollector(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FunctionDistinctValuesCollector(const FunctionDistinctValuesCollector& obj) : ::org::apache::lucene::search::grouping::AbstractDistinctValuesCollector(obj) {}

              FunctionDistinctValuesCollector(const ::java::util::Map &, const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::queries::function::ValueSource &, const ::java::util::Collection &);

              void collect(jint) const;
              ::java::util::List getGroups() const;
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
            extern PyTypeObject PY_TYPE(FunctionDistinctValuesCollector);

            class t_FunctionDistinctValuesCollector {
            public:
              PyObject_HEAD
              FunctionDistinctValuesCollector object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FunctionDistinctValuesCollector *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FunctionDistinctValuesCollector&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FunctionDistinctValuesCollector&, PyTypeObject *);
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
