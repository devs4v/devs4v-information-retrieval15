#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_AbstractRangeQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_AbstractRangeQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class FieldValuePairQueryNode;
              class RangeQueryNode;
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
    class Object;
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
          namespace standard {
            namespace nodes {

              class AbstractRangeQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
              public:
                enum {
                  mid_getField_e0adba2f,
                  mid_getLowerBound_2906e52b,
                  mid_getUpperBound_2906e52b,
                  mid_isLowerInclusive_54c6a16a,
                  mid_isUpperInclusive_54c6a16a,
                  mid_setBounds_b72fdc1c,
                  mid_setField_a8afc64a,
                  mid_toQueryString_99b8dfe1,
                  mid_toString_14c7b5c5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AbstractRangeQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                AbstractRangeQueryNode(const AbstractRangeQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                ::java::lang::CharSequence getField() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode getLowerBound() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode getUpperBound() const;
                jboolean isLowerInclusive() const;
                jboolean isUpperInclusive() const;
                void setBounds(const ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode &, const ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode &, jboolean, jboolean) const;
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
          namespace standard {
            namespace nodes {
              extern PyTypeObject PY_TYPE(AbstractRangeQueryNode);

              class t_AbstractRangeQueryNode {
              public:
                PyObject_HEAD
                AbstractRangeQueryNode object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AbstractRangeQueryNode *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AbstractRangeQueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AbstractRangeQueryNode&, PyTypeObject *);
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
