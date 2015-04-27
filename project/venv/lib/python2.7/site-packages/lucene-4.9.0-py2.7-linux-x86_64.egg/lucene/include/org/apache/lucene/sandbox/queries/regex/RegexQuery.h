#ifndef org_apache_lucene_sandbox_queries_regex_RegexQuery_H
#define org_apache_lucene_sandbox_queries_regex_RegexQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace sandbox {
        namespace queries {
          namespace regex {
            class RegexQueryCapable;
            class RegexCapabilities;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {
          namespace regex {

            class RegexQuery : public ::org::apache::lucene::search::MultiTermQuery {
            public:
              enum {
                mid_init$_7eca6a81,
                mid_equals_290588e2,
                mid_getRegexImplementation_814365f4,
                mid_getTerm_0f71f314,
                mid_hashCode_54c6a179,
                mid_setRegexImplementation_06bf498d,
                mid_toString_97a5258f,
                mid_getTermsEnum_0bc2a5ab,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RegexQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              RegexQuery(const RegexQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

              RegexQuery(const ::org::apache::lucene::index::Term &);

              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::sandbox::queries::regex::RegexCapabilities getRegexImplementation() const;
              ::org::apache::lucene::index::Term getTerm() const;
              jint hashCode() const;
              void setRegexImplementation(const ::org::apache::lucene::sandbox::queries::regex::RegexCapabilities &) const;
              ::java::lang::String toString(const ::java::lang::String &) const;
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
            extern PyTypeObject PY_TYPE(RegexQuery);

            class t_RegexQuery {
            public:
              PyObject_HEAD
              RegexQuery object;
              static PyObject *wrap_Object(const RegexQuery&);
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
