#ifndef org_apache_lucene_queryparser_flexible_core_nodes_AnyQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_AnyQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/AndQueryNode.h"

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
  namespace util {
    class List;
  }
  namespace lang {
    class CloneNotSupportedException;
    class CharSequence;
    class String;
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

              class AnyQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::AndQueryNode {
              public:
                enum {
                  mid_init$_0236cab3,
                  mid_cloneTree_b387c5e6,
                  mid_getField_e0adba2f,
                  mid_getFieldAsString_14c7b5c5,
                  mid_getMinimumMatchingElements_54c6a179,
                  mid_setField_a8afc64a,
                  mid_toQueryString_99b8dfe1,
                  mid_toString_14c7b5c5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AnyQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::AndQueryNode(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                AnyQueryNode(const AnyQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::AndQueryNode(obj) {}

                AnyQueryNode(const ::java::util::List &, const ::java::lang::CharSequence &, jint);

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                jint getMinimumMatchingElements() const;
                void setField(const ::java::lang::CharSequence &) const;
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
              extern PyTypeObject PY_TYPE(AnyQueryNode);

              class t_AnyQueryNode {
              public:
                PyObject_HEAD
                AnyQueryNode object;
                static PyObject *wrap_Object(const AnyQueryNode&);
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
