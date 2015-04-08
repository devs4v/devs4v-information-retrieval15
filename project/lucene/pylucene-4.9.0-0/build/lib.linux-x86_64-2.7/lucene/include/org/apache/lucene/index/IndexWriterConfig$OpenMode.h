#ifndef org_apache_lucene_index_IndexWriterConfig$OpenMode_H
#define org_apache_lucene_index_IndexWriterConfig$OpenMode_H

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

        class IndexWriterConfig$OpenMode : public ::java::lang::Enum {
        public:
          enum {
            mid_valueOf_0b044982,
            mid_values_923174e8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexWriterConfig$OpenMode(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexWriterConfig$OpenMode(const IndexWriterConfig$OpenMode& obj) : ::java::lang::Enum(obj) {}

          static IndexWriterConfig$OpenMode *APPEND;
          static IndexWriterConfig$OpenMode *CREATE;
          static IndexWriterConfig$OpenMode *CREATE_OR_APPEND;

          static IndexWriterConfig$OpenMode valueOf(const ::java::lang::String &);
          static JArray< IndexWriterConfig$OpenMode > values();
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
        extern PyTypeObject PY_TYPE(IndexWriterConfig$OpenMode);

        class t_IndexWriterConfig$OpenMode {
        public:
          PyObject_HEAD
          IndexWriterConfig$OpenMode object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_IndexWriterConfig$OpenMode *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const IndexWriterConfig$OpenMode&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const IndexWriterConfig$OpenMode&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
