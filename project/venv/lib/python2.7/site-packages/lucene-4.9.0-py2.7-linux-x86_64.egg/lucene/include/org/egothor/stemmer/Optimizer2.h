#ifndef org_egothor_stemmer_Optimizer2_H
#define org_egothor_stemmer_Optimizer2_H

#include "org/egothor/stemmer/Optimizer.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Optimizer2 : public ::org::egothor::stemmer::Optimizer {
      public:
        enum {
          mid_init$_54c6a166,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Optimizer2(jobject obj) : ::org::egothor::stemmer::Optimizer(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        Optimizer2(const Optimizer2& obj) : ::org::egothor::stemmer::Optimizer(obj) {}

        Optimizer2();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyTypeObject PY_TYPE(Optimizer2);

      class t_Optimizer2 {
      public:
        PyObject_HEAD
        Optimizer2 object;
        static PyObject *wrap_Object(const Optimizer2&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
