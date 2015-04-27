#ifndef org_apache_lucene_util_fst_PairOutputs$Pair_H
#define org_apache_lucene_util_fst_PairOutputs$Pair_H

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

          class PairOutputs$Pair : public ::java::lang::Object {
          public:
            enum {
              mid_equals_290588e2,
              mid_hashCode_54c6a179,
              mid_toString_14c7b5c5,
              max_mid
            };

            enum {
              fid_output1,
              fid_output2,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PairOutputs$Pair(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PairOutputs$Pair(const PairOutputs$Pair& obj) : ::java::lang::Object(obj) {}

            ::java::lang::Object _get_output1() const;
            ::java::lang::Object _get_output2() const;

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
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
          extern PyTypeObject PY_TYPE(PairOutputs$Pair);

          class t_PairOutputs$Pair {
          public:
            PyObject_HEAD
            PairOutputs$Pair object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_PairOutputs$Pair *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PairOutputs$Pair&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PairOutputs$Pair&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
