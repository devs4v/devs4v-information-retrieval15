#ifndef org_apache_lucene_queryparser_flexible_core_config_FieldConfigListener_H
#define org_apache_lucene_queryparser_flexible_core_config_FieldConfigListener_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace config {
              class FieldConfig;
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
            namespace config {

              class FieldConfigListener : public ::java::lang::Object {
              public:
                enum {
                  mid_buildFieldConfig_aaab7c6b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FieldConfigListener(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                FieldConfigListener(const FieldConfigListener& obj) : ::java::lang::Object(obj) {}

                void buildFieldConfig(const ::org::apache::lucene::queryparser::flexible::core::config::FieldConfig &) const;
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
            namespace config {
              extern PyTypeObject PY_TYPE(FieldConfigListener);

              class t_FieldConfigListener {
              public:
                PyObject_HEAD
                FieldConfigListener object;
                static PyObject *wrap_Object(const FieldConfigListener&);
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
