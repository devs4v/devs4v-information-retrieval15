#ifndef org_apache_lucene_queryparser_flexible_core_nodes_FieldableNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_FieldableNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNode.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
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

              class FieldableNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode {
              public:
                enum {
                  mid_getField_e0adba2f,
                  mid_setField_a8afc64a,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FieldableNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                FieldableNode(const FieldableNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode(obj) {}

                ::java::lang::CharSequence getField() const;
                void setField(const ::java::lang::CharSequence &) const;
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
              extern PyTypeObject PY_TYPE(FieldableNode);

              class t_FieldableNode {
              public:
                PyObject_HEAD
                FieldableNode object;
                static PyObject *wrap_Object(const FieldableNode&);
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
