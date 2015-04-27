#ifndef org_apache_lucene_util_packed_MonotonicBlockPackedWriter_H
#define org_apache_lucene_util_packed_MonotonicBlockPackedWriter_H

#include "org/apache/lucene/util/packed/AbstractBlockPackedWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
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

          class MonotonicBlockPackedWriter : public ::org::apache::lucene::util::packed::AbstractBlockPackedWriter {
          public:
            enum {
              mid_init$_f4663c33,
              mid_add_0ee6df2f,
              mid_flush_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MonotonicBlockPackedWriter(jobject obj) : ::org::apache::lucene::util::packed::AbstractBlockPackedWriter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            MonotonicBlockPackedWriter(const MonotonicBlockPackedWriter& obj) : ::org::apache::lucene::util::packed::AbstractBlockPackedWriter(obj) {}

            MonotonicBlockPackedWriter(const ::org::apache::lucene::store::DataOutput &, jint);

            void add(jlong) const;
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
          extern PyTypeObject PY_TYPE(MonotonicBlockPackedWriter);

          class t_MonotonicBlockPackedWriter {
          public:
            PyObject_HEAD
            MonotonicBlockPackedWriter object;
            static PyObject *wrap_Object(const MonotonicBlockPackedWriter&);
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
