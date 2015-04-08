#ifndef org_apache_lucene_queryparser_flexible_standard_processors_BooleanQuery2ModifierNodeProcessor_H
#define org_apache_lucene_queryparser_flexible_standard_processors_BooleanQuery2ModifierNodeProcessor_H

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

              class BooleanQuery2ModifierNodeProcessor : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_getQueryConfigHandler_3636d8c3,
                  mid_process_6705aed7,
                  mid_setQueryConfigHandler_0b1f7132,
                  mid_postProcessNode_6705aed7,
                  mid_preProcessNode_6705aed7,
                  mid_processChildren_cc04aeef,
                  mid_tagModifierButDoNotOverride_6bd34b3d,
                  mid_fillChildrenBufferAndApplyModifiery_cc04aeef,
                  mid_isDefaultBooleanQueryNode_cc04aee3,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit BooleanQuery2ModifierNodeProcessor(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                BooleanQuery2ModifierNodeProcessor(const BooleanQuery2ModifierNodeProcessor& obj) : ::java::lang::Object(obj) {}

                BooleanQuery2ModifierNodeProcessor();

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
              extern PyTypeObject PY_TYPE(BooleanQuery2ModifierNodeProcessor);

              class t_BooleanQuery2ModifierNodeProcessor {
              public:
                PyObject_HEAD
                BooleanQuery2ModifierNodeProcessor object;
                static PyObject *wrap_Object(const BooleanQuery2ModifierNodeProcessor&);
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
