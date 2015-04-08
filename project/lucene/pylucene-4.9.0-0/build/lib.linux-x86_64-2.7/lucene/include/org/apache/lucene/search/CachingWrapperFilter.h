#ifndef org_apache_lucene_search_CachingWrapperFilter_H
#define org_apache_lucene_search_CachingWrapperFilter_H

#include "org/apache/lucene/search/Filter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
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
    class Object;
    class String;
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

        class CachingWrapperFilter : public ::org::apache::lucene::search::Filter {
        public:
          enum {
            mid_init$_9bb37152,
            mid_equals_290588e2,
            mid_getDocIdSet_ccce0897,
            mid_getFilter_b40f961f,
            mid_hashCode_54c6a179,
            mid_ramBytesUsed_54c6a17a,
            mid_toString_14c7b5c5,
            mid_cacheImpl_33cb740e,
            mid_docIdSetToCache_5fee2a54,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CachingWrapperFilter(jobject obj) : ::org::apache::lucene::search::Filter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CachingWrapperFilter(const CachingWrapperFilter& obj) : ::org::apache::lucene::search::Filter(obj) {}

          CachingWrapperFilter(const ::org::apache::lucene::search::Filter &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::DocIdSet getDocIdSet(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
          ::org::apache::lucene::search::Filter getFilter() const;
          jint hashCode() const;
          jlong ramBytesUsed() const;
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
        extern PyTypeObject PY_TYPE(CachingWrapperFilter);

        class t_CachingWrapperFilter {
        public:
          PyObject_HEAD
          CachingWrapperFilter object;
          static PyObject *wrap_Object(const CachingWrapperFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
