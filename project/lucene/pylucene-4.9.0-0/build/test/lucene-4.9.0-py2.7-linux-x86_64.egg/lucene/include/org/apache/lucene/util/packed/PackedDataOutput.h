#ifndef org_apache_lucene_util_packed_PackedDataOutput_H
#define org_apache_lucene_util_packed_PackedDataOutput_H

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

          class PackedDataOutput : public ::java::lang::Object {
          public:
            enum {
              mid_init$_27875f57,
              mid_flush_54c6a166,
              mid_writeLong_25d05c8f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedDataOutput(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PackedDataOutput(const PackedDataOutput& obj) : ::java::lang::Object(obj) {}

            PackedDataOutput(const ::org::apache::lucene::store::DataOutput &);

            void flush() const;
            void writeLong(jlong, jint) const;
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
          extern PyTypeObject PY_TYPE(PackedDataOutput);

          class t_PackedDataOutput {
          public:
            PyObject_HEAD
            PackedDataOutput object;
            static PyObject *wrap_Object(const PackedDataOutput&);
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
