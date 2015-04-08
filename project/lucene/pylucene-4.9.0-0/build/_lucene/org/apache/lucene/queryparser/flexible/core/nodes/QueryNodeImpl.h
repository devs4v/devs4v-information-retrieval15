#ifndef org_apache_lucene_queryparser_flexible_core_nodes_QueryNodeImpl_H
#define org_apache_lucene_queryparser_flexible_core_nodes_QueryNodeImpl_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
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
    class String;
    class Cloneable;
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

              class QueryNodeImpl : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_add_cc04aeef,
                  mid_add_1fde8fc3,
                  mid_clone_b387c5e6,
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
                  mid_toString_14c7b5c5,
                  mid_unsetTag_5fdc3f48,
                  mid_allocate_54c6a166,
                  mid_setLeaf_bb0c767f,
                  mid_isRoot_54c6a16a,
                  mid_isDefaultField_a8afc646,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNodeImpl(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                QueryNodeImpl(const QueryNodeImpl& obj) : ::java::lang::Object(obj) {}

                static ::java::lang::String *PLAINTEXT_FIELD_NAME;

                QueryNodeImpl();

                void add(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                void add(const ::java::util::List &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode clone() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                jboolean containsTag(const ::java::lang::String &) const;
                ::java::util::List getChildren() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode getParent() const;
                ::java::lang::Object getTag(const ::java::lang::String &) const;
                ::java::util::Map getTagMap() const;
                jboolean isLeaf() const;
                void removeFromParent() const;
                void set(const ::java::util::List &) const;
                void setTag(const ::java::lang::String &, const ::java::lang::Object &) const;
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
              extern PyTypeObject PY_TYPE(QueryNodeImpl);

              class t_QueryNodeImpl {
              public:
                PyObject_HEAD
                QueryNodeImpl object;
                static PyObject *wrap_Object(const QueryNodeImpl&);
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
