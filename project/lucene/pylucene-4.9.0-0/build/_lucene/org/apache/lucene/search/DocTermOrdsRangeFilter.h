#ifndef org_apache_lucene_search_DocTermOrdsRangeFilter_H
#define org_apache_lucene_search_DocTermOrdsRangeFilter_H

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

        class DocTermOrdsRangeFilter : public ::org::apache::lucene::search::Filter {
        public:
          enum {
            mid_equals_290588e2,
            mid_getDocIdSet_ccce0897,
            mid_getField_14c7b5c5,
            mid_getLowerVal_4ae19461,
            mid_getUpperVal_4ae19461,
            mid_hashCode_54c6a179,
            mid_includesLower_54c6a16a,
            mid_includesUpper_54c6a16a,
            mid_newBytesRefRange_a12b5d0e,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocTermOrdsRangeFilter(jobject obj) : ::org::apache::lucene::search::Filter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DocTermOrdsRangeFilter(const DocTermOrdsRangeFilter& obj) : ::org::apache::lucene::search::Filter(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::DocIdSet getDocIdSet(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
          ::java::lang::String getField() const;
          ::org::apache::lucene::util::BytesRef getLowerVal() const;
          ::org::apache::lucene::util::BytesRef getUpperVal() const;
          jint hashCode() const;
          jboolean includesLower() const;
          jboolean includesUpper() const;
          static DocTermOrdsRangeFilter newBytesRefRange(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean);
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
        extern PyTypeObject PY_TYPE(DocTermOrdsRangeFilter);

        class t_DocTermOrdsRangeFilter {
        public:
          PyObject_HEAD
          DocTermOrdsRangeFilter object;
          static PyObject *wrap_Object(const DocTermOrdsRangeFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
