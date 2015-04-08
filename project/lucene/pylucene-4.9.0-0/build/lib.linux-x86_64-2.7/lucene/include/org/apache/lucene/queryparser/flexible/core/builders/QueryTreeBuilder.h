#ifndef org_apache_lucene_queryparser_flexible_core_builders_QueryTreeBuilder_H
#define org_apache_lucene_queryparser_flexible_core_builders_QueryTreeBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
            namespace nodes {
              class QueryNode;
            }
            namespace builders {
              class QueryBuilder;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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
            namespace builders {

              class QueryTreeBuilder : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_build_30efaf9c,
                  mid_setBuilder_868de661,
                  mid_setBuilder_ba566e4f,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryTreeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                QueryTreeBuilder(const QueryTreeBuilder& obj) : ::java::lang::Object(obj) {}

                static ::java::lang::String *QUERY_TREE_BUILDER_TAGID;

                QueryTreeBuilder();

                ::java::lang::Object build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                void setBuilder(const ::java::lang::CharSequence &, const ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder &) const;
                void setBuilder(const ::java::lang::Class &, const ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder &) const;
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
            namespace builders {
              extern PyTypeObject PY_TYPE(QueryTreeBuilder);

              class t_QueryTreeBuilder {
              public:
                PyObject_HEAD
                QueryTreeBuilder object;
                static PyObject *wrap_Object(const QueryTreeBuilder&);
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
