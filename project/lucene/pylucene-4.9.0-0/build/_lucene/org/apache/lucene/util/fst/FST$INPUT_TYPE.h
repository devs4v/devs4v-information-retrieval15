#ifndef org_apache_lucene_util_fst_FST$INPUT_TYPE_H
#define org_apache_lucene_util_fst_FST$INPUT_TYPE_H

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
      namespace util {
        namespace fst {

          class FST$INPUT_TYPE : public ::java::lang::Enum {
          public:
            enum {
              mid_valueOf_06b999b9,
              mid_values_da3dc83f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FST$INPUT_TYPE(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FST$INPUT_TYPE(const FST$INPUT_TYPE& obj) : ::java::lang::Enum(obj) {}

            static FST$INPUT_TYPE *BYTE1;
            static FST$INPUT_TYPE *BYTE2;
            static FST$INPUT_TYPE *BYTE4;

            static FST$INPUT_TYPE valueOf(const ::java::lang::String &);
            static JArray< FST$INPUT_TYPE > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          extern PyTypeObject PY_TYPE(FST$INPUT_TYPE);

          class t_FST$INPUT_TYPE {
          public:
            PyObject_HEAD
            FST$INPUT_TYPE object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FST$INPUT_TYPE *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FST$INPUT_TYPE&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FST$INPUT_TYPE&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
