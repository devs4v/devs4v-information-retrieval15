#ifndef org_apache_lucene_util_packed_PackedInts$Header_H
#define org_apache_lucene_util_packed_PackedInts$Header_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class PackedInts$Format;
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

          class PackedInts$Header : public ::java::lang::Object {
          public:
            enum {
              mid_init$_46a0813c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$Header(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PackedInts$Header(const PackedInts$Header& obj) : ::java::lang::Object(obj) {}

            PackedInts$Header(const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint, jint);
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
          extern PyTypeObject PY_TYPE(PackedInts$Header);

          class t_PackedInts$Header {
          public:
            PyObject_HEAD
            PackedInts$Header object;
            static PyObject *wrap_Object(const PackedInts$Header&);
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
