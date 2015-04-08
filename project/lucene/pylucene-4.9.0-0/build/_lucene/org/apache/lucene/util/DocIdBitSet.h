#ifndef org_apache_lucene_util_DocIdBitSet_H
#define org_apache_lucene_util_DocIdBitSet_H

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
  namespace util {
    class BitSet;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class DocIdBitSet : public ::org::apache::lucene::search::DocIdSet {
        public:
          enum {
            mid_init$_c8849d64,
            mid_bits_03c2457d,
            mid_get_39c7bd30,
            mid_getBitSet_59c0eb4d,
            mid_isCacheable_54c6a16a,
            mid_iterator_dc23660c,
            mid_length_54c6a179,
            mid_ramBytesUsed_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIdBitSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DocIdBitSet(const DocIdBitSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

          DocIdBitSet(const ::java::util::BitSet &);

          ::org::apache::lucene::util::Bits bits() const;
          jboolean get(jint) const;
          ::java::util::BitSet getBitSet() const;
          jboolean isCacheable() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jint length() const;
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
        extern PyTypeObject PY_TYPE(DocIdBitSet);

        class t_DocIdBitSet {
        public:
          PyObject_HEAD
          DocIdBitSet object;
          static PyObject *wrap_Object(const DocIdBitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
