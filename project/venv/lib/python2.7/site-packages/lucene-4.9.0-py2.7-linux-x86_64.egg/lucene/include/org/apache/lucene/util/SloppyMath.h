#ifndef org_apache_lucene_util_SloppyMath_H
#define org_apache_lucene_util_SloppyMath_H

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

        class SloppyMath : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_asin_5d1c7657,
            mid_cos_5d1c7657,
            mid_earthDiameter_5d1c7657,
            mid_haversin_143b6dc0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SloppyMath(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SloppyMath(const SloppyMath& obj) : ::java::lang::Object(obj) {}

          SloppyMath();

          static jdouble asin(jdouble);
          static jdouble cos(jdouble);
          static jdouble earthDiameter(jdouble);
          static jdouble haversin(jdouble, jdouble, jdouble, jdouble);
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
        extern PyTypeObject PY_TYPE(SloppyMath);

        class t_SloppyMath {
        public:
          PyObject_HEAD
          SloppyMath object;
          static PyObject *wrap_Object(const SloppyMath&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
