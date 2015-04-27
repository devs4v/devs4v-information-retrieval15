#ifndef org_apache_lucene_queryparser_flexible_core_builders_QueryBuilder_H
#define org_apache_lucene_queryparser_flexible_core_builders_QueryBuilder_H

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
          namespace core {
            namespace builders {

              class QueryBuilder : public ::java::lang::Object {
              public:
                enum {
                  mid_build_30efaf9c,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                QueryBuilder(const QueryBuilder& obj) : ::java::lang::Object(obj) {}

                ::java::lang::Object build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
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
              extern PyTypeObject PY_TYPE(QueryBuilder);

              class t_QueryBuilder {
              public:
                PyObject_HEAD
                QueryBuilder object;
                static PyObject *wrap_Object(const QueryBuilder&);
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
