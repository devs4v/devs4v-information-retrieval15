#ifndef org_apache_lucene_util_packed_MonotonicAppendingLongBuffer_H
#define org_apache_lucene_util_packed_MonotonicAppendingLongBuffer_H

#include "org/apache/lucene/util/packed/AbstractAppendingLongBuffer.h"

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
        namespace packed {

          class MonotonicAppendingLongBuffer : public ::org::apache::lucene::util::packed::AbstractAppendingLongBuffer {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_06298cab,
              mid_init$_a74e6883,
              mid_ramBytesUsed_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MonotonicAppendingLongBuffer(jobject obj) : ::org::apache::lucene::util::packed::AbstractAppendingLongBuffer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            MonotonicAppendingLongBuffer(const MonotonicAppendingLongBuffer& obj) : ::org::apache::lucene::util::packed::AbstractAppendingLongBuffer(obj) {}

            MonotonicAppendingLongBuffer();
            MonotonicAppendingLongBuffer(jfloat);
            MonotonicAppendingLongBuffer(jint, jint, jfloat);

            jlong ramBytesUsed() const;
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
          extern PyTypeObject PY_TYPE(MonotonicAppendingLongBuffer);

          class t_MonotonicAppendingLongBuffer {
          public:
            PyObject_HEAD
            MonotonicAppendingLongBuffer object;
            static PyObject *wrap_Object(const MonotonicAppendingLongBuffer&);
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
