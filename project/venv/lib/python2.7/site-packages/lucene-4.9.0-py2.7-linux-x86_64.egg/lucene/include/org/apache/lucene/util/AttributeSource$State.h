#ifndef org_apache_lucene_util_AttributeSource$State_H
#define org_apache_lucene_util_AttributeSource$State_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Cloneable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class AttributeSource$State : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_clone_0f9ed4d4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttributeSource$State(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          AttributeSource$State(const AttributeSource$State& obj) : ::java::lang::Object(obj) {}

          AttributeSource$State();

          AttributeSource$State clone() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(AttributeSource$State);

        class t_AttributeSource$State {
        public:
          PyObject_HEAD
          AttributeSource$State object;
          static PyObject *wrap_Object(const AttributeSource$State&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
