#ifndef org_apache_lucene_util_packed_AppendingPackedLongBuffer_H
#define org_apache_lucene_util_packed_AppendingPackedLongBuffer_H

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

          class AppendingPackedLongBuffer : public ::org::apache::lucene::util::packed::AbstractAppendingLongBuffer {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_06298cab,
              mid_init$_a74e6883,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AppendingPackedLongBuffer(jobject obj) : ::org::apache::lucene::util::packed::AbstractAppendingLongBuffer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AppendingPackedLongBuffer(const AppendingPackedLongBuffer& obj) : ::org::apache::lucene::util::packed::AbstractAppendingLongBuffer(obj) {}

            AppendingPackedLongBuffer();
            AppendingPackedLongBuffer(jfloat);
            AppendingPackedLongBuffer(jint, jint, jfloat);
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
          extern PyTypeObject PY_TYPE(AppendingPackedLongBuffer);

          class t_AppendingPackedLongBuffer {
          public:
            PyObject_HEAD
            AppendingPackedLongBuffer object;
            static PyObject *wrap_Object(const AppendingPackedLongBuffer&);
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
