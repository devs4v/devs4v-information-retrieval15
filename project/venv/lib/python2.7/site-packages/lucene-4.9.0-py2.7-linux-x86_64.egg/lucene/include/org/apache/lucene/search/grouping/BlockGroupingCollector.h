#ifndef org_apache_lucene_search_grouping_BlockGroupingCollector_H
#define org_apache_lucene_search_grouping_BlockGroupingCollector_H

#include "org/apache/lucene/search/Collector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class Sort;
        class Filter;
        class Scorer;
        namespace grouping {
          class TopGroups;
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

          class BlockGroupingCollector : public ::org::apache::lucene::search::Collector {
          public:
            enum {
              mid_init$_418a7963,
              mid_acceptsDocsOutOfOrder_54c6a16a,
              mid_collect_39c7bd3c,
              mid_getTopGroups_79cd6253,
              mid_setNextReader_a6f59947,
              mid_setScorer_8be0880c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockGroupingCollector(jobject obj) : ::org::apache::lucene::search::Collector(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BlockGroupingCollector(const BlockGroupingCollector& obj) : ::org::apache::lucene::search::Collector(obj) {}

            BlockGroupingCollector(const ::org::apache::lucene::search::Sort &, jint, jboolean, const ::org::apache::lucene::search::Filter &);

            jboolean acceptsDocsOutOfOrder() const;
            void collect(jint) const;
            ::org::apache::lucene::search::grouping::TopGroups getTopGroups(const ::org::apache::lucene::search::Sort &, jint, jint, jint, jboolean) const;
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
          extern PyTypeObject PY_TYPE(BlockGroupingCollector);

          class t_BlockGroupingCollector {
          public:
            PyObject_HEAD
            BlockGroupingCollector object;
            static PyObject *wrap_Object(const BlockGroupingCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
