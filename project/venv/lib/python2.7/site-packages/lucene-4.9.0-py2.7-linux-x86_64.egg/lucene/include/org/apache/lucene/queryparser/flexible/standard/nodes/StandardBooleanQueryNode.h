#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_StandardBooleanQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_StandardBooleanQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/BooleanQueryNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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

              class StandardBooleanQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode {
              public:
                enum {
                  mid_init$_7eb182ec,
                  mid_isDisableCoord_54c6a16a,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardBooleanQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                StandardBooleanQueryNode(const StandardBooleanQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode(obj) {}

                StandardBooleanQueryNode(const ::java::util::List &, jboolean);

                jboolean isDisableCoord() const;
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
              extern PyTypeObject PY_TYPE(StandardBooleanQueryNode);

              class t_StandardBooleanQueryNode {
              public:
                PyObject_HEAD
                StandardBooleanQueryNode object;
                static PyObject *wrap_Object(const StandardBooleanQueryNode&);
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
