#ifndef org_apache_lucene_sandbox_queries_regex_JavaUtilRegexCapabilities_H
#define org_apache_lucene_sandbox_queries_regex_JavaUtilRegexCapabilities_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {
          namespace regex {
            class RegexCapabilities$RegexMatcher;
            class RegexCapabilities;
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

            class JavaUtilRegexCapabilities : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                mid_init$_39c7bd3c,
                mid_compile_3b00aa76,
                mid_equals_290588e2,
                mid_hashCode_54c6a179,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit JavaUtilRegexCapabilities(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              JavaUtilRegexCapabilities(const JavaUtilRegexCapabilities& obj) : ::java::lang::Object(obj) {}

              static jint FLAG_CANON_EQ;
              static jint FLAG_CASE_INSENSITIVE;
              static jint FLAG_COMMENTS;
              static jint FLAG_DOTALL;
              static jint FLAG_LITERAL;
              static jint FLAG_MULTILINE;
              static jint FLAG_UNICODE_CASE;
              static jint FLAG_UNIX_LINES;

              JavaUtilRegexCapabilities();
              JavaUtilRegexCapabilities(jint);

              ::org::apache::lucene::sandbox::queries::regex::RegexCapabilities$RegexMatcher compile(const ::java::lang::String &) const;
              jboolean equals(const ::java::lang::Object &) const;
              jint hashCode() const;
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
            extern PyTypeObject PY_TYPE(JavaUtilRegexCapabilities);

            class t_JavaUtilRegexCapabilities {
            public:
              PyObject_HEAD
              JavaUtilRegexCapabilities object;
              static PyObject *wrap_Object(const JavaUtilRegexCapabilities&);
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
