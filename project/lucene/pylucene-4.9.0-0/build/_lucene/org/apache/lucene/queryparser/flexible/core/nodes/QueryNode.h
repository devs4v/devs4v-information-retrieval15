#ifndef org_apache_lucene_queryparser_flexible_core_nodes_QueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_QueryNode_H

#include "java/lang/Object.h"

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
  namespace util {
    class Map;
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

              class QueryNode : public ::java::lang::Object {
              public:
                enum {
                  mid_add_cc04aeef,
                  mid_add_1fde8fc3,
                  mid_cloneTree_b387c5e6,
                  mid_containsTag_5fdc3f44,
                  mid_getChildren_87851566,
                  mid_getParent_b387c5e6,
                  mid_getTag_2a1c4d09,
                  mid_getTagMap_db60befd,
                  mid_isLeaf_54c6a16a,
                  mid_removeFromParent_54c6a166,
                  mid_set_1fde8fc3,
                  mid_setTag_2da4da24,
                  mid_toQueryString_99b8dfe1,
                  mid_toString_14c7b5c5,
                  mid_unsetTag_5fdc3f48,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNode(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                QueryNode(const QueryNode& obj) : ::java::lang::Object(obj) {}

                void add(const QueryNode &) const;
                void add(const ::java::util::List &) const;
                QueryNode cloneTree() const;
                jboolean containsTag(const ::java::lang::String &) const;
                ::java::util::List getChildren() const;
                QueryNode getParent() const;
                ::java::lang::Object getTag(const ::java::lang::String &) const;
                ::java::util::Map getTagMap() const;
                jboolean isLeaf() const;
                void removeFromParent() const;
                void set(const ::java::util::List &) const;
                void setTag(const ::java::lang::String &, const ::java::lang::Object &) const;
                ::java::lang::CharSequence toQueryString(const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax &) const;
                ::java::lang::String toString() const;
                void unsetTag(const ::java::lang::String &) const;
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
              extern PyTypeObject PY_TYPE(QueryNode);

              class t_QueryNode {
              public:
                PyObject_HEAD
                QueryNode object;
                static PyObject *wrap_Object(const QueryNode&);
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
