#ifndef org_apache_lucene_facet_TopOrdAndIntQueue$OrdAndValue_H
#define org_apache_lucene_facet_TopOrdAndIntQueue$OrdAndValue_H

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
      namespace facet {

        class TopOrdAndIntQueue$OrdAndValue : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            max_mid
          };

          enum {
            fid_ord,
            fid_value,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopOrdAndIntQueue$OrdAndValue(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TopOrdAndIntQueue$OrdAndValue(const TopOrdAndIntQueue$OrdAndValue& obj) : ::java::lang::Object(obj) {}

          jint _get_ord() const;
          void _set_ord(jint) const;
          jint _get_value() const;
          void _set_value(jint) const;

          TopOrdAndIntQueue$OrdAndValue();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyTypeObject PY_TYPE(TopOrdAndIntQueue$OrdAndValue);

        class t_TopOrdAndIntQueue$OrdAndValue {
        public:
          PyObject_HEAD
          TopOrdAndIntQueue$OrdAndValue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopOrdAndIntQueue$OrdAndValue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopOrdAndIntQueue$OrdAndValue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopOrdAndIntQueue$OrdAndValue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
