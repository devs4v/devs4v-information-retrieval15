#ifndef org_apache_lucene_util_BroadWord_H
#define org_apache_lucene_util_BroadWord_H

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

        class BroadWord : public ::java::lang::Object {
        public:
          enum {
            mid_notEquals0_8_0ee6df33,
            mid_select_25d05c90,
            mid_selectNaive_25d05c90,
            mid_smallerUpTo7_8_a7e12cb8,
            mid_smallerUpto15_16_a7e12cb8,
            mid_smalleru_8_a7e12cb8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BroadWord(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BroadWord(const BroadWord& obj) : ::java::lang::Object(obj) {}

          static jlong H16_L;
          static jlong H8_L;
          static jlong L16_L;
          static jlong L8_L;
          static jlong L9_L;

          static jlong notEquals0_8(jlong);
          static jint select(jlong, jint);
          static jint selectNaive(jlong, jint);
          static jlong smallerUpTo7_8(jlong, jlong);
          static jlong smallerUpto15_16(jlong, jlong);
          static jlong smalleru_8(jlong, jlong);
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
        extern PyTypeObject PY_TYPE(BroadWord);

        class t_BroadWord {
        public:
          PyObject_HEAD
          BroadWord object;
          static PyObject *wrap_Object(const BroadWord&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
