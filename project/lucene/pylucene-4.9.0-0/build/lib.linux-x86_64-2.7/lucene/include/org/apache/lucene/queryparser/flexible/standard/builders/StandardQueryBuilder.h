#ifndef org_apache_lucene_queryparser_flexible_standard_builders_StandardQueryBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_StandardQueryBuilder_H

#include "org/apache/lucene/queryparser/flexible/core/builders/QueryBuilder.h"

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

              class StandardQueryBuilder : public ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder {
              public:
                enum {
                  mid_build_7f6ce179,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardQueryBuilder(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                StandardQueryBuilder(const StandardQueryBuilder& obj) : ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder(obj) {}

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
              extern PyTypeObject PY_TYPE(StandardQueryBuilder);

              class t_StandardQueryBuilder {
              public:
                PyObject_HEAD
                StandardQueryBuilder object;
                static PyObject *wrap_Object(const StandardQueryBuilder&);
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
