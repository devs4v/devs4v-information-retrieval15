#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_BooleanModifierNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_BooleanModifierNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/ModifierQueryNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
              class ModifierQueryNode$Modifier;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace nodes {

              class BooleanModifierNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::ModifierQueryNode {
              public:
                enum {
                  mid_init$_6bd34b3d,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit BooleanModifierNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::ModifierQueryNode(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                BooleanModifierNode(const BooleanModifierNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::ModifierQueryNode(obj) {}

                BooleanModifierNode(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &, const ::org::apache::lucene::queryparser::flexible::core::nodes::ModifierQueryNode$Modifier &);
              };
            }
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
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace nodes {
              extern PyTypeObject PY_TYPE(BooleanModifierNode);

              class t_BooleanModifierNode {
              public:
                PyObject_HEAD
                BooleanModifierNode object;
                static PyObject *wrap_Object(const BooleanModifierNode&);
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
}

#endif
