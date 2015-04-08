#ifndef org_apache_lucene_queryparser_flexible_core_nodes_ProximityQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_ProximityQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/BooleanQueryNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
              class ProximityQueryNode$Type;
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

              class ProximityQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode {
              public:
                enum {
                  mid_init$_8db4cd70,
                  mid_init$_0740981c,
                  mid_cloneTree_b387c5e6,
                  mid_getDistance_54c6a179,
                  mid_getField_e0adba2f,
                  mid_getFieldAsString_14c7b5c5,
                  mid_getProximityType_9b7235cd,
                  mid_isInOrder_54c6a16a,
                  mid_setField_a8afc64a,
                  mid_toQueryString_99b8dfe1,
                  mid_toString_14c7b5c5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ProximityQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                ProximityQueryNode(const ProximityQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode(obj) {}

                ProximityQueryNode(const ::java::util::List &, const ::java::lang::CharSequence &, const ::org::apache::lucene::queryparser::flexible::core::nodes::ProximityQueryNode$Type &, jboolean);
                ProximityQueryNode(const ::java::util::List &, const ::java::lang::CharSequence &, const ::org::apache::lucene::queryparser::flexible::core::nodes::ProximityQueryNode$Type &, jint, jboolean);

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                jint getDistance() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::ProximityQueryNode$Type getProximityType() const;
                jboolean isInOrder() const;
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
              extern PyTypeObject PY_TYPE(ProximityQueryNode);

              class t_ProximityQueryNode {
              public:
                PyObject_HEAD
                ProximityQueryNode object;
                static PyObject *wrap_Object(const ProximityQueryNode&);
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
