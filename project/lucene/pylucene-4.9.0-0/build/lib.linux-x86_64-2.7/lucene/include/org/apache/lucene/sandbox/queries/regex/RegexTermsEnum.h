#ifndef org_apache_lucene_sandbox_queries_regex_RegexTermsEnum_H
#define org_apache_lucene_sandbox_queries_regex_RegexTermsEnum_H

#include "org/apache/lucene/index/FilteredTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class TermsEnum;
      }
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

            class RegexTermsEnum : public ::org::apache::lucene::index::FilteredTermsEnum {
            public:
              enum {
                mid_init$_d12accc0,
                mid_accept_30bc08e1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RegexTermsEnum(jobject obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              RegexTermsEnum(const RegexTermsEnum& obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {}

              RegexTermsEnum(const ::org::apache::lucene::index::TermsEnum &, const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::sandbox::queries::regex::RegexCapabilities &);
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
            extern PyTypeObject PY_TYPE(RegexTermsEnum);

            class t_RegexTermsEnum {
            public:
              PyObject_HEAD
              RegexTermsEnum object;
              static PyObject *wrap_Object(const RegexTermsEnum&);
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
