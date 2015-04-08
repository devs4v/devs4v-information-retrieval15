#ifndef org_apache_lucene_analysis_snowball_SnowballFilter_H
#define org_apache_lucene_analysis_snowball_SnowballFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
  namespace tartarus {
    namespace snowball {
      class SnowballProgram;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace snowball {

          class SnowballFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_a7671c33,
              mid_init$_be0a1066,
              mid_incrementToken_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SnowballFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SnowballFilter(const SnowballFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            SnowballFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::tartarus::snowball::SnowballProgram &);
            SnowballFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &);

            jboolean incrementToken() const;
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
        namespace snowball {
          extern PyTypeObject PY_TYPE(SnowballFilter);

          class t_SnowballFilter {
          public:
            PyObject_HEAD
            SnowballFilter object;
            static PyObject *wrap_Object(const SnowballFilter&);
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
