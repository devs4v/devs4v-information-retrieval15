#ifndef org_egothor_stemmer_Compile_H
#define org_egothor_stemmer_Compile_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Exception;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Compile : public ::java::lang::Object {
      public:
        enum {
          mid_main_4dd4540c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Compile(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        Compile(const Compile& obj) : ::java::lang::Object(obj) {}

        static void main(const JArray< ::java::lang::String > &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyTypeObject PY_TYPE(Compile);

      class t_Compile {
      public:
        PyObject_HEAD
        Compile object;
        static PyObject *wrap_Object(const Compile&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
