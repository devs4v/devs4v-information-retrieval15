#ifndef org_apache_lucene_analysis_util_RollingCharBuffer_H
#define org_apache_lucene_analysis_util_RollingCharBuffer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class RollingCharBuffer : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_freeBefore_39c7bd3c,
              mid_get_39c7bd23,
              mid_get_acd005cf,
              mid_reset_cf2e3c10,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RollingCharBuffer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            RollingCharBuffer(const RollingCharBuffer& obj) : ::java::lang::Object(obj) {}

            RollingCharBuffer();

            void freeBefore(jint) const;
            jint get(jint) const;
            JArray< jchar > get(jint, jint) const;
            void reset(const ::java::io::Reader &) const;
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
      namespace analysis {
        namespace util {
          extern PyTypeObject PY_TYPE(RollingCharBuffer);

          class t_RollingCharBuffer {
          public:
            PyObject_HEAD
            RollingCharBuffer object;
            static PyObject *wrap_Object(const RollingCharBuffer&);
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
