#ifndef org_apache_lucene_sandbox_queries_regex_RegexCapabilities$RegexMatcher_H
#define org_apache_lucene_sandbox_queries_regex_RegexCapabilities$RegexMatcher_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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

            class RegexCapabilities$RegexMatcher : public ::java::lang::Object {
            public:
              enum {
                mid_match_7bc03dc8,
                mid_prefix_14c7b5c5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RegexCapabilities$RegexMatcher(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              RegexCapabilities$RegexMatcher(const RegexCapabilities$RegexMatcher& obj) : ::java::lang::Object(obj) {}

              jboolean match(const ::org::apache::lucene::util::BytesRef &) const;
              ::java::lang::String prefix() const;
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
            extern PyTypeObject PY_TYPE(RegexCapabilities$RegexMatcher);

            class t_RegexCapabilities$RegexMatcher {
            public:
              PyObject_HEAD
              RegexCapabilities$RegexMatcher object;
              static PyObject *wrap_Object(const RegexCapabilities$RegexMatcher&);
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
