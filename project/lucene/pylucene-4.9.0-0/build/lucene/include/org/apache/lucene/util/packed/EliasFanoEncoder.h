#ifndef org_apache_lucene_util_packed_EliasFanoEncoder_H
#define org_apache_lucene_util_packed_EliasFanoEncoder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        namespace packed {
          class EliasFanoDecoder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class EliasFanoEncoder : public ::java::lang::Object {
          public:
            enum {
              mid_init$_a7e12ca4,
              mid_init$_16913989,
              mid_encodeNext_0ee6df2f,
              mid_equals_290588e2,
              mid_getDecoder_38e2d30d,
              mid_getIndexBits_dab10e76,
              mid_getLowerBits_dab10e76,
              mid_getUpperBits_dab10e76,
              mid_hashCode_54c6a179,
              mid_ramBytesUsed_54c6a17a,
              mid_sufficientlySmallerThanBitSet_a7e12ca8,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EliasFanoEncoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            EliasFanoEncoder(const EliasFanoEncoder& obj) : ::java::lang::Object(obj) {}

            static jlong DEFAULT_INDEX_INTERVAL;

            EliasFanoEncoder(jlong, jlong);
            EliasFanoEncoder(jlong, jlong, jlong);

            void encodeNext(jlong) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::packed::EliasFanoDecoder getDecoder() const;
            JArray< jlong > getIndexBits() const;
            JArray< jlong > getLowerBits() const;
            JArray< jlong > getUpperBits() const;
            jint hashCode() const;
            jlong ramBytesUsed() const;
            static jboolean sufficientlySmallerThanBitSet(jlong, jlong);
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          extern PyTypeObject PY_TYPE(EliasFanoEncoder);

          class t_EliasFanoEncoder {
          public:
            PyObject_HEAD
            EliasFanoEncoder object;
            static PyObject *wrap_Object(const EliasFanoEncoder&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
