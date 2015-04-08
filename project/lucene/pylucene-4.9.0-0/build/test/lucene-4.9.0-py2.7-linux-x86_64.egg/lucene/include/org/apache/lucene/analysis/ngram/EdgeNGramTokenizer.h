#ifndef org_apache_lucene_analysis_ngram_EdgeNGramTokenizer_H
#define org_apache_lucene_analysis_ngram_EdgeNGramTokenizer_H

#include "org/apache/lucene/analysis/ngram/NGramTokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
        class Version;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ngram {

          class EdgeNGramTokenizer : public ::org::apache::lucene::analysis::ngram::NGramTokenizer {
          public:
            enum {
              mid_init$_47cfcf59,
              mid_init$_0c87564f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EdgeNGramTokenizer(jobject obj) : ::org::apache::lucene::analysis::ngram::NGramTokenizer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            EdgeNGramTokenizer(const EdgeNGramTokenizer& obj) : ::org::apache::lucene::analysis::ngram::NGramTokenizer(obj) {}

            static jint DEFAULT_MAX_GRAM_SIZE;
            static jint DEFAULT_MIN_GRAM_SIZE;

            EdgeNGramTokenizer(const ::org::apache::lucene::util::Version &, const ::java::io::Reader &, jint, jint);
            EdgeNGramTokenizer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &, jint, jint);
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
          extern PyTypeObject PY_TYPE(EdgeNGramTokenizer);

          class t_EdgeNGramTokenizer {
          public:
            PyObject_HEAD
            EdgeNGramTokenizer object;
            static PyObject *wrap_Object(const EdgeNGramTokenizer&);
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
