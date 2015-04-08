#ifndef org_apache_lucene_queryparser_flexible_core_nodes_FieldQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_FieldQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class FieldValuePairQueryNode;
              class TextableQueryNode;
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
          namespace core {
            namespace nodes {

              class FieldQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
              public:
                enum {
                  mid_init$_ddd81d4e,
                  mid_cloneTree_010ca031,
                  mid_getBegin_54c6a179,
                  mid_getEnd_54c6a179,
                  mid_getField_e0adba2f,
                  mid_getFieldAsString_14c7b5c5,
                  mid_getPositionIncrement_54c6a179,
                  mid_getText_e0adba2f,
                  mid_getTextAsString_14c7b5c5,
                  mid_getValue_e0adba2f,
                  mid_setBegin_39c7bd3c,
                  mid_setEnd_39c7bd3c,
                  mid_setField_a8afc64a,
                  mid_setPositionIncrement_39c7bd3c,
                  mid_setText_a8afc64a,
                  mid_setValue_a8afc64a,
                  mid_toQueryString_99b8dfe1,
                  mid_toString_14c7b5c5,
                  mid_getTermEscaped_99b8dfe1,
                  mid_getTermEscapeQuoted_99b8dfe1,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FieldQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                FieldQueryNode(const FieldQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                FieldQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jint, jint);

                FieldQueryNode cloneTree() const;
                jint getBegin() const;
                jint getEnd() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                jint getPositionIncrement() const;
                ::java::lang::CharSequence getText() const;
                ::java::lang::String getTextAsString() const;
                ::java::lang::CharSequence getValue() const;
                void setBegin(jint) const;
                void setEnd(jint) const;
                void setField(const ::java::lang::CharSequence &) const;
                void setPositionIncrement(jint) const;
                void setText(const ::java::lang::CharSequence &) const;
                void setValue(const ::java::lang::CharSequence &) const;
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
              extern PyTypeObject PY_TYPE(FieldQueryNode);

              class t_FieldQueryNode {
              public:
                PyObject_HEAD
                FieldQueryNode object;
                static PyObject *wrap_Object(const FieldQueryNode&);
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
