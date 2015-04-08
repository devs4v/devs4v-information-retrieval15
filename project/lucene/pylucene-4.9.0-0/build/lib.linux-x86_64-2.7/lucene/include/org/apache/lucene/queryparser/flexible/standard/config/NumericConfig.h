#ifndef org_apache_lucene_queryparser_flexible_standard_config_NumericConfig_H
#define org_apache_lucene_queryparser_flexible_standard_config_NumericConfig_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class FieldType$NumericType;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace text {
    class NumberFormat;
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

              class NumericConfig : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_09c28ef7,
                  mid_equals_290588e2,
                  mid_getNumberFormat_6b701965,
                  mid_getPrecisionStep_54c6a179,
                  mid_getType_81bd17c2,
                  mid_setNumberFormat_d2d1ba24,
                  mid_setPrecisionStep_39c7bd3c,
                  mid_setType_d9029e47,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit NumericConfig(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                NumericConfig(const NumericConfig& obj) : ::java::lang::Object(obj) {}

                NumericConfig(jint, const ::java::text::NumberFormat &, const ::org::apache::lucene::document::FieldType$NumericType &);

                jboolean equals(const ::java::lang::Object &) const;
                ::java::text::NumberFormat getNumberFormat() const;
                jint getPrecisionStep() const;
                ::org::apache::lucene::document::FieldType$NumericType getType() const;
                void setNumberFormat(const ::java::text::NumberFormat &) const;
                void setPrecisionStep(jint) const;
                void setType(const ::org::apache::lucene::document::FieldType$NumericType &) const;
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
              extern PyTypeObject PY_TYPE(NumericConfig);

              class t_NumericConfig {
              public:
                PyObject_HEAD
                NumericConfig object;
                static PyObject *wrap_Object(const NumericConfig&);
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
