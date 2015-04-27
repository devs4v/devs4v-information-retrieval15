#ifndef org_apache_lucene_analysis_core_KeywordTokenizer_H
#define org_apache_lucene_analysis_core_KeywordTokenizer_H

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
        namespace core {

          class KeywordTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
          public:
            enum {
              mid_init$_cf2e3c10,
              mid_init$_8c604f56,
              mid_init$_338c3a92,
              mid_end_54c6a166,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KeywordTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            KeywordTokenizer(const KeywordTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint DEFAULT_BUFFER_SIZE;

            KeywordTokenizer(const ::java::io::Reader &);
            KeywordTokenizer(const ::java::io::Reader &, jint);
            KeywordTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &, jint);

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
        namespace core {
          extern PyTypeObject PY_TYPE(KeywordTokenizer);

          class t_KeywordTokenizer {
          public:
            PyObject_HEAD
            KeywordTokenizer object;
            static PyObject *wrap_Object(const KeywordTokenizer&);
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
