#ifndef org_apache_lucene_search_FieldCacheDocIdSet_H
#define org_apache_lucene_search_FieldCacheDocIdSet_H

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

        class FieldCacheDocIdSet : public ::org::apache::lucene::search::DocIdSet {
        public:
          enum {
            mid_init$_c0d572fa,
            mid_bits_03c2457d,
            mid_isCacheable_54c6a16a,
            mid_iterator_dc23660c,
            mid_matchDoc_39c7bd30,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCacheDocIdSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCacheDocIdSet(const FieldCacheDocIdSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

          FieldCacheDocIdSet(jint, const ::org::apache::lucene::util::Bits &);

          ::org::apache::lucene::util::Bits bits() const;
          jboolean isCacheable() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
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
        extern PyTypeObject PY_TYPE(FieldCacheDocIdSet);

        class t_FieldCacheDocIdSet {
        public:
          PyObject_HEAD
          FieldCacheDocIdSet object;
          static PyObject *wrap_Object(const FieldCacheDocIdSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
