#ifndef org_apache_lucene_sandbox_queries_regex_RegexQueryCapable_H
#define org_apache_lucene_sandbox_queries_regex_RegexQueryCapable_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {
          namespace regex {
            class RegexCapabilities;
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
      namespace sandbox {
        namespace queries {
          namespace regex {

            class RegexQueryCapable : public ::java::lang::Object {
            public:
              enum {
                mid_getRegexImplementation_814365f4,
                mid_setRegexImplementation_06bf498d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RegexQueryCapable(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              RegexQueryCapable(const RegexQueryCapable& obj) : ::java::lang::Object(obj) {}

              ::org::apache::lucene::sandbox::queries::regex::RegexCapabilities getRegexImplementation() const;
              void setRegexImplementation(const ::org::apache::lucene::sandbox::queries::regex::RegexCapabilities &) const;
            };
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
      namespace sandbox {
        namespace queries {
          namespace regex {
            extern PyTypeObject PY_TYPE(RegexQueryCapable);

            class t_RegexQueryCapable {
            public:
              PyObject_HEAD
              RegexQueryCapable object;
              static PyObject *wrap_Object(const RegexQueryCapable&);
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

#endif
