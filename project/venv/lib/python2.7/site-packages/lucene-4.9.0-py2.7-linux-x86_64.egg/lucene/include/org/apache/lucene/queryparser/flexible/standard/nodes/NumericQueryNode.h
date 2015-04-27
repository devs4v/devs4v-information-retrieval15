#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_NumericQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_NumericQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class FieldValuePairQueryNode;
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
    class Number;
    class Class;
    class CharSequence;
  }
  namespace text {
    class NumberFormat;
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

              class NumericQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
              public:
                enum {
                  mid_init$_42c517e2,
                  mid_getField_e0adba2f,
                  mid_getNumberFormat_6b701965,
                  mid_getValue_ee47e3e1,
                  mid_setField_a8afc64a,
                  mid_setNumberFormat_d2d1ba24,
                  mid_setValue_948ebebc,
                  mid_toQueryString_99b8dfe1,
                  mid_toString_14c7b5c5,
                  mid_getTermEscaped_99b8dfe1,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit NumericQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                NumericQueryNode(const NumericQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                NumericQueryNode(const ::java::lang::CharSequence &, const ::java::lang::Number &, const ::java::text::NumberFormat &);

                ::java::lang::CharSequence getField() const;
                ::java::text::NumberFormat getNumberFormat() const;
                ::java::lang::Number getValue() const;
                void setField(const ::java::lang::CharSequence &) const;
                void setNumberFormat(const ::java::text::NumberFormat &) const;
                void setValue(const ::java::lang::Number &) const;
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
              extern PyTypeObject PY_TYPE(NumericQueryNode);

              class t_NumericQueryNode {
              public:
                PyObject_HEAD
                NumericQueryNode object;
                static PyObject *wrap_Object(const NumericQueryNode&);
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
