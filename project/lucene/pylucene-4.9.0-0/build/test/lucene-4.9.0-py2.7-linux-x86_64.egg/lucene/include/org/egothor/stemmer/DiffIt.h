#ifndef org_egothor_stemmer_DiffIt_H
#define org_egothor_stemmer_DiffIt_H

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

      class DiffIt : public ::java::lang::Object {
      public:
        enum {
          mid_main_4dd4540c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DiffIt(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        DiffIt(const DiffIt& obj) : ::java::lang::Object(obj) {}

        static void main(const JArray< ::java::lang::String > &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyTypeObject PY_TYPE(DiffIt);

      class t_DiffIt {
      public:
        PyObject_HEAD
        DiffIt object;
        static PyObject *wrap_Object(const DiffIt&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
