#ifndef org_apache_lucene_util_packed_MonotonicBlockPackedReader_H
#define org_apache_lucene_util_packed_MonotonicBlockPackedReader_H

#include "org/apache/lucene/util/LongValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace store {
        class IndexInput;
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
        namespace packed {

          class MonotonicBlockPackedReader : public ::org::apache::lucene::util::LongValues {
          public:
            enum {
              mid_get_0ee6df33,
              mid_of_796f5dbd,
              mid_ramBytesUsed_54c6a17a,
              mid_size_54c6a17a,
              mid_decodeDelta_0ee6df33,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MonotonicBlockPackedReader(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            MonotonicBlockPackedReader(const MonotonicBlockPackedReader& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            jlong get(jlong) const;
            static MonotonicBlockPackedReader of(const ::org::apache::lucene::store::IndexInput &, jint, jint, jlong, jboolean);
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
          extern PyTypeObject PY_TYPE(MonotonicBlockPackedReader);

          class t_MonotonicBlockPackedReader {
          public:
            PyObject_HEAD
            MonotonicBlockPackedReader object;
            static PyObject *wrap_Object(const MonotonicBlockPackedReader&);
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
