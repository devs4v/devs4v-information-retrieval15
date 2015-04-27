#ifndef org_apache_lucene_queryparser_flexible_core_util_QueryNodeOperation_H
#define org_apache_lucene_queryparser_flexible_core_util_QueryNodeOperation_H

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
            namespace util {

              class QueryNodeOperation : public ::java::lang::Object {
              public:
                enum {
                  mid_logicalAnd_f8fdf1b4,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNodeOperation(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                QueryNodeOperation(const QueryNodeOperation& obj) : ::java::lang::Object(obj) {}

                static ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode logicalAnd(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &, const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &);
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
            namespace util {
              extern PyTypeObject PY_TYPE(QueryNodeOperation);

              class t_QueryNodeOperation {
              public:
                PyObject_HEAD
                QueryNodeOperation object;
                static PyObject *wrap_Object(const QueryNodeOperation&);
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
