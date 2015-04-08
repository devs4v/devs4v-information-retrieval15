#ifndef org_apache_lucene_search_grouping_AbstractAllGroupsCollector_H
#define org_apache_lucene_search_grouping_AbstractAllGroupsCollector_H

#include "org/apache/lucene/search/Collector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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

          class AbstractAllGroupsCollector : public ::org::apache::lucene::search::Collector {
          public:
            enum {
              mid_init$_54c6a166,
              mid_acceptsDocsOutOfOrder_54c6a16a,
              mid_getGroupCount_54c6a179,
              mid_getGroups_2d2d7de4,
              mid_setScorer_8be0880c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractAllGroupsCollector(jobject obj) : ::org::apache::lucene::search::Collector(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractAllGroupsCollector(const AbstractAllGroupsCollector& obj) : ::org::apache::lucene::search::Collector(obj) {}

            AbstractAllGroupsCollector();

            jboolean acceptsDocsOutOfOrder() const;
            jint getGroupCount() const;
            ::java::util::Collection getGroups() const;
            void setScorer(const ::org::apache::lucene::search::Scorer &) const;
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
          extern PyTypeObject PY_TYPE(AbstractAllGroupsCollector);

          class t_AbstractAllGroupsCollector {
          public:
            PyObject_HEAD
            AbstractAllGroupsCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractAllGroupsCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractAllGroupsCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractAllGroupsCollector&, PyTypeObject *);
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
