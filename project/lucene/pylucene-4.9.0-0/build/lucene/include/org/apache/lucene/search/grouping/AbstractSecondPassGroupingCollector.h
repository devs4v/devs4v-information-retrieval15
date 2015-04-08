#ifndef org_apache_lucene_search_grouping_AbstractSecondPassGroupingCollector_H
#define org_apache_lucene_search_grouping_AbstractSecondPassGroupingCollector_H

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
          class TopGroups;
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

          class AbstractSecondPassGroupingCollector : public ::org::apache::lucene::search::Collector {
          public:
            enum {
              mid_init$_e70f2194,
              mid_acceptsDocsOutOfOrder_54c6a16a,
              mid_collect_39c7bd3c,
              mid_getTopGroups_f6dd2ce2,
              mid_setNextReader_a6f59947,
              mid_setScorer_8be0880c,
              mid_retrieveGroup_e4de8d52,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractSecondPassGroupingCollector(jobject obj) : ::org::apache::lucene::search::Collector(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractSecondPassGroupingCollector(const AbstractSecondPassGroupingCollector& obj) : ::org::apache::lucene::search::Collector(obj) {}

            AbstractSecondPassGroupingCollector(const ::java::util::Collection &, const ::org::apache::lucene::search::Sort &, const ::org::apache::lucene::search::Sort &, jint, jboolean, jboolean, jboolean);

            jboolean acceptsDocsOutOfOrder() const;
            void collect(jint) const;
            ::org::apache::lucene::search::grouping::TopGroups getTopGroups(jint) const;
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
          extern PyTypeObject PY_TYPE(AbstractSecondPassGroupingCollector);

          class t_AbstractSecondPassGroupingCollector {
          public:
            PyObject_HEAD
            AbstractSecondPassGroupingCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractSecondPassGroupingCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractSecondPassGroupingCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractSecondPassGroupingCollector&, PyTypeObject *);
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
