#ifndef org_apache_lucene_index_FieldInfo$IndexOptions_H
#define org_apache_lucene_index_FieldInfo$IndexOptions_H

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

        class FieldInfo$IndexOptions : public ::java::lang::Enum {
        public:
          enum {
            mid_valueOf_20bf9e20,
            mid_values_84108cce,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInfo$IndexOptions(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldInfo$IndexOptions(const FieldInfo$IndexOptions& obj) : ::java::lang::Enum(obj) {}

          static FieldInfo$IndexOptions *DOCS_AND_FREQS;
          static FieldInfo$IndexOptions *DOCS_AND_FREQS_AND_POSITIONS;
          static FieldInfo$IndexOptions *DOCS_AND_FREQS_AND_POSITIONS_AND_OFFSETS;
          static FieldInfo$IndexOptions *DOCS_ONLY;

          static FieldInfo$IndexOptions valueOf(const ::java::lang::String &);
          static JArray< FieldInfo$IndexOptions > values();
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
        extern PyTypeObject PY_TYPE(FieldInfo$IndexOptions);

        class t_FieldInfo$IndexOptions {
        public:
          PyObject_HEAD
          FieldInfo$IndexOptions object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldInfo$IndexOptions *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldInfo$IndexOptions&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldInfo$IndexOptions&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
