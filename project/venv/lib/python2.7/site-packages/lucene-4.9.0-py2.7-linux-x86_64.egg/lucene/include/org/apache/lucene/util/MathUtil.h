#ifndef org_apache_lucene_util_MathUtil_H
#define org_apache_lucene_util_MathUtil_H

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

        class MathUtil : public ::java::lang::Object {
        public:
          enum {
            mid_acosh_5d1c7657,
            mid_asinh_5d1c7657,
            mid_atanh_5d1c7657,
            mid_gcd_a7e12cb8,
            mid_log_b1e2866a,
            mid_log_25d05c90,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MathUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MathUtil(const MathUtil& obj) : ::java::lang::Object(obj) {}

          static jdouble acosh(jdouble);
          static jdouble asinh(jdouble);
          static jdouble atanh(jdouble);
          static jlong gcd(jlong, jlong);
          static jdouble log(jdouble, jdouble);
          static jint log(jlong, jint);
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
        extern PyTypeObject PY_TYPE(MathUtil);

        class t_MathUtil {
        public:
          PyObject_HEAD
          MathUtil object;
          static PyObject *wrap_Object(const MathUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
