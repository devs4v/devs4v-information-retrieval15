#ifndef org_apache_lucene_queries_TermFilter_H
#define org_apache_lucene_queries_TermFilter_H

#include "org/apache/lucene/search/Filter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class Term;
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
      namespace queries {

        class TermFilter : public ::org::apache::lucene::search::Filter {
        public:
          enum {
            mid_init$_7eca6a81,
            mid_equals_290588e2,
            mid_getDocIdSet_ccce0897,
            mid_getTerm_0f71f314,
            mid_hashCode_54c6a179,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermFilter(jobject obj) : ::org::apache::lucene::search::Filter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermFilter(const TermFilter& obj) : ::org::apache::lucene::search::Filter(obj) {}

          TermFilter(const ::org::apache::lucene::index::Term &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::DocIdSet getDocIdSet(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
          ::org::apache::lucene::index::Term getTerm() const;
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
      namespace queries {
        extern PyTypeObject PY_TYPE(TermFilter);

        class t_TermFilter {
        public:
          PyObject_HEAD
          TermFilter object;
          static PyObject *wrap_Object(const TermFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
