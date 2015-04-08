#ifndef org_apache_lucene_queryparser_flexible_core_nodes_ValueQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_ValueQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNode.h"

namespace java {
  namespace lang {
    class Object;
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

              class ValueQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode {
              public:
                enum {
                  mid_getValue_846352c3,
                  mid_setValue_290588ee,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ValueQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                ValueQueryNode(const ValueQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode(obj) {}

                ::java::lang::Object getValue() const;
                void setValue(const ::java::lang::Object &) const;
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
              extern PyTypeObject PY_TYPE(ValueQueryNode);

              class t_ValueQueryNode {
              public:
                PyObject_HEAD
                ValueQueryNode object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_ValueQueryNode *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const ValueQueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const ValueQueryNode&, PyTypeObject *);
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
