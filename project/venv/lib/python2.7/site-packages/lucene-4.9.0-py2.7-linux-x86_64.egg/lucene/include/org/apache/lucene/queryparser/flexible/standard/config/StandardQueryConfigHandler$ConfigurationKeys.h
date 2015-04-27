#ifndef org_apache_lucene_queryparser_flexible_standard_config_StandardQueryConfigHandler$ConfigurationKeys_H
#define org_apache_lucene_queryparser_flexible_standard_config_StandardQueryConfigHandler$ConfigurationKeys_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace config {
              class ConfigurationKey;
            }
          }
          namespace standard {
            namespace config {
              class StandardQueryConfigHandler$Operator;
              class FuzzyConfig;
              class NumericConfig;
            }
          }
        }
      }
      namespace document {
        class DateTools$Resolution;
      }
      namespace search {
        class MultiTermQuery$RewriteMethod;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Locale;
    class TimeZone;
    class Map;
  }
  namespace lang {
    class String;
    class Float;
    class Boolean;
    class CharSequence;
    class Integer;
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

              class StandardQueryConfigHandler$ConfigurationKeys : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_54c6a166,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardQueryConfigHandler$ConfigurationKeys(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                StandardQueryConfigHandler$ConfigurationKeys(const StandardQueryConfigHandler$ConfigurationKeys& obj) : ::java::lang::Object(obj) {}

                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *ALLOW_LEADING_WILDCARD;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *ANALYZER;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *BOOST;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *DATE_RESOLUTION;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *DEFAULT_OPERATOR;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *ENABLE_POSITION_INCREMENTS;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *FIELD_BOOST_MAP;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *FIELD_DATE_RESOLUTION_MAP;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *FUZZY_CONFIG;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *LOCALE;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *LOWERCASE_EXPANDED_TERMS;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *MULTI_FIELDS;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *MULTI_TERM_REWRITE_METHOD;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *NUMERIC_CONFIG;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *NUMERIC_CONFIG_MAP;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *PHRASE_SLOP;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *TIMEZONE;

                StandardQueryConfigHandler$ConfigurationKeys();
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
              extern PyTypeObject PY_TYPE(StandardQueryConfigHandler$ConfigurationKeys);

              class t_StandardQueryConfigHandler$ConfigurationKeys {
              public:
                PyObject_HEAD
                StandardQueryConfigHandler$ConfigurationKeys object;
                static PyObject *wrap_Object(const StandardQueryConfigHandler$ConfigurationKeys&);
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
