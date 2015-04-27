#ifndef org_apache_lucene_queryparser_flexible_core_nodes_GroupQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_GroupQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
            }
            namespace parser {
              class EscapeQuerySyntax;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class CloneNotSupportedException;
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

              class GroupQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
              public:
                enum {
                  mid_init$_cc04aeef,
                  mid_cloneTree_b387c5e6,
                  mid_getChild_b387c5e6,
                  mid_setChild_cc04aeef,
                  mid_toQueryString_99b8dfe1,
                  mid_toString_14c7b5c5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit GroupQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                GroupQueryNode(const GroupQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                GroupQueryNode(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &);

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode getChild() const;
                void setChild(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                ::java::lang::CharSequence toQueryString(const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax &) const;
                ::java::lang::String toString() const;
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
              extern PyTypeObject PY_TYPE(GroupQueryNode);

              class t_GroupQueryNode {
              public:
                PyObject_HEAD
                GroupQueryNode object;
                static PyObject *wrap_Object(const GroupQueryNode&);
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
