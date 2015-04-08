#ifndef org_apache_lucene_util_PForDeltaDocIdSet_H
#define org_apache_lucene_util_PForDeltaDocIdSet_H

#include "org/apache/lucene/search/DocIdSet.h"

namespace org {
  namespace apache {
    namespace lucene {
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PForDeltaDocIdSet : public ::org::apache::lucene::search::DocIdSet {
        public:
          enum {
            mid_cardinality_54c6a179,
            mid_isCacheable_54c6a16a,
            mid_iterator_dc23660c,
            mid_ramBytesUsed_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PForDeltaDocIdSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PForDeltaDocIdSet(const PForDeltaDocIdSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

          jint cardinality() const;
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
      namespace util {
        extern PyTypeObject PY_TYPE(PForDeltaDocIdSet);

        class t_PForDeltaDocIdSet {
        public:
          PyObject_HEAD
          PForDeltaDocIdSet object;
          static PyObject *wrap_Object(const PForDeltaDocIdSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
