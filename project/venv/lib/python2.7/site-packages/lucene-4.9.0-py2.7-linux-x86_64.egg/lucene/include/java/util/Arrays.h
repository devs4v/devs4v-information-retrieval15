#ifndef java_util_Arrays_H
#define java_util_Arrays_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Comparator;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Arrays : public ::java::lang::Object {
    public:
      enum {
        mid_asList_b1a4e262,
        mid_binarySearch_c36b04d7,
        mid_binarySearch_1da92101,
        mid_binarySearch_8f13b3af,
        mid_binarySearch_e6fbc3d5,
        mid_binarySearch_4c830bcf,
        mid_binarySearch_d6ab1c2f,
        mid_binarySearch_df726439,
        mid_binarySearch_ea67e195,
        mid_binarySearch_736a8636,
        mid_binarySearch_c8914cef,
        mid_binarySearch_1e4305af,
        mid_binarySearch_b3c1f717,
        mid_binarySearch_dee75d29,
        mid_binarySearch_695adc4b,
        mid_binarySearch_b5b4fc35,
        mid_binarySearch_4eae659d,
        mid_binarySearch_4f5bed95,
        mid_binarySearch_07be7c2a,
        mid_copyOf_d090ee39,
        mid_copyOf_91cb90f9,
        mid_copyOf_0f9a030d,
        mid_copyOf_e2c1f835,
        mid_copyOf_6bd5869d,
        mid_copyOf_669ee2d1,
        mid_copyOf_d766d189,
        mid_copyOf_a415095d,
        mid_copyOf_1fbccced,
        mid_copyOf_3608f1f7,
        mid_copyOfRange_16e37a35,
        mid_copyOfRange_b92120ff,
        mid_copyOfRange_bb313e1d,
        mid_copyOfRange_96b1a95f,
        mid_copyOfRange_3d448975,
        mid_copyOfRange_a80c3bb3,
        mid_copyOfRange_be4afb45,
        mid_copyOfRange_9766cdc5,
        mid_copyOfRange_3a8237ff,
        mid_copyOfRange_bca17599,
        mid_deepEquals_a9ca87d2,
        mid_deepHashCode_c0f5dac5,
        mid_deepToString_02ea1cdd,
        mid_equals_a9ca87d2,
        mid_equals_7868d93a,
        mid_equals_e3842e2a,
        mid_equals_2a42df9a,
        mid_equals_7c26725e,
        mid_equals_38a3e932,
        mid_equals_a2d8877a,
        mid_equals_2383bf16,
        mid_equals_6f6949ea,
        mid_fill_8f13b3b0,
        mid_fill_e6fbc3ca,
        mid_fill_c36b04c8,
        mid_fill_1da9211e,
        mid_fill_ea67e18a,
        mid_fill_4c830bd0,
        mid_fill_d6ab1c30,
        mid_fill_df726426,
        mid_fill_ad7155b0,
        mid_fill_b5b4fc2a,
        mid_fill_b3c1f708,
        mid_fill_c8914cf0,
        mid_fill_dee75d36,
        mid_fill_4f5bed8a,
        mid_fill_1e4305b0,
        mid_fill_4eae6582,
        mid_fill_77210c30,
        mid_fill_695adc54,
        mid_hashCode_f0c5b9dc,
        mid_hashCode_9ceb500c,
        mid_hashCode_49b4f134,
        mid_hashCode_700e23c9,
        mid_hashCode_c017fc59,
        mid_hashCode_f3b62cc6,
        mid_hashCode_9cc34320,
        mid_hashCode_1efc2017,
        mid_hashCode_c0f5dac5,
        mid_sort_9cc3433f,
        mid_sort_9ceb5013,
        mid_sort_f3b62cd9,
        mid_sort_700e23d6,
        mid_sort_c0f5dada,
        mid_sort_49b4f12b,
        mid_sort_c017fc46,
        mid_sort_1efc2008,
        mid_sort_8c46d789,
        mid_sort_b389e986,
        mid_sort_3e1ea22c,
        mid_sort_c8bd2f63,
        mid_sort_86f4435f,
        mid_sort_6f0bb356,
        mid_sort_3be2c5d1,
        mid_sort_6ae021e7,
        mid_sort_4172dade,
        mid_sort_7c263389,
        mid_toString_0f6e0f86,
        mid_toString_08b6580a,
        mid_toString_c783d655,
        mid_toString_9352a4bc,
        mid_toString_aeceff45,
        mid_toString_14e8bbde,
        mid_toString_02ea1cdd,
        mid_toString_053bf1ae,
        mid_toString_9570afaf,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Arrays(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Arrays(const Arrays& obj) : ::java::lang::Object(obj) {}

      static ::java::util::List asList(const JArray< ::java::lang::Object > &);
      static jint binarySearch(const JArray< jfloat > &, jfloat);
      static jint binarySearch(const JArray< ::java::lang::Object > &, const ::java::lang::Object &);
      static jint binarySearch(const JArray< jbyte > &, jbyte);
      static jint binarySearch(const JArray< jshort > &, jshort);
      static jint binarySearch(const JArray< jlong > &, jlong);
      static jint binarySearch(const JArray< jdouble > &, jdouble);
      static jint binarySearch(const JArray< jint > &, jint);
      static jint binarySearch(const JArray< jchar > &, jchar);
      static jint binarySearch(const JArray< ::java::lang::Object > &, const ::java::lang::Object &, const ::java::util::Comparator &);
      static jint binarySearch(const JArray< jlong > &, jint, jint, jlong);
      static jint binarySearch(const JArray< jbyte > &, jint, jint, jbyte);
      static jint binarySearch(const JArray< jfloat > &, jint, jint, jfloat);
      static jint binarySearch(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &);
      static jint binarySearch(const JArray< jdouble > &, jint, jint, jdouble);
      static jint binarySearch(const JArray< jchar > &, jint, jint, jchar);
      static jint binarySearch(const JArray< jint > &, jint, jint, jint);
      static jint binarySearch(const JArray< jshort > &, jint, jint, jshort);
      static jint binarySearch(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &, const ::java::util::Comparator &);
      static JArray< jshort > copyOf(const JArray< jshort > &, jint);
      static JArray< jchar > copyOf(const JArray< jchar > &, jint);
      static JArray< jlong > copyOf(const JArray< jlong > &, jint);
      static JArray< jdouble > copyOf(const JArray< jdouble > &, jint);
      static JArray< jbyte > copyOf(const JArray< jbyte > &, jint);
      static JArray< ::java::lang::Object > copyOf(const JArray< ::java::lang::Object > &, jint);
      static JArray< jint > copyOf(const JArray< jint > &, jint);
      static JArray< jfloat > copyOf(const JArray< jfloat > &, jint);
      static JArray< jboolean > copyOf(const JArray< jboolean > &, jint);
      static JArray< ::java::lang::Object > copyOf(const JArray< ::java::lang::Object > &, jint, const ::java::lang::Class &);
      static JArray< jfloat > copyOfRange(const JArray< jfloat > &, jint, jint);
      static JArray< ::java::lang::Object > copyOfRange(const JArray< ::java::lang::Object > &, jint, jint);
      static JArray< jdouble > copyOfRange(const JArray< jdouble > &, jint, jint);
      static JArray< jchar > copyOfRange(const JArray< jchar > &, jint, jint);
      static JArray< jbyte > copyOfRange(const JArray< jbyte > &, jint, jint);
      static JArray< jint > copyOfRange(const JArray< jint > &, jint, jint);
      static JArray< jlong > copyOfRange(const JArray< jlong > &, jint, jint);
      static JArray< jboolean > copyOfRange(const JArray< jboolean > &, jint, jint);
      static JArray< jshort > copyOfRange(const JArray< jshort > &, jint, jint);
      static JArray< ::java::lang::Object > copyOfRange(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Class &);
      static jboolean deepEquals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jint deepHashCode(const JArray< ::java::lang::Object > &);
      static ::java::lang::String deepToString(const JArray< ::java::lang::Object > &);
      static jboolean equals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jboolean equals(const JArray< jshort > &, const JArray< jshort > &);
      static jboolean equals(const JArray< jlong > &, const JArray< jlong > &);
      static jboolean equals(const JArray< jchar > &, const JArray< jchar > &);
      static jboolean equals(const JArray< jint > &, const JArray< jint > &);
      static jboolean equals(const JArray< jfloat > &, const JArray< jfloat > &);
      static jboolean equals(const JArray< jbyte > &, const JArray< jbyte > &);
      static jboolean equals(const JArray< jdouble > &, const JArray< jdouble > &);
      static jboolean equals(const JArray< jboolean > &, const JArray< jboolean > &);
      static void fill(const JArray< jbyte > &, jbyte);
      static void fill(const JArray< jshort > &, jshort);
      static void fill(const JArray< jfloat > &, jfloat);
      static void fill(const JArray< ::java::lang::Object > &, const ::java::lang::Object &);
      static void fill(const JArray< jchar > &, jchar);
      static void fill(const JArray< jlong > &, jlong);
      static void fill(const JArray< jdouble > &, jdouble);
      static void fill(const JArray< jint > &, jint);
      static void fill(const JArray< jboolean > &, jboolean);
      static void fill(const JArray< jchar > &, jint, jint, jchar);
      static void fill(const JArray< jfloat > &, jint, jint, jfloat);
      static void fill(const JArray< jlong > &, jint, jint, jlong);
      static void fill(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &);
      static void fill(const JArray< jshort > &, jint, jint, jshort);
      static void fill(const JArray< jbyte > &, jint, jint, jbyte);
      static void fill(const JArray< jint > &, jint, jint, jint);
      static void fill(const JArray< jboolean > &, jint, jint, jboolean);
      static void fill(const JArray< jdouble > &, jint, jint, jdouble);
      static jint hashCode(const JArray< jboolean > &);
      static jint hashCode(const JArray< jlong > &);
      static jint hashCode(const JArray< jbyte > &);
      static jint hashCode(const JArray< jchar > &);
      static jint hashCode(const JArray< jshort > &);
      static jint hashCode(const JArray< jdouble > &);
      static jint hashCode(const JArray< jfloat > &);
      static jint hashCode(const JArray< jint > &);
      static jint hashCode(const JArray< ::java::lang::Object > &);
      static void sort(const JArray< jfloat > &);
      static void sort(const JArray< jlong > &);
      static void sort(const JArray< jdouble > &);
      static void sort(const JArray< jchar > &);
      static void sort(const JArray< ::java::lang::Object > &);
      static void sort(const JArray< jbyte > &);
      static void sort(const JArray< jshort > &);
      static void sort(const JArray< jint > &);
      static void sort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static void sort(const JArray< jshort > &, jint, jint);
      static void sort(const JArray< jint > &, jint, jint);
      static void sort(const JArray< jfloat > &, jint, jint);
      static void sort(const JArray< jbyte > &, jint, jint);
      static void sort(const JArray< jchar > &, jint, jint);
      static void sort(const JArray< jdouble > &, jint, jint);
      static void sort(const JArray< jlong > &, jint, jint);
      static void sort(const JArray< ::java::lang::Object > &, jint, jint);
      static void sort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static ::java::lang::String toString(const JArray< jbyte > &);
      static ::java::lang::String toString(const JArray< jfloat > &);
      static ::java::lang::String toString(const JArray< jchar > &);
      static ::java::lang::String toString(const JArray< jdouble > &);
      static ::java::lang::String toString(const JArray< jshort > &);
      static ::java::lang::String toString(const JArray< jboolean > &);
      static ::java::lang::String toString(const JArray< ::java::lang::Object > &);
      static ::java::lang::String toString(const JArray< jlong > &);
      static ::java::lang::String toString(const JArray< jint > &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(Arrays);

    class t_Arrays {
    public:
      PyObject_HEAD
      Arrays object;
      static PyObject *wrap_Object(const Arrays&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
