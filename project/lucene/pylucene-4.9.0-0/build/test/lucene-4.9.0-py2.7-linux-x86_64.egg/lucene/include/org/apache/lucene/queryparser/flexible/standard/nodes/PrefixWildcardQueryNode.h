#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_PrefixWildcardQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_PrefixWildcardQueryNode_H

#include "org/apache/lucene/queryparser/flexible/standard/nodes/WildcardQueryNode.h"

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
          namespace standard {
            namespace nodes {

              class PrefixWildcardQueryNode : public ::org::apache::lucene::queryparser::flexible::standard::nodes::WildcardQueryNode {
              public:
                enum {
                  mid_init$_ddeda85c,
                  mid_init$_ddd81d4e,
                  mid_cloneTree_45dffc2c,
                  mid_toString_14c7b5c5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PrefixWildcardQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::WildcardQueryNode(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                PrefixWildcardQueryNode(const PrefixWildcardQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::WildcardQueryNode(obj) {}

                PrefixWildcardQueryNode(const ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode &);
                PrefixWildcardQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jint, jint);

                PrefixWildcardQueryNode cloneTree() const;
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
          namespace standard {
            namespace nodes {
              extern PyTypeObject PY_TYPE(PrefixWildcardQueryNode);

              class t_PrefixWildcardQueryNode {
              public:
                PyObject_HEAD
                PrefixWildcardQueryNode object;
                static PyObject *wrap_Object(const PrefixWildcardQueryNode&);
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
