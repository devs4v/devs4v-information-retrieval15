#ifndef org_apache_lucene_util_BitUtil_H
#define org_apache_lucene_util_BitUtil_H

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

        class BitUtil : public ::java::lang::Object {
        public:
          enum {
            mid_bitCount_b2271698,
            mid_bitList_b2271698,
            mid_nextHighestPowerOfTwo_0ee6df33,
            mid_nextHighestPowerOfTwo_39c7bd23,
            mid_pop_andnot_c347d95a,
            mid_pop_array_6ae021fb,
            mid_pop_intersect_c347d95a,
            mid_pop_union_c347d95a,
            mid_pop_xor_c347d95a,
            mid_zigZagDecode_39c7bd23,
            mid_zigZagDecode_0ee6df33,
            mid_zigZagEncode_39c7bd23,
            mid_zigZagEncode_0ee6df33,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BitUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BitUtil(const BitUtil& obj) : ::java::lang::Object(obj) {}

          static jint bitCount(jbyte);
          static jint bitList(jbyte);
          static jlong nextHighestPowerOfTwo(jlong);
          static jint nextHighestPowerOfTwo(jint);
          static jlong pop_andnot(const JArray< jlong > &, const JArray< jlong > &, jint, jint);
          static jlong pop_array(const JArray< jlong > &, jint, jint);
          static jlong pop_intersect(const JArray< jlong > &, const JArray< jlong > &, jint, jint);
          static jlong pop_union(const JArray< jlong > &, const JArray< jlong > &, jint, jint);
          static jlong pop_xor(const JArray< jlong > &, const JArray< jlong > &, jint, jint);
          static jint zigZagDecode(jint);
          static jlong zigZagDecode(jlong);
          static jint zigZagEncode(jint);
          static jlong zigZagEncode(jlong);
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
        extern PyTypeObject PY_TYPE(BitUtil);

        class t_BitUtil {
        public:
          PyObject_HEAD
          BitUtil object;
          static PyObject *wrap_Object(const BitUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
