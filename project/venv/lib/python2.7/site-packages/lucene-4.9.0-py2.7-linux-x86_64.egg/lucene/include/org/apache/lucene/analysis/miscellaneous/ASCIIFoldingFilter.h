#ifndef org_apache_lucene_analysis_miscellaneous_ASCIIFoldingFilter_H
#define org_apache_lucene_analysis_miscellaneous_ASCIIFoldingFilter_H

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

          class ASCIIFoldingFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_c7c794dc,
              mid_init$_a19d9eb9,
              mid_foldToASCII_ec6430f4,
              mid_foldToASCII_8c28d06f,
              mid_incrementToken_54c6a16a,
              mid_isPreserveOriginal_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ASCIIFoldingFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ASCIIFoldingFilter(const ASCIIFoldingFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            ASCIIFoldingFilter(const ::org::apache::lucene::analysis::TokenStream &);
            ASCIIFoldingFilter(const ::org::apache::lucene::analysis::TokenStream &, jboolean);

            void foldToASCII(const JArray< jchar > &, jint) const;
            static jint foldToASCII(const JArray< jchar > &, jint, const JArray< jchar > &, jint, jint);
            jboolean incrementToken() const;
            jboolean isPreserveOriginal() const;
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
        namespace miscellaneous {
          extern PyTypeObject PY_TYPE(ASCIIFoldingFilter);

          class t_ASCIIFoldingFilter {
          public:
            PyObject_HEAD
            ASCIIFoldingFilter object;
            static PyObject *wrap_Object(const ASCIIFoldingFilter&);
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
