#ifndef org_apache_lucene_analysis_cjk_CJKBigramFilter_H
#define org_apache_lucene_analysis_cjk_CJKBigramFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
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
        namespace cjk {

          class CJKBigramFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_c7c794dc,
              mid_init$_d53bcf42,
              mid_init$_4f7f61d3,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CJKBigramFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CJKBigramFilter(const CJKBigramFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static ::java::lang::String *DOUBLE_TYPE;
            static jint HAN;
            static jint HANGUL;
            static jint HIRAGANA;
            static jint KATAKANA;
            static ::java::lang::String *SINGLE_TYPE;

            CJKBigramFilter(const ::org::apache::lucene::analysis::TokenStream &);
            CJKBigramFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);
            CJKBigramFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jboolean);

            jboolean incrementToken() const;
            void reset() const;
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
        namespace cjk {
          extern PyTypeObject PY_TYPE(CJKBigramFilter);

          class t_CJKBigramFilter {
          public:
            PyObject_HEAD
            CJKBigramFilter object;
            static PyObject *wrap_Object(const CJKBigramFilter&);
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
