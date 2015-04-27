#ifndef org_apache_lucene_search_BitsFilteredDocIdSet_H
#define org_apache_lucene_search_BitsFilteredDocIdSet_H

#include "org/apache/lucene/search/FilteredDocIdSet.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace search {
        class DocIdSet;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class BitsFilteredDocIdSet : public ::org::apache::lucene::search::FilteredDocIdSet {
        public:
          enum {
            mid_init$_042197af,
            mid_wrap_e3d48bdb,
            mid_match_39c7bd30,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BitsFilteredDocIdSet(jobject obj) : ::org::apache::lucene::search::FilteredDocIdSet(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BitsFilteredDocIdSet(const BitsFilteredDocIdSet& obj) : ::org::apache::lucene::search::FilteredDocIdSet(obj) {}

          BitsFilteredDocIdSet(const ::org::apache::lucene::search::DocIdSet &, const ::org::apache::lucene::util::Bits &);

          static ::org::apache::lucene::search::DocIdSet wrap(const ::org::apache::lucene::search::DocIdSet &, const ::org::apache::lucene::util::Bits &);
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
        extern PyTypeObject PY_TYPE(BitsFilteredDocIdSet);

        class t_BitsFilteredDocIdSet {
        public:
          PyObject_HEAD
          BitsFilteredDocIdSet object;
          static PyObject *wrap_Object(const BitsFilteredDocIdSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
