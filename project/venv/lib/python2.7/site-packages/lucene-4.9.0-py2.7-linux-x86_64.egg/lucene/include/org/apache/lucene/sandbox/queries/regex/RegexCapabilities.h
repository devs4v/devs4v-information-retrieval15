#ifndef org_apache_lucene_sandbox_queries_regex_RegexCapabilities_H
#define org_apache_lucene_sandbox_queries_regex_RegexCapabilities_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {
          namespace regex {
            class RegexCapabilities$RegexMatcher;
          }
        }
      }
    }
  }
}
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
      namespace sandbox {
        namespace queries {
          namespace regex {

            class RegexCapabilities : public ::java::lang::Object {
            public:
              enum {
                mid_compile_3b00aa76,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RegexCapabilities(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              RegexCapabilities(const RegexCapabilities& obj) : ::java::lang::Object(obj) {}

              ::org::apache::lucene::sandbox::queries::regex::RegexCapabilities$RegexMatcher compile(const ::java::lang::String &) const;
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
            extern PyTypeObject PY_TYPE(RegexCapabilities);

            class t_RegexCapabilities {
            public:
              PyObject_HEAD
              RegexCapabilities object;
              static PyObject *wrap_Object(const RegexCapabilities&);
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
