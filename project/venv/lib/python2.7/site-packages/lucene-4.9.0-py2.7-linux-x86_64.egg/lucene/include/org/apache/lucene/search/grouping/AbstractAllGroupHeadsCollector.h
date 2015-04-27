#ifndef org_apache_lucene_search_grouping_AbstractAllGroupHeadsCollector_H
#define org_apache_lucene_search_grouping_AbstractAllGroupHeadsCollector_H

#include "org/apache/lucene/search/Collector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class FixedBitSet;
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

          class AbstractAllGroupHeadsCollector : public ::org::apache::lucene::search::Collector {
          public:
            enum {
              mid_acceptsDocsOutOfOrder_54c6a16a,
              mid_collect_39c7bd3c,
              mid_groupHeadsSize_54c6a179,
              mid_retrieveGroupHeads_dab10e75,
              mid_retrieveGroupHeads_e64a66db,
              mid_retrieveGroupHeadAndAddIfNotExist_39c7bd3c,
              mid_getCollectedGroupHeads_2d2d7de4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractAllGroupHeadsCollector(jobject obj) : ::org::apache::lucene::search::Collector(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractAllGroupHeadsCollector(const AbstractAllGroupHeadsCollector& obj) : ::org::apache::lucene::search::Collector(obj) {}

            jboolean acceptsDocsOutOfOrder() const;
            void collect(jint) const;
            jint groupHeadsSize() const;
            JArray< jint > retrieveGroupHeads() const;
            ::org::apache::lucene::util::FixedBitSet retrieveGroupHeads(jint) const;
          };
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
          extern PyTypeObject PY_TYPE(AbstractAllGroupHeadsCollector);

          class t_AbstractAllGroupHeadsCollector {
          public:
            PyObject_HEAD
            AbstractAllGroupHeadsCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractAllGroupHeadsCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractAllGroupHeadsCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractAllGroupHeadsCollector&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
