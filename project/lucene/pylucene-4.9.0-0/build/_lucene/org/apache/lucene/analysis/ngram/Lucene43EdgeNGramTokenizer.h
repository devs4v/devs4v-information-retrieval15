#ifndef org_apache_lucene_analysis_ngram_Lucene43EdgeNGramTokenizer_H
#define org_apache_lucene_analysis_ngram_Lucene43EdgeNGramTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
        class Version;
      }
      namespace analysis {
        namespace ngram {
          class Lucene43EdgeNGramTokenizer$Side;
        }
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
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ngram {

          class Lucene43EdgeNGramTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
          public:
            enum {
              mid_init$_47cfcf59,
              mid_init$_0c87564f,
              mid_init$_6fc4da21,
              mid_init$_9a7df2b7,
              mid_init$_3a1c54b5,
              mid_init$_1623557f,
              mid_end_54c6a166,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene43EdgeNGramTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene43EdgeNGramTokenizer(const Lucene43EdgeNGramTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint DEFAULT_MAX_GRAM_SIZE;
            static jint DEFAULT_MIN_GRAM_SIZE;
            static ::org::apache::lucene::analysis::ngram::Lucene43EdgeNGramTokenizer$Side *DEFAULT_SIDE;

            Lucene43EdgeNGramTokenizer(const ::org::apache::lucene::util::Version &, const ::java::io::Reader &, jint, jint);
            Lucene43EdgeNGramTokenizer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &, jint, jint);
            Lucene43EdgeNGramTokenizer(const ::org::apache::lucene::util::Version &, const ::java::io::Reader &, const ::org::apache::lucene::analysis::ngram::Lucene43EdgeNGramTokenizer$Side &, jint, jint);
            Lucene43EdgeNGramTokenizer(const ::org::apache::lucene::util::Version &, const ::java::io::Reader &, const ::java::lang::String &, jint, jint);
            Lucene43EdgeNGramTokenizer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &, const ::java::lang::String &, jint, jint);
            Lucene43EdgeNGramTokenizer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &, const ::org::apache::lucene::analysis::ngram::Lucene43EdgeNGramTokenizer$Side &, jint, jint);

            void end() const;
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
          extern PyTypeObject PY_TYPE(Lucene43EdgeNGramTokenizer);

          class t_Lucene43EdgeNGramTokenizer {
          public:
            PyObject_HEAD
            Lucene43EdgeNGramTokenizer object;
            static PyObject *wrap_Object(const Lucene43EdgeNGramTokenizer&);
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
