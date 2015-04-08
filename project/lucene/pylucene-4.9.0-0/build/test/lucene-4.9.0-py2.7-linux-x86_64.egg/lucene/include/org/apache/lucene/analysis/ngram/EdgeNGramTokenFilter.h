#ifndef org_apache_lucene_analysis_ngram_EdgeNGramTokenFilter_H
#define org_apache_lucene_analysis_ngram_EdgeNGramTokenFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace analysis {
        namespace ngram {
          class EdgeNGramTokenFilter$Side;
        }
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
        namespace ngram {

          class EdgeNGramTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_46a9ddd5,
              mid_init$_fa7af393,
              mid_init$_ef953ccc,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EdgeNGramTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            EdgeNGramTokenFilter(const EdgeNGramTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint DEFAULT_MAX_GRAM_SIZE;
            static jint DEFAULT_MIN_GRAM_SIZE;
            static ::org::apache::lucene::analysis::ngram::EdgeNGramTokenFilter$Side *DEFAULT_SIDE;

            EdgeNGramTokenFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &, jint, jint);
            EdgeNGramTokenFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, jint, jint);
            EdgeNGramTokenFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::ngram::EdgeNGramTokenFilter$Side &, jint, jint);

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
        namespace ngram {
          extern PyTypeObject PY_TYPE(EdgeNGramTokenFilter);

          class t_EdgeNGramTokenFilter {
          public:
            PyObject_HEAD
            EdgeNGramTokenFilter object;
            static PyObject *wrap_Object(const EdgeNGramTokenFilter&);
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
