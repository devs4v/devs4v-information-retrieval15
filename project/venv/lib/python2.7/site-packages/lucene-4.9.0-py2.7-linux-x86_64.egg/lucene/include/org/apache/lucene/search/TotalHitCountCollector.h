#ifndef org_apache_lucene_search_TotalHitCountCollector_H
#define org_apache_lucene_search_TotalHitCountCollector_H

#include "org/apache/lucene/search/Collector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class Scorer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TotalHitCountCollector : public ::org::apache::lucene::search::Collector {
        public:
          enum {
            mid_init$_54c6a166,
            mid_acceptsDocsOutOfOrder_54c6a16a,
            mid_collect_39c7bd3c,
            mid_getTotalHits_54c6a179,
            mid_setNextReader_a6f59947,
            mid_setScorer_8be0880c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TotalHitCountCollector(jobject obj) : ::org::apache::lucene::search::Collector(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TotalHitCountCollector(const TotalHitCountCollector& obj) : ::org::apache::lucene::search::Collector(obj) {}

          TotalHitCountCollector();

          jboolean acceptsDocsOutOfOrder() const;
          void collect(jint) const;
          jint getTotalHits() const;
          void setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
          void setScorer(const ::org::apache::lucene::search::Scorer &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(TotalHitCountCollector);

        class t_TotalHitCountCollector {
        public:
          PyObject_HEAD
          TotalHitCountCollector object;
          static PyObject *wrap_Object(const TotalHitCountCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
