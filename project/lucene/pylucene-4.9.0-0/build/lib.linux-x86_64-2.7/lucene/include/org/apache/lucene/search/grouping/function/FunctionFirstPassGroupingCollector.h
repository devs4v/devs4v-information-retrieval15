#ifndef org_apache_lucene_search_grouping_function_FunctionFirstPassGroupingCollector_H
#define org_apache_lucene_search_grouping_function_FunctionFirstPassGroupingCollector_H

#include "org/apache/lucene/search/grouping/AbstractFirstPassGroupingCollector.h"

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
        class Sort;
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

            class FunctionFirstPassGroupingCollector : public ::org::apache::lucene::search::grouping::AbstractFirstPassGroupingCollector {
            public:
              enum {
                mid_init$_ef44e36a,
                mid_setNextReader_a6f59947,
                mid_getDocGroupValue_5767061f,
                mid_copyDocGroupValue_25e3929d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FunctionFirstPassGroupingCollector(jobject obj) : ::org::apache::lucene::search::grouping::AbstractFirstPassGroupingCollector(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FunctionFirstPassGroupingCollector(const FunctionFirstPassGroupingCollector& obj) : ::org::apache::lucene::search::grouping::AbstractFirstPassGroupingCollector(obj) {}

              FunctionFirstPassGroupingCollector(const ::org::apache::lucene::queries::function::ValueSource &, const ::java::util::Map &, const ::org::apache::lucene::search::Sort &, jint);

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
            extern PyTypeObject PY_TYPE(FunctionFirstPassGroupingCollector);

            class t_FunctionFirstPassGroupingCollector {
            public:
              PyObject_HEAD
              FunctionFirstPassGroupingCollector object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FunctionFirstPassGroupingCollector *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FunctionFirstPassGroupingCollector&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FunctionFirstPassGroupingCollector&, PyTypeObject *);
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
