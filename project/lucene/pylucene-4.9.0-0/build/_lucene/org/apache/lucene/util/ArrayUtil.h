#ifndef org_apache_lucene_util_ArrayUtil_H
#define org_apache_lucene_util_ArrayUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Comparator;
  }
  namespace lang {
    class NumberFormatException;
    class Integer;
    class Comparable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ArrayUtil : public ::java::lang::Object {
        public:
          enum {
            mid_equals_082119cc,
            mid_equals_8c28d07c,
            mid_equals_06f361be,
            mid_getShrinkSize_d3236abb,
            mid_grow_4ea7c525,
            mid_grow_607a9cf1,
            mid_grow_21fe49ab,
            mid_grow_6dd1ed5d,
            mid_grow_fc3c604f,
            mid_grow_e08af67d,
            mid_grow_12f49f5f,
            mid_grow_27787b8f,
            mid_grow_3de5243f,
            mid_grow_1193226d,
            mid_grow_e2c1f835,
            mid_grow_d090ee39,
            mid_grow_1fbccced,
            mid_grow_62111365,
            mid_grow_6bd5869d,
            mid_grow_91cb90f9,
            mid_grow_0f9a030d,
            mid_grow_d766d189,
            mid_grow_92d373eb,
            mid_grow_a415095d,
            mid_hashCode_6f0bb349,
            mid_hashCode_86f44340,
            mid_introSort_01dac18d,
            mid_introSort_8c46d789,
            mid_introSort_266f4139,
            mid_introSort_7c263389,
            mid_naturalComparator_5a7ff2fc,
            mid_oversize_d8d154b9,
            mid_parseInt_700e23c9,
            mid_parseInt_6f0bb349,
            mid_parseInt_afe81cab,
            mid_shrink_92d373eb,
            mid_shrink_0f9a030d,
            mid_shrink_1fbccced,
            mid_shrink_6bd5869d,
            mid_shrink_d766d189,
            mid_shrink_91cb90f9,
            mid_shrink_62111365,
            mid_shrink_d090ee39,
            mid_swap_4172dade,
            mid_timSort_01dac18d,
            mid_timSort_8c46d789,
            mid_timSort_266f4139,
            mid_timSort_7c263389,
            mid_toIntArray_d16addd8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ArrayUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ArrayUtil(const ArrayUtil& obj) : ::java::lang::Object(obj) {}

          static jint MAX_ARRAY_LENGTH;

          static jboolean equals(const JArray< jint > &, jint, const JArray< jint > &, jint, jint);
          static jboolean equals(const JArray< jchar > &, jint, const JArray< jchar > &, jint, jint);
          static jboolean equals(const JArray< jbyte > &, jint, const JArray< jbyte > &, jint, jint);
          static jint getShrinkSize(jint, jint, jint);
          static JArray< jfloat > grow(const JArray< jfloat > &);
          static JArray< jdouble > grow(const JArray< jdouble > &);
          static JArray< JArray< jint > > grow(const JArray< JArray< jint > > &);
          static JArray< jlong > grow(const JArray< jlong > &);
          static JArray< jint > grow(const JArray< jint > &);
          static JArray< jboolean > grow(const JArray< jboolean > &);
          static JArray< jchar > grow(const JArray< jchar > &);
          static JArray< JArray< jfloat > > grow(const JArray< JArray< jfloat > > &);
          static JArray< jshort > grow(const JArray< jshort > &);
          static JArray< jbyte > grow(const JArray< jbyte > &);
          static JArray< jdouble > grow(const JArray< jdouble > &, jint);
          static JArray< jshort > grow(const JArray< jshort > &, jint);
          static JArray< jboolean > grow(const JArray< jboolean > &, jint);
          static JArray< JArray< jint > > grow(const JArray< JArray< jint > > &, jint);
          static JArray< jbyte > grow(const JArray< jbyte > &, jint);
          static JArray< jchar > grow(const JArray< jchar > &, jint);
          static JArray< jlong > grow(const JArray< jlong > &, jint);
          static JArray< jint > grow(const JArray< jint > &, jint);
          static JArray< JArray< jfloat > > grow(const JArray< JArray< jfloat > > &, jint);
          static JArray< jfloat > grow(const JArray< jfloat > &, jint);
          static jint hashCode(const JArray< jchar > &, jint, jint);
          static jint hashCode(const JArray< jbyte > &, jint, jint);
          static void introSort(const JArray< ::java::lang::Comparable > &);
          static void introSort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
          static void introSort(const JArray< ::java::lang::Comparable > &, jint, jint);
          static void introSort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
          static ::java::util::Comparator naturalComparator();
          static jint oversize(jint, jint);
          static jint parseInt(const JArray< jchar > &);
          static jint parseInt(const JArray< jchar > &, jint, jint);
          static jint parseInt(const JArray< jchar > &, jint, jint, jint);
          static JArray< JArray< jfloat > > shrink(const JArray< JArray< jfloat > > &, jint);
          static JArray< jlong > shrink(const JArray< jlong > &, jint);
          static JArray< jboolean > shrink(const JArray< jboolean > &, jint);
          static JArray< jbyte > shrink(const JArray< jbyte > &, jint);
          static JArray< jint > shrink(const JArray< jint > &, jint);
          static JArray< jchar > shrink(const JArray< jchar > &, jint);
          static JArray< JArray< jint > > shrink(const JArray< JArray< jint > > &, jint);
          static JArray< jshort > shrink(const JArray< jshort > &, jint);
          static void swap(const JArray< ::java::lang::Object > &, jint, jint);
          static void timSort(const JArray< ::java::lang::Comparable > &);
          static void timSort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
          static void timSort(const JArray< ::java::lang::Comparable > &, jint, jint);
          static void timSort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
          static JArray< jint > toIntArray(const ::java::util::Collection &);
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
        extern PyTypeObject PY_TYPE(ArrayUtil);

        class t_ArrayUtil {
        public:
          PyObject_HEAD
          ArrayUtil object;
          static PyObject *wrap_Object(const ArrayUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
