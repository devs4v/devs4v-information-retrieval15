#ifndef org_apache_lucene_util_packed_AppendingDeltaPackedLongBuffer_H
#define org_apache_lucene_util_packed_AppendingDeltaPackedLongBuffer_H

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

          class AppendingDeltaPackedLongBuffer : public ::org::apache::lucene::util::packed::AbstractAppendingLongBuffer {
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

            explicit AppendingDeltaPackedLongBuffer(jobject obj) : ::org::apache::lucene::util::packed::AbstractAppendingLongBuffer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AppendingDeltaPackedLongBuffer(const AppendingDeltaPackedLongBuffer& obj) : ::org::apache::lucene::util::packed::AbstractAppendingLongBuffer(obj) {}

            AppendingDeltaPackedLongBuffer();
            AppendingDeltaPackedLongBuffer(jfloat);
            AppendingDeltaPackedLongBuffer(jint, jint, jfloat);

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
          extern PyTypeObject PY_TYPE(AppendingDeltaPackedLongBuffer);

          class t_AppendingDeltaPackedLongBuffer {
          public:
            PyObject_HEAD
            AppendingDeltaPackedLongBuffer object;
            static PyObject *wrap_Object(const AppendingDeltaPackedLongBuffer&);
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
