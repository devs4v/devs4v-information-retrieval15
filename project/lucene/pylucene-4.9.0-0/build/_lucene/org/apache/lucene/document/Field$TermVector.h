#ifndef org_apache_lucene_document_Field$TermVector_H
#define org_apache_lucene_document_Field$TermVector_H

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

        class Field$TermVector : public ::java::lang::Enum {
        public:
          enum {
            mid_isStored_54c6a16a,
            mid_toTermVector_e3e77410,
            mid_valueOf_dd40625d,
            mid_values_3d8f8203,
            mid_withOffsets_54c6a16a,
            mid_withPositions_54c6a16a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Field$TermVector(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Field$TermVector(const Field$TermVector& obj) : ::java::lang::Enum(obj) {}

          static Field$TermVector *NO;
          static Field$TermVector *WITH_OFFSETS;
          static Field$TermVector *WITH_POSITIONS;
          static Field$TermVector *WITH_POSITIONS_OFFSETS;
          static Field$TermVector *YES;

          jboolean isStored() const;
          static Field$TermVector toTermVector(jboolean, jboolean, jboolean);
          static Field$TermVector valueOf(const ::java::lang::String &);
          static JArray< Field$TermVector > values();
          jboolean withOffsets() const;
          jboolean withPositions() const;
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
        extern PyTypeObject PY_TYPE(Field$TermVector);

        class t_Field$TermVector {
        public:
          PyObject_HEAD
          Field$TermVector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Field$TermVector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Field$TermVector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Field$TermVector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
