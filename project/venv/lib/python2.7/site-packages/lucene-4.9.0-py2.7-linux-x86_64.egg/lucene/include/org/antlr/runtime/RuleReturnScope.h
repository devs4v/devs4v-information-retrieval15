#ifndef org_antlr_runtime_RuleReturnScope_H
#define org_antlr_runtime_RuleReturnScope_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace runtime {

      class RuleReturnScope : public ::java::lang::Object {
      public:
        enum {
          mid_init$_54c6a166,
          mid_getStart_846352c3,
          mid_getStop_846352c3,
          mid_getTemplate_846352c3,
          mid_getTree_846352c3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RuleReturnScope(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        RuleReturnScope(const RuleReturnScope& obj) : ::java::lang::Object(obj) {}

        RuleReturnScope();

        ::java::lang::Object getStart() const;
        ::java::lang::Object getStop() const;
        ::java::lang::Object getTemplate() const;
        ::java::lang::Object getTree() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace runtime {
      extern PyTypeObject PY_TYPE(RuleReturnScope);

      class t_RuleReturnScope {
      public:
        PyObject_HEAD
        RuleReturnScope object;
        static PyObject *wrap_Object(const RuleReturnScope&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
