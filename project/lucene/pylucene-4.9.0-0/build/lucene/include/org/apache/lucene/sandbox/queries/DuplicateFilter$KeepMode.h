#ifndef org_apache_lucene_sandbox_queries_DuplicateFilter$KeepMode_H
#define org_apache_lucene_sandbox_queries_DuplicateFilter$KeepMode_H

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
      namespace sandbox {
        namespace queries {

          class DuplicateFilter$KeepMode : public ::java::lang::Enum {
          public:
            enum {
              mid_valueOf_06462cf5,
              mid_values_3fb3ce7b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DuplicateFilter$KeepMode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DuplicateFilter$KeepMode(const DuplicateFilter$KeepMode& obj) : ::java::lang::Enum(obj) {}

            static DuplicateFilter$KeepMode *KM_USE_FIRST_OCCURRENCE;
            static DuplicateFilter$KeepMode *KM_USE_LAST_OCCURRENCE;

            static DuplicateFilter$KeepMode valueOf(const ::java::lang::String &);
            static JArray< DuplicateFilter$KeepMode > values();
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
      namespace sandbox {
        namespace queries {
          extern PyTypeObject PY_TYPE(DuplicateFilter$KeepMode);

          class t_DuplicateFilter$KeepMode {
          public:
            PyObject_HEAD
            DuplicateFilter$KeepMode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DuplicateFilter$KeepMode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DuplicateFilter$KeepMode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DuplicateFilter$KeepMode&, PyTypeObject *);
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
