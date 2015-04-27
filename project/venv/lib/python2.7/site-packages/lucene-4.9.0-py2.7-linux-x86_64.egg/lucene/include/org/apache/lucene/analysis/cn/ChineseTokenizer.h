#ifndef org_apache_lucene_analysis_cn_ChineseTokenizer_H
#define org_apache_lucene_analysis_cn_ChineseTokenizer_H

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
        namespace cn {

          class ChineseTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
          public:
            enum {
              mid_init$_cf2e3c10,
              mid_init$_5877b8f0,
              mid_end_54c6a166,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ChineseTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ChineseTokenizer(const ChineseTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            ChineseTokenizer(const ::java::io::Reader &);
            ChineseTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &);

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
        namespace cn {
          extern PyTypeObject PY_TYPE(ChineseTokenizer);

          class t_ChineseTokenizer {
          public:
            PyObject_HEAD
            ChineseTokenizer object;
            static PyObject *wrap_Object(const ChineseTokenizer&);
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
