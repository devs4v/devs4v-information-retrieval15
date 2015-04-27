#ifndef org_apache_lucene_util_Bits_H
#define org_apache_lucene_util_Bits_H

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

        class Bits : public ::java::lang::Object {
        public:
          enum {
            mid_get_39c7bd30,
            mid_length_54c6a179,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Bits(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Bits(const Bits& obj) : ::java::lang::Object(obj) {}

          static JArray< Bits > *EMPTY_ARRAY;

          jboolean get(jint) const;
          jint length() const;
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
        extern PyTypeObject PY_TYPE(Bits);

        class t_Bits {
        public:
          PyObject_HEAD
          Bits object;
          static PyObject *wrap_Object(const Bits&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
