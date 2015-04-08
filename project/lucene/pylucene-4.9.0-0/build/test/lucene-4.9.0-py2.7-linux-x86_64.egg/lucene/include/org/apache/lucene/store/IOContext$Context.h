#ifndef org_apache_lucene_store_IOContext$Context_H
#define org_apache_lucene_store_IOContext$Context_H

#include "java/lang/Enum.h"

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
      namespace store {

        class IOContext$Context : public ::java::lang::Enum {
        public:
          enum {
            mid_valueOf_6cdc8b82,
            mid_values_8c68e654,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOContext$Context(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IOContext$Context(const IOContext$Context& obj) : ::java::lang::Enum(obj) {}

          static IOContext$Context *DEFAULT;
          static IOContext$Context *FLUSH;
          static IOContext$Context *MERGE;
          static IOContext$Context *READ;

          static IOContext$Context valueOf(const ::java::lang::String &);
          static JArray< IOContext$Context > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyTypeObject PY_TYPE(IOContext$Context);

        class t_IOContext$Context {
        public:
          PyObject_HEAD
          IOContext$Context object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_IOContext$Context *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const IOContext$Context&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const IOContext$Context&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
