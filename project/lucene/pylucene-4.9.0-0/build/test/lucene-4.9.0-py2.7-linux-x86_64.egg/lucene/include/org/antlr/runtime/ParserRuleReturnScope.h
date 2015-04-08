#ifndef org_antlr_runtime_ParserRuleReturnScope_H
#define org_antlr_runtime_ParserRuleReturnScope_H

#include "org/antlr/runtime/RuleReturnScope.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace runtime {

      class ParserRuleReturnScope : public ::org::antlr::runtime::RuleReturnScope {
      public:
        enum {
          mid_init$_54c6a166,
          mid_getStart_846352c3,
          mid_getStop_846352c3,
          mid_getTree_846352c3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ParserRuleReturnScope(jobject obj) : ::org::antlr::runtime::RuleReturnScope(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        ParserRuleReturnScope(const ParserRuleReturnScope& obj) : ::org::antlr::runtime::RuleReturnScope(obj) {}

        ParserRuleReturnScope();

        ::java::lang::Object getStart() const;
        ::java::lang::Object getStop() const;
        ::java::lang::Object getTree() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace runtime {
      extern PyTypeObject PY_TYPE(ParserRuleReturnScope);

      class t_ParserRuleReturnScope {
      public:
        PyObject_HEAD
        ParserRuleReturnScope object;
        static PyObject *wrap_Object(const ParserRuleReturnScope&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
