#ifndef org_apache_lucene_search_grouping_function_FunctionAllGroupHeadsCollector_H
#define org_apache_lucene_search_grouping_function_FunctionAllGroupHeadsCollector_H

#include "org/apache/lucene/search/grouping/AbstractAllGroupHeadsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class Sort;
        class Scorer;
        namespace grouping {
          namespace function {
            class FunctionAllGroupHeadsCollector$GroupHead;
          }
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

            class FunctionAllGroupHeadsCollector : public ::org::apache::lucene::search::grouping::AbstractAllGroupHeadsCollector {
            public:
              enum {
                mid_init$_0f36bb74,
                mid_setNextReader_a6f59947,
                mid_setScorer_8be0880c,
                mid_retrieveGroupHeadAndAddIfNotExist_39c7bd3c,
                mid_getCollectedGroupHeads_2d2d7de4,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FunctionAllGroupHeadsCollector(jobject obj) : ::org::apache::lucene::search::grouping::AbstractAllGroupHeadsCollector(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FunctionAllGroupHeadsCollector(const FunctionAllGroupHeadsCollector& obj) : ::org::apache::lucene::search::grouping::AbstractAllGroupHeadsCollector(obj) {}

              FunctionAllGroupHeadsCollector(const ::org::apache::lucene::queries::function::ValueSource &, const ::java::util::Map &, const ::org::apache::lucene::search::Sort &);

              void setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
              void setScorer(const ::org::apache::lucene::search::Scorer &) const;
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
            extern PyTypeObject PY_TYPE(FunctionAllGroupHeadsCollector);

            class t_FunctionAllGroupHeadsCollector {
            public:
              PyObject_HEAD
              FunctionAllGroupHeadsCollector object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FunctionAllGroupHeadsCollector *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FunctionAllGroupHeadsCollector&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FunctionAllGroupHeadsCollector&, PyTypeObject *);
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
