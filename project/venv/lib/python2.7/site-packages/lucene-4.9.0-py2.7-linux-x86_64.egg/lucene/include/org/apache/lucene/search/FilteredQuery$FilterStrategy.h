#ifndef org_apache_lucene_search_FilteredQuery$FilterStrategy_H
#define org_apache_lucene_search_FilteredQuery$FilterStrategy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class BulkScorer;
        class DocIdSet;
        class Scorer;
        class Weight;
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

        class FilteredQuery$FilterStrategy : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_filteredBulkScorer_b5c185de,
            mid_filteredScorer_05f41f97,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilteredQuery$FilterStrategy(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilteredQuery$FilterStrategy(const FilteredQuery$FilterStrategy& obj) : ::java::lang::Object(obj) {}

          FilteredQuery$FilterStrategy();

          ::org::apache::lucene::search::BulkScorer filteredBulkScorer(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::search::Weight &, jboolean, const ::org::apache::lucene::search::DocIdSet &) const;
          ::org::apache::lucene::search::Scorer filteredScorer(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::search::DocIdSet &) const;
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
        extern PyTypeObject PY_TYPE(FilteredQuery$FilterStrategy);

        class t_FilteredQuery$FilterStrategy {
        public:
          PyObject_HEAD
          FilteredQuery$FilterStrategy object;
          static PyObject *wrap_Object(const FilteredQuery$FilterStrategy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
