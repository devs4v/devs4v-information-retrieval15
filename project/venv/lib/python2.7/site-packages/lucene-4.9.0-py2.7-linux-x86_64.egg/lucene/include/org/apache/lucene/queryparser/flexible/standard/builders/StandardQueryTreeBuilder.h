#ifndef org_apache_lucene_queryparser_flexible_standard_builders_StandardQueryTreeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_StandardQueryTreeBuilder_H

#include "org/apache/lucene/queryparser/flexible/core/builders/QueryTreeBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
            namespace nodes {
              class QueryNode;
            }
          }
          namespace standard {
            namespace builders {
              class StandardQueryBuilder;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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
            namespace builders {

              class StandardQueryTreeBuilder : public ::org::apache::lucene::queryparser::flexible::core::builders::QueryTreeBuilder {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_build_7f6ce179,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardQueryTreeBuilder(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::builders::QueryTreeBuilder(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                StandardQueryTreeBuilder(const StandardQueryTreeBuilder& obj) : ::org::apache::lucene::queryparser::flexible::core::builders::QueryTreeBuilder(obj) {}

                StandardQueryTreeBuilder();

                ::org::apache::lucene::search::Query build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
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
            namespace builders {
              extern PyTypeObject PY_TYPE(StandardQueryTreeBuilder);

              class t_StandardQueryTreeBuilder {
              public:
                PyObject_HEAD
                StandardQueryTreeBuilder object;
                static PyObject *wrap_Object(const StandardQueryTreeBuilder&);
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
