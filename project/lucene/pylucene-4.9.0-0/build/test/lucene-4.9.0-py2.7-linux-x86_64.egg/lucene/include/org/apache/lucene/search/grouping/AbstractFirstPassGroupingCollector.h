#ifndef org_apache_lucene_search_grouping_AbstractFirstPassGroupingCollector_H
#define org_apache_lucene_search_grouping_AbstractFirstPassGroupingCollector_H

#include "org/apache/lucene/search/Collector.h"

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
          class SearchGroup;
        }
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

          class AbstractFirstPassGroupingCollector : public ::org::apache::lucene::search::Collector {
          public:
            enum {
              mid_init$_d50ac7b4,
              mid_acceptsDocsOutOfOrder_54c6a16a,
              mid_collect_39c7bd3c,
              mid_getTopGroups_1d16f88d,
              mid_setNextReader_a6f59947,
              mid_setScorer_8be0880c,
              mid_getDocGroupValue_29be6a55,
              mid_copyDocGroupValue_537d5bdf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractFirstPassGroupingCollector(jobject obj) : ::org::apache::lucene::search::Collector(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractFirstPassGroupingCollector(const AbstractFirstPassGroupingCollector& obj) : ::org::apache::lucene::search::Collector(obj) {}

            AbstractFirstPassGroupingCollector(const ::org::apache::lucene::search::Sort &, jint);

            jboolean acceptsDocsOutOfOrder() const;
            void collect(jint) const;
            ::java::util::Collection getTopGroups(jint, jboolean) const;
            void setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
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
          extern PyTypeObject PY_TYPE(AbstractFirstPassGroupingCollector);

          class t_AbstractFirstPassGroupingCollector {
          public:
            PyObject_HEAD
            AbstractFirstPassGroupingCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractFirstPassGroupingCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractFirstPassGroupingCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractFirstPassGroupingCollector&, PyTypeObject *);
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
