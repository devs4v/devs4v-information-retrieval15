#ifndef org_apache_lucene_util_CloseableThreadLocal_H
#define org_apache_lucene_util_CloseableThreadLocal_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class CloseableThreadLocal : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_close_54c6a166,
            mid_get_846352c3,
            mid_set_290588ee,
            mid_initialValue_846352c3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CloseableThreadLocal(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CloseableThreadLocal(const CloseableThreadLocal& obj) : ::java::lang::Object(obj) {}

          CloseableThreadLocal();

          void close() const;
          ::java::lang::Object get() const;
          void set(const ::java::lang::Object &) const;
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
        extern PyTypeObject PY_TYPE(CloseableThreadLocal);

        class t_CloseableThreadLocal {
        public:
          PyObject_HEAD
          CloseableThreadLocal object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CloseableThreadLocal *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CloseableThreadLocal&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CloseableThreadLocal&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
