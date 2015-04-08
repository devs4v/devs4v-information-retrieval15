#ifndef org_apache_lucene_util_ToStringUtils_H
#define org_apache_lucene_util_ToStringUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuilder;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ToStringUtils : public ::java::lang::Object {
        public:
          enum {
            mid_boost_5ded254a,
            mid_byteArray_982a0ced,
            mid_longHex_3e02f30e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ToStringUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ToStringUtils(const ToStringUtils& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String boost(jfloat);
          static void byteArray(const ::java::lang::StringBuilder &, const JArray< jbyte > &);
          static ::java::lang::String longHex(jlong);
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
        extern PyTypeObject PY_TYPE(ToStringUtils);

        class t_ToStringUtils {
        public:
          PyObject_HEAD
          ToStringUtils object;
          static PyObject *wrap_Object(const ToStringUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
