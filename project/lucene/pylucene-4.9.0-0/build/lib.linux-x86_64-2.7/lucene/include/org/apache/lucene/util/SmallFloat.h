#ifndef org_apache_lucene_util_SmallFloat_H
#define org_apache_lucene_util_SmallFloat_H

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

        class SmallFloat : public ::java::lang::Object {
        public:
          enum {
            mid_byte315ToFloat_b2271697,
            mid_byte52ToFloat_b2271697,
            mid_byteToFloat_277ea3d7,
            mid_floatToByte_c388dc8f,
            mid_floatToByte315_06298cbf,
            mid_floatToByte52_06298cbf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SmallFloat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SmallFloat(const SmallFloat& obj) : ::java::lang::Object(obj) {}

          static jfloat byte315ToFloat(jbyte);
          static jfloat byte52ToFloat(jbyte);
          static jfloat byteToFloat(jbyte, jint, jint);
          static jbyte floatToByte(jfloat, jint, jint);
          static jbyte floatToByte315(jfloat);
          static jbyte floatToByte52(jfloat);
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
        extern PyTypeObject PY_TYPE(SmallFloat);

        class t_SmallFloat {
        public:
          PyObject_HEAD
          SmallFloat object;
          static PyObject *wrap_Object(const SmallFloat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
