#ifndef org_apache_lucene_queryparser_flexible_core_nodes_RangeQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_RangeQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldableNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class FieldValuePairQueryNode;
            }
          }
        }
      }
    }
  }
}
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

              class RangeQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::FieldableNode {
              public:
                enum {
                  mid_getLowerBound_2906e52b,
                  mid_getUpperBound_2906e52b,
                  mid_isLowerInclusive_54c6a16a,
                  mid_isUpperInclusive_54c6a16a,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RangeQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldableNode(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                RangeQueryNode(const RangeQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldableNode(obj) {}

                ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode getLowerBound() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode getUpperBound() const;
                jboolean isLowerInclusive() const;
                jboolean isUpperInclusive() const;
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
              extern PyTypeObject PY_TYPE(RangeQueryNode);

              class t_RangeQueryNode {
              public:
                PyObject_HEAD
                RangeQueryNode object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_RangeQueryNode *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const RangeQueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const RangeQueryNode&, PyTypeObject *);
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
