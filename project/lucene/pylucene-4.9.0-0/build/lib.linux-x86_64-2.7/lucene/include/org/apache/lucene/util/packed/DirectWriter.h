#ifndef org_apache_lucene_util_packed_DirectWriter_H
#define org_apache_lucene_util_packed_DirectWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
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

          class DirectWriter : public ::java::lang::Object {
          public:
            enum {
              mid_add_0ee6df2f,
              mid_bitsRequired_0ee6df30,
              mid_finish_54c6a166,
              mid_getInstance_3b8d11ee,
              mid_unsignedBitsRequired_0ee6df30,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DirectWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DirectWriter(const DirectWriter& obj) : ::java::lang::Object(obj) {}

            void add(jlong) const;
            static jint bitsRequired(jlong);
            void finish() const;
            static DirectWriter getInstance(const ::org::apache::lucene::store::IndexOutput &, jlong, jint);
            static jint unsignedBitsRequired(jlong);
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
          extern PyTypeObject PY_TYPE(DirectWriter);

          class t_DirectWriter {
          public:
            PyObject_HEAD
            DirectWriter object;
            static PyObject *wrap_Object(const DirectWriter&);
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
