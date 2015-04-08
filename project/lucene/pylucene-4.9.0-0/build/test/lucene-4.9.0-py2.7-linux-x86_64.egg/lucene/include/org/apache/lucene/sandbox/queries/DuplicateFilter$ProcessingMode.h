#ifndef org_apache_lucene_sandbox_queries_DuplicateFilter$ProcessingMode_H
#define org_apache_lucene_sandbox_queries_DuplicateFilter$ProcessingMode_H

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

          class DuplicateFilter$ProcessingMode : public ::java::lang::Enum {
          public:
            enum {
              mid_valueOf_5b1a28e1,
              mid_values_e8e814df,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DuplicateFilter$ProcessingMode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DuplicateFilter$ProcessingMode(const DuplicateFilter$ProcessingMode& obj) : ::java::lang::Enum(obj) {}

            static DuplicateFilter$ProcessingMode *PM_FAST_INVALIDATION;
            static DuplicateFilter$ProcessingMode *PM_FULL_VALIDATION;

            static DuplicateFilter$ProcessingMode valueOf(const ::java::lang::String &);
            static JArray< DuplicateFilter$ProcessingMode > values();
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
          extern PyTypeObject PY_TYPE(DuplicateFilter$ProcessingMode);

          class t_DuplicateFilter$ProcessingMode {
          public:
            PyObject_HEAD
            DuplicateFilter$ProcessingMode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DuplicateFilter$ProcessingMode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DuplicateFilter$ProcessingMode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DuplicateFilter$ProcessingMode&, PyTypeObject *);
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
