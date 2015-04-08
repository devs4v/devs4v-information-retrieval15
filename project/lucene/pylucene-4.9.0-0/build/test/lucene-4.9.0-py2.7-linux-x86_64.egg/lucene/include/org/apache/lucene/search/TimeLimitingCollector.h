#ifndef org_apache_lucene_search_TimeLimitingCollector_H
#define org_apache_lucene_search_TimeLimitingCollector_H

#include "org/apache/lucene/search/Collector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Counter;
      }
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class Scorer;
        class TimeLimitingCollector$TimerThread;
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

        class TimeLimitingCollector : public ::org::apache::lucene::search::Collector {
        public:
          enum {
            mid_init$_d1481a7a,
            mid_acceptsDocsOutOfOrder_54c6a16a,
            mid_collect_39c7bd3c,
            mid_getGlobalCounter_781dd30a,
            mid_getGlobalTimerThread_91bdd0a8,
            mid_isGreedy_54c6a16a,
            mid_setBaseline_54c6a166,
            mid_setBaseline_0ee6df2f,
            mid_setCollector_77379ce0,
            mid_setGreedy_bb0c767f,
            mid_setNextReader_a6f59947,
            mid_setScorer_8be0880c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeLimitingCollector(jobject obj) : ::org::apache::lucene::search::Collector(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TimeLimitingCollector(const TimeLimitingCollector& obj) : ::org::apache::lucene::search::Collector(obj) {}

          TimeLimitingCollector(const ::org::apache::lucene::search::Collector &, const ::org::apache::lucene::util::Counter &, jlong);

          jboolean acceptsDocsOutOfOrder() const;
          void collect(jint) const;
          static ::org::apache::lucene::util::Counter getGlobalCounter();
          static ::org::apache::lucene::search::TimeLimitingCollector$TimerThread getGlobalTimerThread();
          jboolean isGreedy() const;
          void setBaseline() const;
          void setBaseline(jlong) const;
          void setCollector(const ::org::apache::lucene::search::Collector &) const;
          void setGreedy(jboolean) const;
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
        extern PyTypeObject PY_TYPE(TimeLimitingCollector);

        class t_TimeLimitingCollector {
        public:
          PyObject_HEAD
          TimeLimitingCollector object;
          static PyObject *wrap_Object(const TimeLimitingCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
