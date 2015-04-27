#ifndef org_apache_lucene_util_LongBitSet_H
#define org_apache_lucene_util_LongBitSet_H

#include "java/lang/Object.h"

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

        class LongBitSet : public ::java::lang::Object {
        public:
          enum {
            mid_init$_0ee6df2f,
            mid_init$_4c830bd0,
            mid_and_6e24e395,
            mid_andNot_6e24e395,
            mid_bits2words_0ee6df30,
            mid_cardinality_54c6a17a,
            mid_clear_0ee6df2f,
            mid_clear_a7e12ca4,
            mid_clone_47551698,
            mid_ensureCapacity_b4f3a668,
            mid_equals_290588e2,
            mid_flip_a7e12ca4,
            mid_get_0ee6df23,
            mid_getAndClear_0ee6df23,
            mid_getAndSet_0ee6df23,
            mid_getBits_dab10e76,
            mid_hashCode_54c6a179,
            mid_intersects_6e24e399,
            mid_length_54c6a17a,
            mid_nextSetBit_0ee6df33,
            mid_or_6e24e395,
            mid_prevSetBit_0ee6df33,
            mid_set_0ee6df2f,
            mid_set_a7e12ca4,
            mid_xor_6e24e395,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongBitSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          LongBitSet(const LongBitSet& obj) : ::java::lang::Object(obj) {}

          LongBitSet(jlong);
          LongBitSet(const JArray< jlong > &, jlong);

          void and$(const LongBitSet &) const;
          void andNot(const LongBitSet &) const;
          static jint bits2words(jlong);
          jlong cardinality() const;
          void clear(jlong) const;
          void clear(jlong, jlong) const;
          LongBitSet clone() const;
          static LongBitSet ensureCapacity(const LongBitSet &, jlong);
          jboolean equals(const ::java::lang::Object &) const;
          void flip(jlong, jlong) const;
          jboolean get(jlong) const;
          jboolean getAndClear(jlong) const;
          jboolean getAndSet(jlong) const;
          JArray< jlong > getBits() const;
          jint hashCode() const;
          jboolean intersects(const LongBitSet &) const;
          jlong length() const;
          jlong nextSetBit(jlong) const;
          void or$(const LongBitSet &) const;
          jlong prevSetBit(jlong) const;
          void set(jlong) const;
          void set(jlong, jlong) const;
          void xor$(const LongBitSet &) const;
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
        extern PyTypeObject PY_TYPE(LongBitSet);

        class t_LongBitSet {
        public:
          PyObject_HEAD
          LongBitSet object;
          static PyObject *wrap_Object(const LongBitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
