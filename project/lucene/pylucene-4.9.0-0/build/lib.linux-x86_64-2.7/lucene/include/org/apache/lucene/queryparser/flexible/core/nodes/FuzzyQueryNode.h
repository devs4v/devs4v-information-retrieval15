#ifndef org_apache_lucene_queryparser_flexible_core_nodes_FuzzyQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_FuzzyQueryNode_H

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

              class FuzzyQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode {
              public:
                enum {
                  mid_init$_7cd5e8f3,
                  mid_cloneTree_90198571,
                  mid_getPrefixLength_54c6a179,
                  mid_getSimilarity_54c6a176,
                  mid_setPrefixLength_39c7bd3c,
                  mid_setSimilarity_06298cab,
                  mid_toQueryString_99b8dfe1,
                  mid_toString_14c7b5c5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FuzzyQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                FuzzyQueryNode(const FuzzyQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode(obj) {}

                FuzzyQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jfloat, jint, jint);

                FuzzyQueryNode cloneTree() const;
                jint getPrefixLength() const;
                jfloat getSimilarity() const;
                void setPrefixLength(jint) const;
                void setSimilarity(jfloat) const;
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
              extern PyTypeObject PY_TYPE(FuzzyQueryNode);

              class t_FuzzyQueryNode {
              public:
                PyObject_HEAD
                FuzzyQueryNode object;
                static PyObject *wrap_Object(const FuzzyQueryNode&);
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
