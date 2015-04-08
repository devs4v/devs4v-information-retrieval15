#ifndef org_apache_lucene_queryparser_flexible_core_nodes_FieldValuePairQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_FieldValuePairQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldableNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class ValueQueryNode;
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
          namespace core {
            namespace nodes {

              class FieldValuePairQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::FieldableNode {
              public:

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FieldValuePairQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldableNode(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                FieldValuePairQueryNode(const FieldValuePairQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldableNode(obj) {}
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
          namespace core {
            namespace nodes {
              extern PyTypeObject PY_TYPE(FieldValuePairQueryNode);

              class t_FieldValuePairQueryNode {
              public:
                PyObject_HEAD
                FieldValuePairQueryNode object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_FieldValuePairQueryNode *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const FieldValuePairQueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const FieldValuePairQueryNode&, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
