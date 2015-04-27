#ifndef org_apache_lucene_search_FilteredDocIdSet_H
#define org_apache_lucene_search_FilteredDocIdSet_H

#include "org/apache/lucene/search/DocIdSet.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace search {
        class DocIdSetIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
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

        class FilteredDocIdSet : public ::org::apache::lucene::search::DocIdSet {
        public:
          enum {
            mid_init$_52bc98cb,
            mid_bits_03c2457d,
            mid_isCacheable_54c6a16a,
            mid_iterator_dc23660c,
            mid_ramBytesUsed_54c6a17a,
            mid_match_39c7bd30,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilteredDocIdSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilteredDocIdSet(const FilteredDocIdSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

          FilteredDocIdSet(const ::org::apache::lucene::search::DocIdSet &);

          ::org::apache::lucene::util::Bits bits() const;
          jboolean isCacheable() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jlong ramBytesUsed() const;
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
        extern PyTypeObject PY_TYPE(FilteredDocIdSet);

        class t_FilteredDocIdSet {
        public:
          PyObject_HEAD
          FilteredDocIdSet object;
          static PyObject *wrap_Object(const FilteredDocIdSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
