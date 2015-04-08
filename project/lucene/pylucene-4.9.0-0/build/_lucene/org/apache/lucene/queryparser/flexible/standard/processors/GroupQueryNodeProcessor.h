#ifndef org_apache_lucene_queryparser_flexible_standard_processors_GroupQueryNodeProcessor_H
#define org_apache_lucene_queryparser_flexible_standard_processors_GroupQueryNodeProcessor_H

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
            namespace config {
              class QueryConfigHandler;
            }
            namespace processors {
              class QueryNodeProcessor;
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
            namespace processors {

              class GroupQueryNodeProcessor : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_getQueryConfigHandler_3636d8c3,
                  mid_process_6705aed7,
                  mid_setQueryConfigHandler_0b1f7132,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit GroupQueryNodeProcessor(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                GroupQueryNodeProcessor(const GroupQueryNodeProcessor& obj) : ::java::lang::Object(obj) {}

                GroupQueryNodeProcessor();

                ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler getQueryConfigHandler() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode process(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                void setQueryConfigHandler(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &) const;
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
            namespace processors {
              extern PyTypeObject PY_TYPE(GroupQueryNodeProcessor);

              class t_GroupQueryNodeProcessor {
              public:
                PyObject_HEAD
                GroupQueryNodeProcessor object;
                static PyObject *wrap_Object(const GroupQueryNodeProcessor&);
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
