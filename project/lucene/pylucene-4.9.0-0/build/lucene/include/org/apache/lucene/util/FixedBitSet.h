#ifndef org_apache_lucene_util_FixedBitSet_H
#define org_apache_lucene_util_FixedBitSet_H

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
    class Object;
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
      namespace util {

        class FixedBitSet : public ::org::apache::lucene::search::DocIdSet {
        public:
          enum {
            mid_init$_39c7bd3c,
            mid_init$_ce93dbcb,
            mid_and_ef674644,
            mid_and_c2b5607d,
            mid_andNot_ef674644,
            mid_andNot_c2b5607d,
            mid_andNotCount_a42679f6,
            mid_bits_03c2457d,
            mid_bits2words_39c7bd23,
            mid_cardinality_54c6a179,
            mid_clear_39c7bd3c,
            mid_clear_d8d154a6,
            mid_clone_28209941,
            mid_ensureCapacity_7d813305,
            mid_equals_290588e2,
            mid_flip_d8d154a6,
            mid_get_39c7bd30,
            mid_getAndClear_39c7bd30,
            mid_getAndSet_39c7bd30,
            mid_getBits_dab10e76,
            mid_hashCode_54c6a179,
            mid_intersectionCount_a42679f6,
            mid_intersects_ef674648,
            mid_isCacheable_54c6a16a,
            mid_iterator_dc23660c,
            mid_length_54c6a179,
            mid_nextSetBit_39c7bd23,
            mid_or_ef674644,
            mid_or_c2b5607d,
            mid_prevSetBit_39c7bd23,
            mid_ramBytesUsed_54c6a17a,
            mid_set_39c7bd3c,
            mid_set_d8d154a6,
            mid_unionCount_a42679f6,
            mid_xor_ef674644,
            mid_xor_c2b5607d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FixedBitSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FixedBitSet(const FixedBitSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

          FixedBitSet(jint);
          FixedBitSet(const JArray< jlong > &, jint);

          void and$(const FixedBitSet &) const;
          void and$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          void andNot(const FixedBitSet &) const;
          void andNot(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          static jlong andNotCount(const FixedBitSet &, const FixedBitSet &);
          ::org::apache::lucene::util::Bits bits() const;
          static jint bits2words(jint);
          jint cardinality() const;
          void clear(jint) const;
          void clear(jint, jint) const;
          FixedBitSet clone() const;
          static FixedBitSet ensureCapacity(const FixedBitSet &, jint);
          jboolean equals(const ::java::lang::Object &) const;
          void flip(jint, jint) const;
          jboolean get(jint) const;
          jboolean getAndClear(jint) const;
          jboolean getAndSet(jint) const;
          JArray< jlong > getBits() const;
          jint hashCode() const;
          static jlong intersectionCount(const FixedBitSet &, const FixedBitSet &);
          jboolean intersects(const FixedBitSet &) const;
          jboolean isCacheable() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jint length() const;
          jint nextSetBit(jint) const;
          void or$(const FixedBitSet &) const;
          void or$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          jint prevSetBit(jint) const;
          jlong ramBytesUsed() const;
          void set(jint) const;
          void set(jint, jint) const;
          static jlong unionCount(const FixedBitSet &, const FixedBitSet &);
          void xor$(const FixedBitSet &) const;
          void xor$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
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
        extern PyTypeObject PY_TYPE(FixedBitSet);

        class t_FixedBitSet {
        public:
          PyObject_HEAD
          FixedBitSet object;
          static PyObject *wrap_Object(const FixedBitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
