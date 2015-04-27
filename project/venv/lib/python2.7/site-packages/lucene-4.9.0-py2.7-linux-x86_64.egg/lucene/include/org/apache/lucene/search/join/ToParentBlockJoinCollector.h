#ifndef org_apache_lucene_search_join_ToParentBlockJoinCollector_H
#define org_apache_lucene_search_join_ToParentBlockJoinCollector_H

#include "org/apache/lucene/search/Collector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class Sort;
        namespace join {
          class ToParentBlockJoinQuery;
        }
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
    class Integer;
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
        namespace join {

          class ToParentBlockJoinCollector : public ::org::apache::lucene::search::Collector {
          public:
            enum {
              mid_init$_e3369b2e,
              mid_acceptsDocsOutOfOrder_54c6a16a,
              mid_collect_39c7bd3c,
              mid_getMaxScore_54c6a176,
              mid_getTopGroups_aade7c1f,
              mid_getTopGroupsWithAllChildDocs_2bbd93ad,
              mid_setNextReader_a6f59947,
              mid_setScorer_8be0880c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ToParentBlockJoinCollector(jobject obj) : ::org::apache::lucene::search::Collector(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ToParentBlockJoinCollector(const ToParentBlockJoinCollector& obj) : ::org::apache::lucene::search::Collector(obj) {}

            ToParentBlockJoinCollector(const ::org::apache::lucene::search::Sort &, jint, jboolean, jboolean);

            jboolean acceptsDocsOutOfOrder() const;
            void collect(jint) const;
            jfloat getMaxScore() const;
            ::org::apache::lucene::search::grouping::TopGroups getTopGroups(const ::org::apache::lucene::search::join::ToParentBlockJoinQuery &, const ::org::apache::lucene::search::Sort &, jint, jint, jint, jboolean) const;
            ::org::apache::lucene::search::grouping::TopGroups getTopGroupsWithAllChildDocs(const ::org::apache::lucene::search::join::ToParentBlockJoinQuery &, const ::org::apache::lucene::search::Sort &, jint, jint, jboolean) const;
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
        namespace join {
          extern PyTypeObject PY_TYPE(ToParentBlockJoinCollector);

          class t_ToParentBlockJoinCollector {
          public:
            PyObject_HEAD
            ToParentBlockJoinCollector object;
            static PyObject *wrap_Object(const ToParentBlockJoinCollector&);
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
