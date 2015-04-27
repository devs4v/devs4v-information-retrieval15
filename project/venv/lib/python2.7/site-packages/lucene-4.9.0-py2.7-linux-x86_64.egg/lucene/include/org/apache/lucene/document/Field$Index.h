#ifndef org_apache_lucene_document_Field$Index_H
#define org_apache_lucene_document_Field$Index_H

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

        class Field$Index : public ::java::lang::Enum {
        public:
          enum {
            mid_isAnalyzed_54c6a16a,
            mid_isIndexed_54c6a16a,
            mid_omitNorms_54c6a16a,
            mid_toIndex_0139857d,
            mid_toIndex_fddaa68a,
            mid_valueOf_6b6ff451,
            mid_values_d9660127,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Field$Index(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Field$Index(const Field$Index& obj) : ::java::lang::Enum(obj) {}

          static Field$Index *ANALYZED;
          static Field$Index *ANALYZED_NO_NORMS;
          static Field$Index *NO;
          static Field$Index *NOT_ANALYZED;
          static Field$Index *NOT_ANALYZED_NO_NORMS;

          jboolean isAnalyzed() const;
          jboolean isIndexed() const;
          jboolean omitNorms() const;
          static Field$Index toIndex(jboolean, jboolean);
          static Field$Index toIndex(jboolean, jboolean, jboolean);
          static Field$Index valueOf(const ::java::lang::String &);
          static JArray< Field$Index > values();
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
        extern PyTypeObject PY_TYPE(Field$Index);

        class t_Field$Index {
        public:
          PyObject_HEAD
          Field$Index object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Field$Index *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Field$Index&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Field$Index&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
