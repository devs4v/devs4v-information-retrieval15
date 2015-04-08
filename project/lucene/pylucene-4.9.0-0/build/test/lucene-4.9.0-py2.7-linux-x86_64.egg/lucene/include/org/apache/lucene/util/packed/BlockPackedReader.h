#ifndef org_apache_lucene_util_packed_BlockPackedReader_H
#define org_apache_lucene_util_packed_BlockPackedReader_H

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

          class BlockPackedReader : public ::org::apache::lucene::util::LongValues {
          public:
            enum {
              mid_init$_f9e6aacc,
              mid_get_0ee6df33,
              mid_ramBytesUsed_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockPackedReader(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BlockPackedReader(const BlockPackedReader& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            BlockPackedReader(const ::org::apache::lucene::store::IndexInput &, jint, jint, jlong, jboolean);

            jlong get(jlong) const;
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
          extern PyTypeObject PY_TYPE(BlockPackedReader);

          class t_BlockPackedReader {
          public:
            PyObject_HEAD
            BlockPackedReader object;
            static PyObject *wrap_Object(const BlockPackedReader&);
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
