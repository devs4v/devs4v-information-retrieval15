#ifndef org_apache_lucene_queries_ChainedFilter_H
#define org_apache_lucene_queries_ChainedFilter_H

#include "org/apache/lucene/search/Filter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class DocIdSet;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {

        class ChainedFilter : public ::org::apache::lucene::search::Filter {
        public:
          enum {
            mid_init$_cbb0d6f6,
            mid_init$_571f09d4,
            mid_init$_fa4768a0,
            mid_getDocIdSet_ccce0897,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ChainedFilter(jobject obj) : ::org::apache::lucene::search::Filter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ChainedFilter(const ChainedFilter& obj) : ::org::apache::lucene::search::Filter(obj) {}

          static jint AND;
          static jint ANDNOT;
          static jint DEFAULT;
          static jint OR;
          static jint XOR;

          ChainedFilter(const JArray< ::org::apache::lucene::search::Filter > &);
          ChainedFilter(const JArray< ::org::apache::lucene::search::Filter > &, jint);
          ChainedFilter(const JArray< ::org::apache::lucene::search::Filter > &, const JArray< jint > &);

          ::org::apache::lucene::search::DocIdSet getDocIdSet(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        extern PyTypeObject PY_TYPE(ChainedFilter);

        class t_ChainedFilter {
        public:
          PyObject_HEAD
          ChainedFilter object;
          static PyObject *wrap_Object(const ChainedFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
