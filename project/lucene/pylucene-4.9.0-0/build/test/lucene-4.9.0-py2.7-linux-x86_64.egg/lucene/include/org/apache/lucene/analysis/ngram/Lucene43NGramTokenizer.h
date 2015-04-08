#ifndef org_apache_lucene_analysis_ngram_Lucene43NGramTokenizer_H
#define org_apache_lucene_analysis_ngram_Lucene43NGramTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
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
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ngram {

          class Lucene43NGramTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
          public:
            enum {
              mid_init$_cf2e3c10,
              mid_init$_92513554,
              mid_init$_fb18a8f8,
              mid_end_54c6a166,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene43NGramTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene43NGramTokenizer(const Lucene43NGramTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint DEFAULT_MAX_NGRAM_SIZE;
            static jint DEFAULT_MIN_NGRAM_SIZE;

            Lucene43NGramTokenizer(const ::java::io::Reader &);
            Lucene43NGramTokenizer(const ::java::io::Reader &, jint, jint);
            Lucene43NGramTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &, jint, jint);

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
          extern PyTypeObject PY_TYPE(Lucene43NGramTokenizer);

          class t_Lucene43NGramTokenizer {
          public:
            PyObject_HEAD
            Lucene43NGramTokenizer object;
            static PyObject *wrap_Object(const Lucene43NGramTokenizer&);
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
