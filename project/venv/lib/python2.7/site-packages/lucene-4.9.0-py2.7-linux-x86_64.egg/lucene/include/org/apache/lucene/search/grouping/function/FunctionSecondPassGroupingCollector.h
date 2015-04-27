#ifndef org_apache_lucene_search_grouping_function_FunctionSecondPassGroupingCollector_H
#define org_apache_lucene_search_grouping_function_FunctionSecondPassGroupingCollector_H

#include "org/apache/lucene/search/grouping/AbstractSecondPassGroupingCollector.h"

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
        namespace grouping {
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
  namespace lang {
    class Object;
    class Class;
  }
  namespace util {
    class Map;
    class Collection;
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

            class FunctionSecondPassGroupingCollector : public ::org::apache::lucene::search::grouping::AbstractSecondPassGroupingCollector {
            public:
              enum {
                mid_init$_3599aebe,
                mid_setNextReader_a6f59947,
                mid_retrieveGroup_e4de8d52,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FunctionSecondPassGroupingCollector(jobject obj) : ::org::apache::lucene::search::grouping::AbstractSecondPassGroupingCollector(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FunctionSecondPassGroupingCollector(const FunctionSecondPassGroupingCollector& obj) : ::org::apache::lucene::search::grouping::AbstractSecondPassGroupingCollector(obj) {}

              FunctionSecondPassGroupingCollector(const ::java::util::Collection &, const ::org::apache::lucene::search::Sort &, const ::org::apache::lucene::search::Sort &, jint, jboolean, jboolean, jboolean, const ::org::apache::lucene::queries::function::ValueSource &, const ::java::util::Map &);

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
            extern PyTypeObject PY_TYPE(FunctionSecondPassGroupingCollector);

            class t_FunctionSecondPassGroupingCollector {
            public:
              PyObject_HEAD
              FunctionSecondPassGroupingCollector object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FunctionSecondPassGroupingCollector *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FunctionSecondPassGroupingCollector&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FunctionSecondPassGroupingCollector&, PyTypeObject *);
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
