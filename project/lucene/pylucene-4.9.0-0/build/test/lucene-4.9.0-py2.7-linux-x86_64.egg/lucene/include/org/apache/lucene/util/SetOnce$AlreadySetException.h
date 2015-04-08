#ifndef org_apache_lucene_util_SetOnce$AlreadySetException_H
#define org_apache_lucene_util_SetOnce$AlreadySetException_H

#include "java/lang/IllegalStateException.h"

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

        class SetOnce$AlreadySetException : public ::java::lang::IllegalStateException {
        public:
          enum {
            mid_init$_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SetOnce$AlreadySetException(jobject obj) : ::java::lang::IllegalStateException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SetOnce$AlreadySetException(const SetOnce$AlreadySetException& obj) : ::java::lang::IllegalStateException(obj) {}

          SetOnce$AlreadySetException();
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
        extern PyTypeObject PY_TYPE(SetOnce$AlreadySetException);

        class t_SetOnce$AlreadySetException {
        public:
          PyObject_HEAD
          SetOnce$AlreadySetException object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SetOnce$AlreadySetException *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SetOnce$AlreadySetException&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SetOnce$AlreadySetException&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
