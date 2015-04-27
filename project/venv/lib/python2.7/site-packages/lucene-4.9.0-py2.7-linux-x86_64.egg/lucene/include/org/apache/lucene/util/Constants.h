#ifndef org_apache_lucene_util_Constants_H
#define org_apache_lucene_util_Constants_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class Constants : public ::java::lang::Object {
        public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Constants(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Constants(const Constants& obj) : ::java::lang::Object(obj) {}

          static jboolean FREE_BSD;
          static ::java::lang::String *JAVA_VENDOR;
          static ::java::lang::String *JAVA_VERSION;
          static jboolean JRE_IS_64BIT;
          static jboolean JRE_IS_MINIMUM_JAVA6;
          static jboolean JRE_IS_MINIMUM_JAVA7;
          static jboolean JRE_IS_MINIMUM_JAVA8;
          static ::java::lang::String *JVM_NAME;
          static ::java::lang::String *JVM_VENDOR;
          static ::java::lang::String *JVM_VERSION;
          static jboolean LINUX;
          static ::java::lang::String *LUCENE_MAIN_VERSION;
          static ::java::lang::String *LUCENE_VERSION;
          static jboolean MAC_OS_X;
          static ::java::lang::String *OS_ARCH;
          static ::java::lang::String *OS_NAME;
          static ::java::lang::String *OS_VERSION;
          static jboolean SUN_OS;
          static jboolean WINDOWS;
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
        extern PyTypeObject PY_TYPE(Constants);

        class t_Constants {
        public:
          PyObject_HEAD
          Constants object;
          static PyObject *wrap_Object(const Constants&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
