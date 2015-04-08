#ifndef org_apache_lucene_util_NumericUtils_H
#define org_apache_lucene_util_NumericUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class NumericUtils$LongRangeBuilder;
        class BytesRef;
        class NumericUtils$IntRangeBuilder;
      }
      namespace index {
        class Terms;
        class TermsEnum;
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
      namespace util {

        class NumericUtils : public ::java::lang::Object {
        public:
          enum {
            mid_doubleToSortableLong_5d1c7659,
            mid_filterPrefixCodedInts_d737078b,
            mid_filterPrefixCodedLongs_d737078b,
            mid_floatToSortableInt_06298cb4,
            mid_getMaxInt_d0b7bb08,
            mid_getMaxLong_d0b7bb0b,
            mid_getMinInt_d0b7bb08,
            mid_getMinLong_d0b7bb0b,
            mid_getPrefixCodedIntShift_7bc03ddb,
            mid_getPrefixCodedLongShift_7bc03ddb,
            mid_intToPrefixCoded_362d2138,
            mid_intToPrefixCodedBytes_362d2138,
            mid_longToPrefixCoded_4adff79b,
            mid_longToPrefixCodedBytes_4adff79b,
            mid_prefixCodedToInt_7bc03ddb,
            mid_prefixCodedToLong_7bc03dd8,
            mid_sortableDoubleBits_0ee6df33,
            mid_sortableFloatBits_39c7bd23,
            mid_sortableIntToFloat_39c7bd2c,
            mid_sortableLongToDouble_0ee6df3d,
            mid_splitIntRange_b263c325,
            mid_splitLongRange_585f2c31,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NumericUtils(const NumericUtils& obj) : ::java::lang::Object(obj) {}

          static jint BUF_SIZE_INT;
          static jint BUF_SIZE_LONG;
          static jint PRECISION_STEP_DEFAULT;
          static jint PRECISION_STEP_DEFAULT_32;
          static jbyte SHIFT_START_INT;
          static jbyte SHIFT_START_LONG;

          static jlong doubleToSortableLong(jdouble);
          static ::org::apache::lucene::index::TermsEnum filterPrefixCodedInts(const ::org::apache::lucene::index::TermsEnum &);
          static ::org::apache::lucene::index::TermsEnum filterPrefixCodedLongs(const ::org::apache::lucene::index::TermsEnum &);
          static jint floatToSortableInt(jfloat);
          static jint getMaxInt(const ::org::apache::lucene::index::Terms &);
          static jlong getMaxLong(const ::org::apache::lucene::index::Terms &);
          static jint getMinInt(const ::org::apache::lucene::index::Terms &);
          static jlong getMinLong(const ::org::apache::lucene::index::Terms &);
          static jint getPrefixCodedIntShift(const ::org::apache::lucene::util::BytesRef &);
          static jint getPrefixCodedLongShift(const ::org::apache::lucene::util::BytesRef &);
          static void intToPrefixCoded(jint, jint, const ::org::apache::lucene::util::BytesRef &);
          static void intToPrefixCodedBytes(jint, jint, const ::org::apache::lucene::util::BytesRef &);
          static void longToPrefixCoded(jlong, jint, const ::org::apache::lucene::util::BytesRef &);
          static void longToPrefixCodedBytes(jlong, jint, const ::org::apache::lucene::util::BytesRef &);
          static jint prefixCodedToInt(const ::org::apache::lucene::util::BytesRef &);
          static jlong prefixCodedToLong(const ::org::apache::lucene::util::BytesRef &);
          static jlong sortableDoubleBits(jlong);
          static jint sortableFloatBits(jint);
          static jfloat sortableIntToFloat(jint);
          static jdouble sortableLongToDouble(jlong);
          static void splitIntRange(const ::org::apache::lucene::util::NumericUtils$IntRangeBuilder &, jint, jint, jint);
          static void splitLongRange(const ::org::apache::lucene::util::NumericUtils$LongRangeBuilder &, jint, jlong, jlong);
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
        extern PyTypeObject PY_TYPE(NumericUtils);

        class t_NumericUtils {
        public:
          PyObject_HEAD
          NumericUtils object;
          static PyObject *wrap_Object(const NumericUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
