#ifndef org_apache_lucene_queries_BooleanFilter_H
#define org_apache_lucene_queries_BooleanFilter_H

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
        class BooleanClause$Occur;
        class DocIdSet;
      }
      namespace queries {
        class FilterClause;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Iterator;
  }
  namespace lang {
    class Object;
    class String;
    class Iterable;
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

        class BooleanFilter : public ::org::apache::lucene::search::Filter {
        public:
          enum {
            mid_init$_54c6a166,
            mid_add_ef4f412a,
            mid_add_7373f548,
            mid_clauses_87851566,
            mid_equals_290588e2,
            mid_getDocIdSet_ccce0897,
            mid_hashCode_54c6a179,
            mid_iterator_40858c90,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanFilter(jobject obj) : ::org::apache::lucene::search::Filter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BooleanFilter(const BooleanFilter& obj) : ::org::apache::lucene::search::Filter(obj) {}

          BooleanFilter();

          void add(const ::org::apache::lucene::queries::FilterClause &) const;
          void add(const ::org::apache::lucene::search::Filter &, const ::org::apache::lucene::search::BooleanClause$Occur &) const;
          ::java::util::List clauses() const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::DocIdSet getDocIdSet(const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &) const;
          jint hashCode() const;
          ::java::util::Iterator iterator() const;
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
        extern PyTypeObject PY_TYPE(BooleanFilter);

        class t_BooleanFilter {
        public:
          PyObject_HEAD
          BooleanFilter object;
          static PyObject *wrap_Object(const BooleanFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
