#ifndef org_apache_lucene_queryparser_ext_Extensions$Pair_H
#define org_apache_lucene_queryparser_ext_Extensions$Pair_H

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
      namespace queryparser {
        namespace ext {

          class Extensions$Pair : public ::java::lang::Object {
          public:
            enum {
              mid_init$_466982f2,
              max_mid
            };

            enum {
              fid_cud,
              fid_cur,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Extensions$Pair(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Extensions$Pair(const Extensions$Pair& obj) : ::java::lang::Object(obj) {}

            ::java::lang::Object _get_cud() const;
            ::java::lang::Object _get_cur() const;

            Extensions$Pair(const ::java::lang::Object &, const ::java::lang::Object &);
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
      namespace queryparser {
        namespace ext {
          extern PyTypeObject PY_TYPE(Extensions$Pair);

          class t_Extensions$Pair {
          public:
            PyObject_HEAD
            Extensions$Pair object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_Extensions$Pair *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Extensions$Pair&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Extensions$Pair&, PyTypeObject *, PyTypeObject *);
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
