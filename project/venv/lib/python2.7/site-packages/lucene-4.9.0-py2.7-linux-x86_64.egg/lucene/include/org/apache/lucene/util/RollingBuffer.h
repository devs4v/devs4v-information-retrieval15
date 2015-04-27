#ifndef org_apache_lucene_util_RollingBuffer_H
#define org_apache_lucene_util_RollingBuffer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class RollingBuffer$Resettable;
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

        class RollingBuffer : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_freeBefore_39c7bd3c,
            mid_get_730fb8ff,
            mid_getMaxPos_54c6a179,
            mid_reset_54c6a166,
            mid_newInstance_a57a1151,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RollingBuffer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RollingBuffer(const RollingBuffer& obj) : ::java::lang::Object(obj) {}

          RollingBuffer();

          void freeBefore(jint) const;
          ::org::apache::lucene::util::RollingBuffer$Resettable get(jint) const;
          jint getMaxPos() const;
          void reset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(RollingBuffer);

        class t_RollingBuffer {
        public:
          PyObject_HEAD
          RollingBuffer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RollingBuffer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RollingBuffer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RollingBuffer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
