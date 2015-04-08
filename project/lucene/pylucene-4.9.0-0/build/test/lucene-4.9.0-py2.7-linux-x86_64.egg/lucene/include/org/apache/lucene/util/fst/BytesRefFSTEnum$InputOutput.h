#ifndef org_apache_lucene_util_fst_BytesRefFSTEnum$InputOutput_H
#define org_apache_lucene_util_fst_BytesRefFSTEnum$InputOutput_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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

          class BytesRefFSTEnum$InputOutput : public ::java::lang::Object {
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

            explicit BytesRefFSTEnum$InputOutput(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BytesRefFSTEnum$InputOutput(const BytesRefFSTEnum$InputOutput& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::BytesRef _get_input() const;
            void _set_input(const ::org::apache::lucene::util::BytesRef &) const;
            ::java::lang::Object _get_output() const;
            void _set_output(const ::java::lang::Object &) const;

            BytesRefFSTEnum$InputOutput();
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
          extern PyTypeObject PY_TYPE(BytesRefFSTEnum$InputOutput);

          class t_BytesRefFSTEnum$InputOutput {
          public:
            PyObject_HEAD
            BytesRefFSTEnum$InputOutput object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_BytesRefFSTEnum$InputOutput *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const BytesRefFSTEnum$InputOutput&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const BytesRefFSTEnum$InputOutput&, PyTypeObject *);
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
