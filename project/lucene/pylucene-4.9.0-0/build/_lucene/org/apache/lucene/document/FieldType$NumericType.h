#ifndef org_apache_lucene_document_FieldType$NumericType_H
#define org_apache_lucene_document_FieldType$NumericType_H

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

        class FieldType$NumericType : public ::java::lang::Enum {
        public:
          enum {
            mid_valueOf_197ea958,
            mid_values_68701482,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldType$NumericType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldType$NumericType(const FieldType$NumericType& obj) : ::java::lang::Enum(obj) {}

          static FieldType$NumericType *DOUBLE;
          static FieldType$NumericType *FLOAT;
          static FieldType$NumericType *INT;
          static FieldType$NumericType *LONG;

          static FieldType$NumericType valueOf(const ::java::lang::String &);
          static JArray< FieldType$NumericType > values();
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
        extern PyTypeObject PY_TYPE(FieldType$NumericType);

        class t_FieldType$NumericType {
        public:
          PyObject_HEAD
          FieldType$NumericType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldType$NumericType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldType$NumericType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldType$NumericType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
