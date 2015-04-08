#ifndef org_apache_lucene_util_RamUsageEstimator_H
#define org_apache_lucene_util_RamUsageEstimator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class RamUsageEstimator$JvmFeature;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Long;
    class Class;
  }
  namespace text {
    class DecimalFormat;
  }
  namespace util {
    class EnumSet;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class RamUsageEstimator : public ::java::lang::Object {
        public:
          enum {
            mid_alignObjectSize_0ee6df33,
            mid_getSupportedFeatures_eebf2c68,
            mid_getUnsupportedFeatures_eebf2c68,
            mid_humanReadableUnits_3e02f30e,
            mid_humanReadableUnits_d1b61567,
            mid_isSupportedJVM_54c6a16a,
            mid_shallowSizeOf_c0f5dac6,
            mid_shallowSizeOf_290588f2,
            mid_shallowSizeOfInstance_a5deafe8,
            mid_sizeOf_f0c5b9df,
            mid_sizeOf_da55802d,
            mid_sizeOf_c017fc5a,
            mid_sizeOf_9cc34323,
            mid_sizeOf_9ceb500f,
            mid_sizeOf_1efc2014,
            mid_sizeOf_f3b62cc5,
            mid_sizeOf_49b4f137,
            mid_sizeOf_700e23ca,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RamUsageEstimator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RamUsageEstimator(const RamUsageEstimator& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *JVM_INFO_STRING;
          static jint NUM_BYTES_ARRAY_HEADER;
          static jint NUM_BYTES_BOOLEAN;
          static jint NUM_BYTES_BYTE;
          static jint NUM_BYTES_CHAR;
          static jint NUM_BYTES_DOUBLE;
          static jint NUM_BYTES_FLOAT;
          static jint NUM_BYTES_INT;
          static jint NUM_BYTES_LONG;
          static jint NUM_BYTES_OBJECT_ALIGNMENT;
          static jint NUM_BYTES_OBJECT_HEADER;
          static jint NUM_BYTES_OBJECT_REF;
          static jint NUM_BYTES_SHORT;
          static jlong ONE_GB;
          static jlong ONE_KB;
          static jlong ONE_MB;

          static jlong alignObjectSize(jlong);
          static ::java::util::EnumSet getSupportedFeatures();
          static ::java::util::EnumSet getUnsupportedFeatures();
          static ::java::lang::String humanReadableUnits(jlong);
          static ::java::lang::String humanReadableUnits(jlong, const ::java::text::DecimalFormat &);
          static jboolean isSupportedJVM();
          static jlong shallowSizeOf(const JArray< ::java::lang::Object > &);
          static jlong shallowSizeOf(const ::java::lang::Object &);
          static jlong shallowSizeOfInstance(const ::java::lang::Class &);
          static jlong sizeOf(const JArray< jboolean > &);
          static jlong sizeOf(const ::java::lang::Long &);
          static jlong sizeOf(const JArray< jshort > &);
          static jlong sizeOf(const JArray< jfloat > &);
          static jlong sizeOf(const JArray< jlong > &);
          static jlong sizeOf(const JArray< jint > &);
          static jlong sizeOf(const JArray< jdouble > &);
          static jlong sizeOf(const JArray< jbyte > &);
          static jlong sizeOf(const JArray< jchar > &);
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
        extern PyTypeObject PY_TYPE(RamUsageEstimator);

        class t_RamUsageEstimator {
        public:
          PyObject_HEAD
          RamUsageEstimator object;
          static PyObject *wrap_Object(const RamUsageEstimator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
