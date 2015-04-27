#ifndef org_apache_lucene_expressions_js_JavascriptParser$logical_and_return_H
#define org_apache_lucene_expressions_js_JavascriptParser$logical_and_return_H

#include "org/antlr/runtime/ParserRuleReturnScope.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        namespace js {

          class JavascriptParser$logical_and_return : public ::org::antlr::runtime::ParserRuleReturnScope {
          public:
            enum {
              mid_init$_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JavascriptParser$logical_and_return(jobject obj) : ::org::antlr::runtime::ParserRuleReturnScope(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            JavascriptParser$logical_and_return(const JavascriptParser$logical_and_return& obj) : ::org::antlr::runtime::ParserRuleReturnScope(obj) {}

            JavascriptParser$logical_and_return();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        namespace js {
          extern PyTypeObject PY_TYPE(JavascriptParser$logical_and_return);

          class t_JavascriptParser$logical_and_return {
          public:
            PyObject_HEAD
            JavascriptParser$logical_and_return object;
            static PyObject *wrap_Object(const JavascriptParser$logical_and_return&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
