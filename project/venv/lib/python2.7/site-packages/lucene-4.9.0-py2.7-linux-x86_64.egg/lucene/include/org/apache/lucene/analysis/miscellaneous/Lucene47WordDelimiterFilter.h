#ifndef org_apache_lucene_analysis_miscellaneous_Lucene47WordDelimiterFilter_H
#define org_apache_lucene_analysis_miscellaneous_Lucene47WordDelimiterFilter_H

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

          class Lucene47WordDelimiterFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_70257dbd,
              mid_init$_06e41d2a,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene47WordDelimiterFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene47WordDelimiterFilter(const Lucene47WordDelimiterFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint ALPHA;
            static jint ALPHANUM;
            static jint CATENATE_ALL;
            static jint CATENATE_NUMBERS;
            static jint CATENATE_WORDS;
            static jint DIGIT;
            static jint GENERATE_NUMBER_PARTS;
            static jint GENERATE_WORD_PARTS;
            static jint LOWER;
            static jint PRESERVE_ORIGINAL;
            static jint SPLIT_ON_CASE_CHANGE;
            static jint SPLIT_ON_NUMERICS;
            static jint STEM_ENGLISH_POSSESSIVE;
            static jint SUBWORD_DELIM;
            static jint UPPER;

            Lucene47WordDelimiterFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, const ::org::apache::lucene::analysis::util::CharArraySet &);
            Lucene47WordDelimiterFilter(const ::org::apache::lucene::analysis::TokenStream &, const JArray< jbyte > &, jint, const ::org::apache::lucene::analysis::util::CharArraySet &);

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
          extern PyTypeObject PY_TYPE(Lucene47WordDelimiterFilter);

          class t_Lucene47WordDelimiterFilter {
          public:
            PyObject_HEAD
            Lucene47WordDelimiterFilter object;
            static PyObject *wrap_Object(const Lucene47WordDelimiterFilter&);
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
