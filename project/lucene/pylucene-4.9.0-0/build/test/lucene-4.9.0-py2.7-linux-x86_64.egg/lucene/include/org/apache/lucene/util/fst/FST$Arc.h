#ifndef org_apache_lucene_util_fst_FST$Arc_H
#define org_apache_lucene_util_fst_FST$Arc_H

#include "java/lang/Object.h"

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

          class FST$Arc : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_copyFrom_8c07e6cb,
              mid_isFinal_54c6a16a,
              mid_isLast_54c6a16a,
              mid_toString_14c7b5c5,
              max_mid
            };

            enum {
              fid_label,
              fid_nextFinalOutput,
              fid_output,
              fid_target,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FST$Arc(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FST$Arc(const FST$Arc& obj) : ::java::lang::Object(obj) {}

            jint _get_label() const;
            void _set_label(jint) const;
            ::java::lang::Object _get_nextFinalOutput() const;
            void _set_nextFinalOutput(const ::java::lang::Object &) const;
            ::java::lang::Object _get_output() const;
            void _set_output(const ::java::lang::Object &) const;
            jlong _get_target() const;
            void _set_target(jlong) const;

            FST$Arc();

            FST$Arc copyFrom(const FST$Arc &) const;
            jboolean isFinal() const;
            jboolean isLast() const;
            ::java::lang::String toString() const;
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
          extern PyTypeObject PY_TYPE(FST$Arc);

          class t_FST$Arc {
          public:
            PyObject_HEAD
            FST$Arc object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FST$Arc *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FST$Arc&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FST$Arc&, PyTypeObject *);
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
