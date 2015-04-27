#ifndef java_util_BitSet_H
#define java_util_BitSet_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Cloneable;
    class String;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class BitSet : public ::java::lang::Object {
    public:
      enum {
        mid_init$_54c6a166,
        mid_init$_39c7bd3c,
        mid_and_c8849d64,
        mid_andNot_c8849d64,
        mid_cardinality_54c6a179,
        mid_clear_54c6a166,
        mid_clear_39c7bd3c,
        mid_clear_d8d154a6,
        mid_clone_846352c3,
        mid_equals_290588e2,
        mid_flip_39c7bd3c,
        mid_flip_d8d154a6,
        mid_get_39c7bd30,
        mid_get_0a87530d,
        mid_hashCode_54c6a179,
        mid_intersects_c8849d68,
        mid_isEmpty_54c6a16a,
        mid_length_54c6a179,
        mid_nextClearBit_39c7bd23,
        mid_nextSetBit_39c7bd23,
        mid_or_c8849d64,
        mid_previousClearBit_39c7bd23,
        mid_previousSetBit_39c7bd23,
        mid_set_39c7bd3c,
        mid_set_b3a85a05,
        mid_set_d8d154a6,
        mid_set_9f853a2f,
        mid_size_54c6a179,
        mid_toByteArray_dab10e7e,
        mid_toLongArray_dab10e76,
        mid_toString_14c7b5c5,
        mid_valueOf_7dbb71da,
        mid_valueOf_8f37af12,
        mid_xor_c8849d64,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit BitSet(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      BitSet(const BitSet& obj) : ::java::lang::Object(obj) {}

      BitSet();
      BitSet(jint);

      void and$(const BitSet &) const;
      void andNot(const BitSet &) const;
      jint cardinality() const;
      void clear() const;
      void clear(jint) const;
      void clear(jint, jint) const;
      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      void flip(jint) const;
      void flip(jint, jint) const;
      jboolean get(jint) const;
      BitSet get(jint, jint) const;
      jint hashCode() const;
      jboolean intersects(const BitSet &) const;
      jboolean isEmpty() const;
      jint length() const;
      jint nextClearBit(jint) const;
      jint nextSetBit(jint) const;
      void or$(const BitSet &) const;
      jint previousClearBit(jint) const;
      jint previousSetBit(jint) const;
      void set(jint) const;
      void set(jint, jboolean) const;
      void set(jint, jint) const;
      void set(jint, jint, jboolean) const;
      jint size() const;
      JArray< jbyte > toByteArray() const;
      JArray< jlong > toLongArray() const;
      ::java::lang::String toString() const;
      static BitSet valueOf(const JArray< jbyte > &);
      static BitSet valueOf(const JArray< jlong > &);
      void xor$(const BitSet &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(BitSet);

    class t_BitSet {
    public:
      PyObject_HEAD
      BitSet object;
      static PyObject *wrap_Object(const BitSet&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
