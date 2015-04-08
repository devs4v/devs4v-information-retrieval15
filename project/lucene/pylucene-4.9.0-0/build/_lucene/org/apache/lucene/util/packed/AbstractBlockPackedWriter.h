#ifndef org_apache_lucene_util_packed_AbstractBlockPackedWriter_H
#define org_apache_lucene_util_packed_AbstractBlockPackedWriter_H

#include "java/lang/Object.h"

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

          class AbstractBlockPackedWriter : public ::java::lang::Object {
          public:
            enum {
              mid_init$_f4663c33,
              mid_add_0ee6df2f,
              mid_finish_54c6a166,
              mid_ord_54c6a17a,
              mid_reset_27875f57,
              mid_flush_54c6a166,
              mid_writeValues_39c7bd3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractBlockPackedWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractBlockPackedWriter(const AbstractBlockPackedWriter& obj) : ::java::lang::Object(obj) {}

            AbstractBlockPackedWriter(const ::org::apache::lucene::store::DataOutput &, jint);

            void add(jlong) const;
            void finish() const;
            jlong ord() const;
            void reset(const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyTypeObject PY_TYPE(AbstractBlockPackedWriter);

          class t_AbstractBlockPackedWriter {
          public:
            PyObject_HEAD
            AbstractBlockPackedWriter object;
            static PyObject *wrap_Object(const AbstractBlockPackedWriter&);
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
