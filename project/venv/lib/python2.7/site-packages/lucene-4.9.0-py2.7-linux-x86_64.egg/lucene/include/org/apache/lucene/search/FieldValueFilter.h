#ifndef org_apache_lucene_search_FieldValueFilter_H
#define org_apache_lucene_search_FieldValueFilter_H

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

        class FieldValueFilter : public ::org::apache::lucene::search::Filter {
        public:
          enum {
            mid_init$_5fdc3f48,
            mid_init$_f3691645,
            mid_equals_290588e2,
            mid_field_14c7b5c5,
            mid_getDocIdSet_ccce0897,
            mid_hashCode_54c6a179,
            mid_negate_54c6a16a,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldValueFilter(jobject obj) : ::org::apache::lucene::search::Filter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldValueFilter(const FieldValueFilter& obj) : ::org::apache::lucene::search::Filter(obj) {}

          FieldValueFilter(const ::java::lang::String &);
          FieldValueFilter(const ::java::lang::String &, jboolean);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String field() const;
          ::org::apache::lucene::search::DocIdSet getDocIdSet(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
          jint hashCode() const;
          jboolean negate() const;
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
        extern PyTypeObject PY_TYPE(FieldValueFilter);

        class t_FieldValueFilter {
        public:
          PyObject_HEAD
          FieldValueFilter object;
          static PyObject *wrap_Object(const FieldValueFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
