#ifndef org_apache_lucene_search_suggest_tst_TernaryTreeNode_H
#define org_apache_lucene_search_suggest_tst_TernaryTreeNode_H

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
      namespace search {
        namespace suggest {
          namespace tst {

            class TernaryTreeNode : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TernaryTreeNode(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              TernaryTreeNode(const TernaryTreeNode& obj) : ::java::lang::Object(obj) {}

              TernaryTreeNode();
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace tst {
            extern PyTypeObject PY_TYPE(TernaryTreeNode);

            class t_TernaryTreeNode {
            public:
              PyObject_HEAD
              TernaryTreeNode object;
              static PyObject *wrap_Object(const TernaryTreeNode&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
