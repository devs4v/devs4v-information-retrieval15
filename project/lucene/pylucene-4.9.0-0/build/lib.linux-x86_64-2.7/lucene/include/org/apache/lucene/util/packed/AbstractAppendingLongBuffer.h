#ifndef org_apache_lucene_util_packed_AbstractAppendingLongBuffer_H
#define org_apache_lucene_util_packed_AbstractAppendingLongBuffer_H

#include "org/apache/lucene/util/LongValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        namespace packed {
          class AbstractAppendingLongBuffer$Iterator;
        }
      }
    }
  }
}
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

          class AbstractAppendingLongBuffer : public ::org::apache::lucene::util::LongValues {
          public:
            enum {
              mid_add_0ee6df2f,
              mid_freeze_54c6a166,
              mid_get_0ee6df33,
              mid_get_f0f66bc1,
              mid_iterator_583a9cb3,
              mid_ramBytesUsed_54c6a17a,
              mid_size_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractAppendingLongBuffer(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractAppendingLongBuffer(const AbstractAppendingLongBuffer& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            void add(jlong) const;
            void freeze() const;
            jlong get(jlong) const;
            jint get(jlong, const JArray< jlong > &, jint, jint) const;
            ::org::apache::lucene::util::packed::AbstractAppendingLongBuffer$Iterator iterator() const;
            jlong ramBytesUsed() const;
            jlong size() const;
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
          extern PyTypeObject PY_TYPE(AbstractAppendingLongBuffer);

          class t_AbstractAppendingLongBuffer {
          public:
            PyObject_HEAD
            AbstractAppendingLongBuffer object;
            static PyObject *wrap_Object(const AbstractAppendingLongBuffer&);
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
