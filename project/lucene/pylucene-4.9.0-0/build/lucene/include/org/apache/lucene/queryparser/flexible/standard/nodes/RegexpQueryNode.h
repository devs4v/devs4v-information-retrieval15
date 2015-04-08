#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_RegexpQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_RegexpQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class TextableQueryNode;
              class FieldableNode;
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

              class RegexpQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
              public:
                enum {
                  mid_init$_ddd81d4e,
                  mid_cloneTree_6f121059,
                  mid_getField_e0adba2f,
                  mid_getFieldAsString_14c7b5c5,
                  mid_getText_e0adba2f,
                  mid_setField_a8afc64a,
                  mid_setText_a8afc64a,
                  mid_textToBytesRef_4ae19461,
                  mid_toQueryString_99b8dfe1,
                  mid_toString_14c7b5c5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RegexpQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                RegexpQueryNode(const RegexpQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                RegexpQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jint, jint);

                RegexpQueryNode cloneTree() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                ::java::lang::CharSequence getText() const;
                void setField(const ::java::lang::CharSequence &) const;
                void setText(const ::java::lang::CharSequence &) const;
                ::org::apache::lucene::util::BytesRef textToBytesRef() const;
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
          namespace standard {
            namespace nodes {
              extern PyTypeObject PY_TYPE(RegexpQueryNode);

              class t_RegexpQueryNode {
              public:
                PyObject_HEAD
                RegexpQueryNode object;
                static PyObject *wrap_Object(const RegexpQueryNode&);
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
