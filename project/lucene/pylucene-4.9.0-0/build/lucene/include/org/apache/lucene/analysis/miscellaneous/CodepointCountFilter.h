#ifndef org_apache_lucene_analysis_miscellaneous_CodepointCountFilter_H
#define org_apache_lucene_analysis_miscellaneous_CodepointCountFilter_H

#include "org/apache/lucene/analysis/util/FilteringTokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace analysis {
        class TokenStream;
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
      namespace analysis {
        namespace miscellaneous {

          class CodepointCountFilter : public ::org::apache::lucene::analysis::util::FilteringTokenFilter {
          public:
            enum {
              mid_init$_46a9ddd5,
              mid_accept_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CodepointCountFilter(jobject obj) : ::org::apache::lucene::analysis::util::FilteringTokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CodepointCountFilter(const CodepointCountFilter& obj) : ::org::apache::lucene::analysis::util::FilteringTokenFilter(obj) {}

            CodepointCountFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &, jint, jint);

            jboolean accept() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {
          extern PyTypeObject PY_TYPE(CodepointCountFilter);

          class t_CodepointCountFilter {
          public:
            PyObject_HEAD
            CodepointCountFilter object;
            static PyObject *wrap_Object(const CodepointCountFilter&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
