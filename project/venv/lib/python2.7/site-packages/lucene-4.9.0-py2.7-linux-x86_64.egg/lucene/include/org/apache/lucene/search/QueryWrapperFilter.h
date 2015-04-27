#ifndef org_apache_lucene_search_QueryWrapperFilter_H
#define org_apache_lucene_search_QueryWrapperFilter_H

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
        class Query;
        class DocIdSet;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
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
      namespace search {

        class QueryWrapperFilter : public ::org::apache::lucene::search::Filter {
        public:
          enum {
            mid_init$_6e301113,
            mid_equals_290588e2,
            mid_getDocIdSet_ccce0897,
            mid_getQuery_97e3851a,
            mid_hashCode_54c6a179,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryWrapperFilter(jobject obj) : ::org::apache::lucene::search::Filter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          QueryWrapperFilter(const QueryWrapperFilter& obj) : ::org::apache::lucene::search::Filter(obj) {}

          QueryWrapperFilter(const ::org::apache::lucene::search::Query &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::DocIdSet getDocIdSet(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
          ::org::apache::lucene::search::Query getQuery() const;
          jint hashCode() const;
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
      namespace search {
        extern PyTypeObject PY_TYPE(QueryWrapperFilter);

        class t_QueryWrapperFilter {
        public:
          PyObject_HEAD
          QueryWrapperFilter object;
          static PyObject *wrap_Object(const QueryWrapperFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
