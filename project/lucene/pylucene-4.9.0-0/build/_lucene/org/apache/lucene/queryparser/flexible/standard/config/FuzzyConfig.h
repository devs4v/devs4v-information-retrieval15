#ifndef org_apache_lucene_queryparser_flexible_standard_config_FuzzyConfig_H
#define org_apache_lucene_queryparser_flexible_standard_config_FuzzyConfig_H

#include "java/lang/Object.h"

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

              class FuzzyConfig : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_getMinSimilarity_54c6a176,
                  mid_getPrefixLength_54c6a179,
                  mid_setMinSimilarity_06298cab,
                  mid_setPrefixLength_39c7bd3c,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FuzzyConfig(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                FuzzyConfig(const FuzzyConfig& obj) : ::java::lang::Object(obj) {}

                FuzzyConfig();

                jfloat getMinSimilarity() const;
                jint getPrefixLength() const;
                void setMinSimilarity(jfloat) const;
                void setPrefixLength(jint) const;
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
              extern PyTypeObject PY_TYPE(FuzzyConfig);

              class t_FuzzyConfig {
              public:
                PyObject_HEAD
                FuzzyConfig object;
                static PyObject *wrap_Object(const FuzzyConfig&);
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
