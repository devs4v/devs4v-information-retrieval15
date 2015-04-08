#ifndef org_apache_lucene_search_FieldCacheTermsFilter_H
#define org_apache_lucene_search_FieldCacheTermsFilter_H

#include "org/apache/lucene/search/Filter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class BytesRef;
      }
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class FieldCache;
        class DocIdSet;
      }
    }
  }
}
namespace java {
  namespace lang {
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

        class FieldCacheTermsFilter : public ::org::apache::lucene::search::Filter {
        public:
          enum {
            mid_init$_8fbc1a2e,
            mid_init$_ba45d66a,
            mid_getDocIdSet_ccce0897,
            mid_getFieldCache_a7c1cc27,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCacheTermsFilter(jobject obj) : ::org::apache::lucene::search::Filter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCacheTermsFilter(const FieldCacheTermsFilter& obj) : ::org::apache::lucene::search::Filter(obj) {}

          FieldCacheTermsFilter(const ::java::lang::String &, const JArray< ::org::apache::lucene::util::BytesRef > &);
          FieldCacheTermsFilter(const ::java::lang::String &, const JArray< ::java::lang::String > &);

          ::org::apache::lucene::search::DocIdSet getDocIdSet(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
          ::org::apache::lucene::search::FieldCache getFieldCache() const;
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
        extern PyTypeObject PY_TYPE(FieldCacheTermsFilter);

        class t_FieldCacheTermsFilter {
        public:
          PyObject_HEAD
          FieldCacheTermsFilter object;
          static PyObject *wrap_Object(const FieldCacheTermsFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
