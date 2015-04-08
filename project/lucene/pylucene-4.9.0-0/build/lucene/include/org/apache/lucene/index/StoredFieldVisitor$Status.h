#ifndef org_apache_lucene_index_StoredFieldVisitor$Status_H
#define org_apache_lucene_index_StoredFieldVisitor$Status_H

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
      namespace index {

        class StoredFieldVisitor$Status : public ::java::lang::Enum {
        public:
          enum {
            mid_valueOf_92de5032,
            mid_values_fd94bdd0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredFieldVisitor$Status(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          StoredFieldVisitor$Status(const StoredFieldVisitor$Status& obj) : ::java::lang::Enum(obj) {}

          static StoredFieldVisitor$Status *NO;
          static StoredFieldVisitor$Status *STOP;
          static StoredFieldVisitor$Status *YES;

          static StoredFieldVisitor$Status valueOf(const ::java::lang::String &);
          static JArray< StoredFieldVisitor$Status > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(StoredFieldVisitor$Status);

        class t_StoredFieldVisitor$Status {
        public:
          PyObject_HEAD
          StoredFieldVisitor$Status object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_StoredFieldVisitor$Status *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const StoredFieldVisitor$Status&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const StoredFieldVisitor$Status&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
