#ifndef org_apache_lucene_search_PositiveScoresOnlyCollector_H
#define org_apache_lucene_search_PositiveScoresOnlyCollector_H

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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class PositiveScoresOnlyCollector : public ::org::apache::lucene::search::Collector {
        public:
          enum {
            mid_init$_77379ce0,
            mid_acceptsDocsOutOfOrder_54c6a16a,
            mid_collect_39c7bd3c,
            mid_setNextReader_a6f59947,
            mid_setScorer_8be0880c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PositiveScoresOnlyCollector(jobject obj) : ::org::apache::lucene::search::Collector(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PositiveScoresOnlyCollector(const PositiveScoresOnlyCollector& obj) : ::org::apache::lucene::search::Collector(obj) {}

          PositiveScoresOnlyCollector(const ::org::apache::lucene::search::Collector &);

          jboolean acceptsDocsOutOfOrder() const;
          void collect(jint) const;
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
        extern PyTypeObject PY_TYPE(PositiveScoresOnlyCollector);

        class t_PositiveScoresOnlyCollector {
        public:
          PyObject_HEAD
          PositiveScoresOnlyCollector object;
          static PyObject *wrap_Object(const PositiveScoresOnlyCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
