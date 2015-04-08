#ifndef org_apache_lucene_util_fst_Builder$Arc_H
#define org_apache_lucene_util_fst_Builder$Arc_H

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

          class Builder$Arc : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              max_mid
            };

            enum {
              fid_isFinal,
              fid_label,
              fid_nextFinalOutput,
              fid_output,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Builder$Arc(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Builder$Arc(const Builder$Arc& obj) : ::java::lang::Object(obj) {}

            jboolean _get_isFinal() const;
            void _set_isFinal(jboolean) const;
            jint _get_label() const;
            void _set_label(jint) const;
            ::java::lang::Object _get_nextFinalOutput() const;
            void _set_nextFinalOutput(const ::java::lang::Object &) const;
            ::java::lang::Object _get_output() const;
            void _set_output(const ::java::lang::Object &) const;

            Builder$Arc();
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
          extern PyTypeObject PY_TYPE(Builder$Arc);

          class t_Builder$Arc {
          public:
            PyObject_HEAD
            Builder$Arc object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Builder$Arc *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Builder$Arc&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Builder$Arc&, PyTypeObject *);
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
