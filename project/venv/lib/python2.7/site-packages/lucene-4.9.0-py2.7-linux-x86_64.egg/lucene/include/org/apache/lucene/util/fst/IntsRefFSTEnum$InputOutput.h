#ifndef org_apache_lucene_util_fst_IntsRefFSTEnum$InputOutput_H
#define org_apache_lucene_util_fst_IntsRefFSTEnum$InputOutput_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
      }
    }
  }
}
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

          class IntsRefFSTEnum$InputOutput : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              max_mid
            };

            enum {
              fid_input,
              fid_output,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntsRefFSTEnum$InputOutput(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            IntsRefFSTEnum$InputOutput(const IntsRefFSTEnum$InputOutput& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::IntsRef _get_input() const;
            void _set_input(const ::org::apache::lucene::util::IntsRef &) const;
            ::java::lang::Object _get_output() const;
            void _set_output(const ::java::lang::Object &) const;

            IntsRefFSTEnum$InputOutput();
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
          extern PyTypeObject PY_TYPE(IntsRefFSTEnum$InputOutput);

          class t_IntsRefFSTEnum$InputOutput {
          public:
            PyObject_HEAD
            IntsRefFSTEnum$InputOutput object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntsRefFSTEnum$InputOutput *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntsRefFSTEnum$InputOutput&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntsRefFSTEnum$InputOutput&, PyTypeObject *);
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
