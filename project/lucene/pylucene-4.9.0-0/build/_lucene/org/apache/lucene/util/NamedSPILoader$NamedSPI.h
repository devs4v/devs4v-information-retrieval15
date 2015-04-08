#ifndef org_apache_lucene_util_NamedSPILoader$NamedSPI_H
#define org_apache_lucene_util_NamedSPILoader$NamedSPI_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class NamedSPILoader$NamedSPI : public ::java::lang::Object {
        public:
          enum {
            mid_getName_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NamedSPILoader$NamedSPI(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NamedSPILoader$NamedSPI(const NamedSPILoader$NamedSPI& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String getName() const;
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
        extern PyTypeObject PY_TYPE(NamedSPILoader$NamedSPI);

        class t_NamedSPILoader$NamedSPI {
        public:
          PyObject_HEAD
          NamedSPILoader$NamedSPI object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_NamedSPILoader$NamedSPI *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const NamedSPILoader$NamedSPI&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const NamedSPILoader$NamedSPI&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
