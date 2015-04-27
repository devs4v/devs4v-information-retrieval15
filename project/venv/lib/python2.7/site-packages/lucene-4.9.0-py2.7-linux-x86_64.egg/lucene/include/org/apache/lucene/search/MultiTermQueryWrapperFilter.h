#ifndef org_apache_lucene_search_MultiTermQueryWrapperFilter_H
#define org_apache_lucene_search_MultiTermQueryWrapperFilter_H

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

        class MultiTermQueryWrapperFilter : public ::org::apache::lucene::search::Filter {
        public:
          enum {
            mid_equals_290588e2,
            mid_getDocIdSet_ccce0897,
            mid_getField_14c7b5c5,
            mid_hashCode_54c6a179,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiTermQueryWrapperFilter(jobject obj) : ::org::apache::lucene::search::Filter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiTermQueryWrapperFilter(const MultiTermQueryWrapperFilter& obj) : ::org::apache::lucene::search::Filter(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::DocIdSet getDocIdSet(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
          ::java::lang::String getField() const;
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
        extern PyTypeObject PY_TYPE(MultiTermQueryWrapperFilter);

        class t_MultiTermQueryWrapperFilter {
        public:
          PyObject_HEAD
          MultiTermQueryWrapperFilter object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MultiTermQueryWrapperFilter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MultiTermQueryWrapperFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MultiTermQueryWrapperFilter&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
