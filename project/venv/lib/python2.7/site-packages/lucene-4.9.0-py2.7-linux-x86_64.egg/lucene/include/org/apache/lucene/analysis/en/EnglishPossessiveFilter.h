#ifndef org_apache_lucene_analysis_en_EnglishPossessiveFilter_H
#define org_apache_lucene_analysis_en_EnglishPossessiveFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace en {

          class EnglishPossessiveFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_c7c794dc,
              mid_init$_8f50e725,
              mid_incrementToken_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EnglishPossessiveFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            EnglishPossessiveFilter(const EnglishPossessiveFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            EnglishPossessiveFilter(const ::org::apache::lucene::analysis::TokenStream &);
            EnglishPossessiveFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &);

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
        namespace en {
          extern PyTypeObject PY_TYPE(EnglishPossessiveFilter);

          class t_EnglishPossessiveFilter {
          public:
            PyObject_HEAD
            EnglishPossessiveFilter object;
            static PyObject *wrap_Object(const EnglishPossessiveFilter&);
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
