#ifndef org_apache_lucene_util_RollingBuffer$Resettable_H
#define org_apache_lucene_util_RollingBuffer$Resettable_H

#include "java/lang/Object.h"

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

        class RollingBuffer$Resettable : public ::java::lang::Object {
        public:
          enum {
            mid_reset_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RollingBuffer$Resettable(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RollingBuffer$Resettable(const RollingBuffer$Resettable& obj) : ::java::lang::Object(obj) {}

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
        extern PyTypeObject PY_TYPE(RollingBuffer$Resettable);

        class t_RollingBuffer$Resettable {
        public:
          PyObject_HEAD
          RollingBuffer$Resettable object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RollingBuffer$Resettable *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RollingBuffer$Resettable&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RollingBuffer$Resettable&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
