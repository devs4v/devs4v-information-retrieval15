#ifndef org_apache_lucene_index_FieldInfo$DocValuesType_H
#define org_apache_lucene_index_FieldInfo$DocValuesType_H

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

        class FieldInfo$DocValuesType : public ::java::lang::Enum {
        public:
          enum {
            mid_valueOf_df70c72d,
            mid_values_3d388c3f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInfo$DocValuesType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldInfo$DocValuesType(const FieldInfo$DocValuesType& obj) : ::java::lang::Enum(obj) {}

          static FieldInfo$DocValuesType *BINARY;
          static FieldInfo$DocValuesType *NUMERIC;
          static FieldInfo$DocValuesType *SORTED;
          static FieldInfo$DocValuesType *SORTED_NUMERIC;
          static FieldInfo$DocValuesType *SORTED_SET;

          static FieldInfo$DocValuesType valueOf(const ::java::lang::String &);
          static JArray< FieldInfo$DocValuesType > values();
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
        extern PyTypeObject PY_TYPE(FieldInfo$DocValuesType);

        class t_FieldInfo$DocValuesType {
        public:
          PyObject_HEAD
          FieldInfo$DocValuesType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldInfo$DocValuesType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldInfo$DocValuesType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldInfo$DocValuesType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
