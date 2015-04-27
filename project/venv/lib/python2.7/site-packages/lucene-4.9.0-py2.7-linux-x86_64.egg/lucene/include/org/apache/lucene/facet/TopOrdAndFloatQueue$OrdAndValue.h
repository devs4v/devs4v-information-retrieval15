#ifndef org_apache_lucene_facet_TopOrdAndFloatQueue$OrdAndValue_H
#define org_apache_lucene_facet_TopOrdAndFloatQueue$OrdAndValue_H

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

        class TopOrdAndFloatQueue$OrdAndValue : public ::java::lang::Object {
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

          explicit TopOrdAndFloatQueue$OrdAndValue(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TopOrdAndFloatQueue$OrdAndValue(const TopOrdAndFloatQueue$OrdAndValue& obj) : ::java::lang::Object(obj) {}

          jint _get_ord() const;
          void _set_ord(jint) const;
          jfloat _get_value() const;
          void _set_value(jfloat) const;

          TopOrdAndFloatQueue$OrdAndValue();
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
        extern PyTypeObject PY_TYPE(TopOrdAndFloatQueue$OrdAndValue);

        class t_TopOrdAndFloatQueue$OrdAndValue {
        public:
          PyObject_HEAD
          TopOrdAndFloatQueue$OrdAndValue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopOrdAndFloatQueue$OrdAndValue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopOrdAndFloatQueue$OrdAndValue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopOrdAndFloatQueue$OrdAndValue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
