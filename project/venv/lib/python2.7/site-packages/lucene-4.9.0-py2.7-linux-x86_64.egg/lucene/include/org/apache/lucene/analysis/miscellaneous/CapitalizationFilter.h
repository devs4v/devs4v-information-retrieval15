#ifndef org_apache_lucene_analysis_miscellaneous_CapitalizationFilter_H
#define org_apache_lucene_analysis_miscellaneous_CapitalizationFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class CharArraySet;
        }
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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
        namespace miscellaneous {

          class CapitalizationFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_c7c794dc,
              mid_init$_e833f6a2,
              mid_incrementToken_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CapitalizationFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CapitalizationFilter(const CapitalizationFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint DEFAULT_MAX_TOKEN_LENGTH;
            static jint DEFAULT_MAX_WORD_COUNT;

            CapitalizationFilter(const ::org::apache::lucene::analysis::TokenStream &);
            CapitalizationFilter(const ::org::apache::lucene::analysis::TokenStream &, jboolean, const ::org::apache::lucene::analysis::util::CharArraySet &, jboolean, const ::java::util::Collection &, jint, jint, jint);

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
        namespace miscellaneous {
          extern PyTypeObject PY_TYPE(CapitalizationFilter);

          class t_CapitalizationFilter {
          public:
            PyObject_HEAD
            CapitalizationFilter object;
            static PyObject *wrap_Object(const CapitalizationFilter&);
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
