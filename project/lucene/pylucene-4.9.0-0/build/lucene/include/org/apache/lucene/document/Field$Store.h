#ifndef org_apache_lucene_document_Field$Store_H
#define org_apache_lucene_document_Field$Store_H

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
      namespace document {

        class Field$Store : public ::java::lang::Enum {
        public:
          enum {
            mid_valueOf_7fd4bea4,
            mid_values_ca930bca,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Field$Store(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Field$Store(const Field$Store& obj) : ::java::lang::Enum(obj) {}

          static Field$Store *NO;
          static Field$Store *YES;

          static Field$Store valueOf(const ::java::lang::String &);
          static JArray< Field$Store > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyTypeObject PY_TYPE(Field$Store);

        class t_Field$Store {
        public:
          PyObject_HEAD
          Field$Store object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Field$Store *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Field$Store&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Field$Store&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
