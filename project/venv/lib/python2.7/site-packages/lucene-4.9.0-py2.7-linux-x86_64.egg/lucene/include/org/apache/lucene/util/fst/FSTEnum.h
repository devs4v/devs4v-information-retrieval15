#ifndef org_apache_lucene_util_fst_FSTEnum_H
#define org_apache_lucene_util_fst_FSTEnum_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class FSTEnum : public ::java::lang::Object {
          public:
            enum {
              mid_grow_54c6a166,
              mid_doNext_54c6a166,
              mid_getTargetLabel_54c6a179,
              mid_getCurrentLabel_54c6a179,
              mid_setCurrentLabel_39c7bd3c,
              mid_doSeekCeil_54c6a166,
              mid_doSeekFloor_54c6a166,
              mid_doSeekExact_54c6a16a,
              mid_rewindPrefix_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTEnum(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FSTEnum(const FSTEnum& obj) : ::java::lang::Object(obj) {}
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
          extern PyTypeObject PY_TYPE(FSTEnum);

          class t_FSTEnum {
          public:
            PyObject_HEAD
            FSTEnum object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FSTEnum *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FSTEnum&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FSTEnum&, PyTypeObject *);
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
