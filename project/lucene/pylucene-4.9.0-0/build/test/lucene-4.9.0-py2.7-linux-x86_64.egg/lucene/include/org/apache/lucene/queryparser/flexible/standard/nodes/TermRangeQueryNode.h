#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_TermRangeQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_TermRangeQueryNode_H

#include "org/apache/lucene/queryparser/flexible/standard/nodes/AbstractRangeQueryNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class FieldQueryNode;
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

              class TermRangeQueryNode : public ::org::apache::lucene::queryparser::flexible::standard::nodes::AbstractRangeQueryNode {
              public:
                enum {
                  mid_init$_b4afba80,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit TermRangeQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::AbstractRangeQueryNode(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                TermRangeQueryNode(const TermRangeQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::AbstractRangeQueryNode(obj) {}

                TermRangeQueryNode(const ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode &, const ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode &, jboolean, jboolean);
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
              extern PyTypeObject PY_TYPE(TermRangeQueryNode);

              class t_TermRangeQueryNode {
              public:
                PyObject_HEAD
                TermRangeQueryNode object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_TermRangeQueryNode *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const TermRangeQueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const TermRangeQueryNode&, PyTypeObject *);
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
