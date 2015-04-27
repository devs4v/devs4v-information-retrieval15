#ifndef org_apache_lucene_queryparser_flexible_core_config_FieldConfig_H
#define org_apache_lucene_queryparser_flexible_core_config_FieldConfig_H

#include "org/apache/lucene/queryparser/flexible/core/config/AbstractQueryConfig.h"

namespace java {
  namespace lang {
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
            namespace config {

              class FieldConfig : public ::org::apache::lucene::queryparser::flexible::core::config::AbstractQueryConfig {
              public:
                enum {
                  mid_init$_5fdc3f48,
                  mid_getField_14c7b5c5,
                  mid_toString_14c7b5c5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FieldConfig(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::config::AbstractQueryConfig(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                FieldConfig(const FieldConfig& obj) : ::org::apache::lucene::queryparser::flexible::core::config::AbstractQueryConfig(obj) {}

                FieldConfig(const ::java::lang::String &);

                ::java::lang::String getField() const;
                ::java::lang::String toString() const;
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
              extern PyTypeObject PY_TYPE(FieldConfig);

              class t_FieldConfig {
              public:
                PyObject_HEAD
                FieldConfig object;
                static PyObject *wrap_Object(const FieldConfig&);
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
