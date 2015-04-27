#ifndef org_apache_lucene_analysis_miscellaneous_HyphenatedWordsFilter_H
#define org_apache_lucene_analysis_miscellaneous_HyphenatedWordsFilter_H

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

          class HyphenatedWordsFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_c7c794dc,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HyphenatedWordsFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            HyphenatedWordsFilter(const HyphenatedWordsFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            HyphenatedWordsFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
        namespace miscellaneous {
          extern PyTypeObject PY_TYPE(HyphenatedWordsFilter);

          class t_HyphenatedWordsFilter {
          public:
            PyObject_HEAD
            HyphenatedWordsFilter object;
            static PyObject *wrap_Object(const HyphenatedWordsFilter&);
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
