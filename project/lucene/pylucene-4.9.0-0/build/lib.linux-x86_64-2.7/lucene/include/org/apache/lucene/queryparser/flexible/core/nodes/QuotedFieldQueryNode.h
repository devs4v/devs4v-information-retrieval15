#ifndef org_apache_lucene_queryparser_flexible_core_nodes_QuotedFieldQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_QuotedFieldQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldQueryNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
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

              class QuotedFieldQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode {
              public:
                enum {
                  mid_init$_ddd81d4e,
                  mid_cloneTree_e948922b,
                  mid_toQueryString_99b8dfe1,
                  mid_toString_14c7b5c5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QuotedFieldQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                QuotedFieldQueryNode(const QuotedFieldQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode(obj) {}

                QuotedFieldQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jint, jint);

                QuotedFieldQueryNode cloneTree() const;
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
              extern PyTypeObject PY_TYPE(QuotedFieldQueryNode);

              class t_QuotedFieldQueryNode {
              public:
                PyObject_HEAD
                QuotedFieldQueryNode object;
                static PyObject *wrap_Object(const QuotedFieldQueryNode&);
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
