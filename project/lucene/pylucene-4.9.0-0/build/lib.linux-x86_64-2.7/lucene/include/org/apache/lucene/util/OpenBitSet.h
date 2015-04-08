#ifndef org_apache_lucene_util_OpenBitSet_H
#define org_apache_lucene_util_OpenBitSet_H

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
    class Cloneable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class OpenBitSet : public ::org::apache::lucene::search::DocIdSet {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_0ee6df2f,
            mid_init$_ce93dbcb,
            mid_and_c2540e4f,
            mid_andNot_c2540e4f,
            mid_andNotCount_52061930,
            mid_bits_03c2457d,
            mid_bits2words_0ee6df30,
            mid_capacity_54c6a17a,
            mid_cardinality_54c6a17a,
            mid_clear_0ee6df2f,
            mid_clear_a7e12ca4,
            mid_clear_d8d154a6,
            mid_clone_23f9e142,
            mid_ensureCapacity_0ee6df2f,
            mid_ensureCapacityWords_39c7bd3c,
            mid_equals_290588e2,
            mid_fastClear_39c7bd3c,
            mid_fastClear_0ee6df2f,
            mid_fastFlip_0ee6df2f,
            mid_fastFlip_39c7bd3c,
            mid_fastGet_39c7bd30,
            mid_fastGet_0ee6df23,
            mid_fastSet_39c7bd3c,
            mid_fastSet_0ee6df2f,
            mid_flip_0ee6df2f,
            mid_flip_a7e12ca4,
            mid_flipAndGet_0ee6df23,
            mid_flipAndGet_39c7bd30,
            mid_get_0ee6df23,
            mid_get_39c7bd30,
            mid_getAndSet_0ee6df23,
            mid_getAndSet_39c7bd30,
            mid_getBit_39c7bd23,
            mid_getBits_dab10e76,
            mid_getNumWords_54c6a179,
            mid_hashCode_54c6a179,
            mid_intersect_c2540e4f,
            mid_intersectionCount_52061930,
            mid_intersects_c2540e43,
            mid_isCacheable_54c6a16a,
            mid_isEmpty_54c6a16a,
            mid_iterator_dc23660c,
            mid_length_54c6a179,
            mid_nextSetBit_39c7bd23,
            mid_nextSetBit_0ee6df33,
            mid_or_c2540e4f,
            mid_prevSetBit_0ee6df33,
            mid_prevSetBit_39c7bd23,
            mid_ramBytesUsed_54c6a17a,
            mid_remove_c2540e4f,
            mid_set_0ee6df2f,
            mid_set_a7e12ca4,
            mid_size_54c6a17a,
            mid_trimTrailingZeros_54c6a166,
            mid_union_c2540e4f,
            mid_unionCount_52061930,
            mid_xor_c2540e4f,
            mid_xorCount_52061930,
            mid_expandingWordNum_0ee6df30,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OpenBitSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          OpenBitSet(const OpenBitSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

          OpenBitSet();
          OpenBitSet(jlong);
          OpenBitSet(const JArray< jlong > &, jint);

          void and$(const OpenBitSet &) const;
          void andNot(const OpenBitSet &) const;
          static jlong andNotCount(const OpenBitSet &, const OpenBitSet &);
          ::org::apache::lucene::util::Bits bits() const;
          static jint bits2words(jlong);
          jlong capacity() const;
          jlong cardinality() const;
          void clear(jlong) const;
          void clear(jlong, jlong) const;
          void clear(jint, jint) const;
          OpenBitSet clone() const;
          void ensureCapacity(jlong) const;
          void ensureCapacityWords(jint) const;
          jboolean equals(const ::java::lang::Object &) const;
          void fastClear(jint) const;
          void fastClear(jlong) const;
          void fastFlip(jlong) const;
          void fastFlip(jint) const;
          jboolean fastGet(jint) const;
          jboolean fastGet(jlong) const;
          void fastSet(jint) const;
          void fastSet(jlong) const;
          void flip(jlong) const;
          void flip(jlong, jlong) const;
          jboolean flipAndGet(jlong) const;
          jboolean flipAndGet(jint) const;
          jboolean get(jlong) const;
          jboolean get(jint) const;
          jboolean getAndSet(jlong) const;
          jboolean getAndSet(jint) const;
          jint getBit(jint) const;
          JArray< jlong > getBits() const;
          jint getNumWords() const;
          jint hashCode() const;
          void intersect(const OpenBitSet &) const;
          static jlong intersectionCount(const OpenBitSet &, const OpenBitSet &);
          jboolean intersects(const OpenBitSet &) const;
          jboolean isCacheable() const;
          jboolean isEmpty() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jint length() const;
          jint nextSetBit(jint) const;
          jlong nextSetBit(jlong) const;
          void or$(const OpenBitSet &) const;
          jlong prevSetBit(jlong) const;
          jint prevSetBit(jint) const;
          jlong ramBytesUsed() const;
          void remove(const OpenBitSet &) const;
          void set(jlong) const;
          void set(jlong, jlong) const;
          jlong size() const;
          void trimTrailingZeros() const;
          void union$(const OpenBitSet &) const;
          static jlong unionCount(const OpenBitSet &, const OpenBitSet &);
          void xor$(const OpenBitSet &) const;
          static jlong xorCount(const OpenBitSet &, const OpenBitSet &);
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
        extern PyTypeObject PY_TYPE(OpenBitSet);

        class t_OpenBitSet {
        public:
          PyObject_HEAD
          OpenBitSet object;
          static PyObject *wrap_Object(const OpenBitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
