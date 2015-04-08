#ifndef org_apache_lucene_search_grouping_AbstractDistinctValuesCollector_H
#define org_apache_lucene_search_grouping_AbstractDistinctValuesCollector_H

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
    class List;
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

          class AbstractDistinctValuesCollector : public ::org::apache::lucene::search::Collector {
          public:
            enum {
              mid_init$_54c6a166,
              mid_acceptsDocsOutOfOrder_54c6a16a,
              mid_getGroups_87851566,
              mid_setScorer_8be0880c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractDistinctValuesCollector(jobject obj) : ::org::apache::lucene::search::Collector(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractDistinctValuesCollector(const AbstractDistinctValuesCollector& obj) : ::org::apache::lucene::search::Collector(obj) {}

            AbstractDistinctValuesCollector();

            jboolean acceptsDocsOutOfOrder() const;
            ::java::util::List getGroups() const;
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
          extern PyTypeObject PY_TYPE(AbstractDistinctValuesCollector);

          class t_AbstractDistinctValuesCollector {
          public:
            PyObject_HEAD
            AbstractDistinctValuesCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractDistinctValuesCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractDistinctValuesCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractDistinctValuesCollector&, PyTypeObject *);
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
