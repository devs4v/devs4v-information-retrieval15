#ifndef org_apache_lucene_queries_TermsFilter_H
#define org_apache_lucene_queries_TermsFilter_H

#include "org/apache/lucene/search/Filter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class BytesRef;
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
  namespace util {
    class List;
  }
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

        class TermsFilter : public ::org::apache::lucene::search::Filter {
        public:
          enum {
            mid_init$_c9f85e01,
            mid_init$_1fde8fc3,
            mid_init$_8fbc1a2e,
            mid_init$_04719c9d,
            mid_equals_290588e2,
            mid_getDocIdSet_ccce0897,
            mid_hashCode_54c6a179,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermsFilter(jobject obj) : ::org::apache::lucene::search::Filter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermsFilter(const TermsFilter& obj) : ::org::apache::lucene::search::Filter(obj) {}

          TermsFilter(const JArray< ::org::apache::lucene::index::Term > &);
          TermsFilter(const ::java::util::List &);
          TermsFilter(const ::java::lang::String &, const JArray< ::org::apache::lucene::util::BytesRef > &);
          TermsFilter(const ::java::lang::String &, const ::java::util::List &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::DocIdSet getDocIdSet(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
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
        extern PyTypeObject PY_TYPE(TermsFilter);

        class t_TermsFilter {
        public:
          PyObject_HEAD
          TermsFilter object;
          static PyObject *wrap_Object(const TermsFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
