#ifndef org_apache_lucene_queryparser_flexible_standard_config_StandardQueryConfigHandler_H
#define org_apache_lucene_queryparser_flexible_standard_config_StandardQueryConfigHandler_H

#include "org/apache/lucene/queryparser/flexible/core/config/QueryConfigHandler.h"

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
            namespace config {

              class StandardQueryConfigHandler : public ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler {
              public:
                enum {
                  mid_init$_54c6a166,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardQueryConfigHandler(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                StandardQueryConfigHandler(const StandardQueryConfigHandler& obj) : ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler(obj) {}

                StandardQueryConfigHandler();
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
            namespace config {
              extern PyTypeObject PY_TYPE(StandardQueryConfigHandler);

              class t_StandardQueryConfigHandler {
              public:
                PyObject_HEAD
                StandardQueryConfigHandler object;
                static PyObject *wrap_Object(const StandardQueryConfigHandler&);
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
