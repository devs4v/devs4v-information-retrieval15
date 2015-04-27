#ifndef org_apache_lucene_search_FilteredQuery$RandomAccessFilterStrategy_H
#define org_apache_lucene_search_FilteredQuery$RandomAccessFilterStrategy_H

#include "org/apache/lucene/search/FilteredQuery$FilterStrategy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
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

        class FilteredQuery$RandomAccessFilterStrategy : public ::org::apache::lucene::search::FilteredQuery$FilterStrategy {
        public:
          enum {
            mid_init$_54c6a166,
            mid_filteredScorer_05f41f97,
            mid_useRandomAccess_7abf89aa,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilteredQuery$RandomAccessFilterStrategy(jobject obj) : ::org::apache::lucene::search::FilteredQuery$FilterStrategy(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilteredQuery$RandomAccessFilterStrategy(const FilteredQuery$RandomAccessFilterStrategy& obj) : ::org::apache::lucene::search::FilteredQuery$FilterStrategy(obj) {}

          FilteredQuery$RandomAccessFilterStrategy();

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
        extern PyTypeObject PY_TYPE(FilteredQuery$RandomAccessFilterStrategy);

        class t_FilteredQuery$RandomAccessFilterStrategy {
        public:
          PyObject_HEAD
          FilteredQuery$RandomAccessFilterStrategy object;
          static PyObject *wrap_Object(const FilteredQuery$RandomAccessFilterStrategy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
