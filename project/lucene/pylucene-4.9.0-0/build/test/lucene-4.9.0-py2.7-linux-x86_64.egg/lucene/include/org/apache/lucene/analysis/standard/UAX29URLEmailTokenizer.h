#ifndef org_apache_lucene_analysis_standard_UAX29URLEmailTokenizer_H
#define org_apache_lucene_analysis_standard_UAX29URLEmailTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

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
    class String;
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
        namespace standard {

          class UAX29URLEmailTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
          public:
            enum {
              mid_init$_7997a391,
              mid_init$_be7a3ecf,
              mid_close_54c6a166,
              mid_end_54c6a166,
              mid_getMaxTokenLength_54c6a179,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              mid_setMaxTokenLength_39c7bd3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UAX29URLEmailTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            UAX29URLEmailTokenizer(const UAX29URLEmailTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint ALPHANUM;
            static jint EMAIL;
            static jint HANGUL;
            static jint HIRAGANA;
            static jint IDEOGRAPHIC;
            static jint KATAKANA;
            static jint NUM;
            static jint SOUTHEAST_ASIAN;
            static JArray< ::java::lang::String > *TOKEN_TYPES;
            static jint URL;

            UAX29URLEmailTokenizer(const ::org::apache::lucene::util::Version &, const ::java::io::Reader &);
            UAX29URLEmailTokenizer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &);

            void close() const;
            void end() const;
            jint getMaxTokenLength() const;
            jboolean incrementToken() const;
            void reset() const;
            void setMaxTokenLength(jint) const;
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
        namespace standard {
          extern PyTypeObject PY_TYPE(UAX29URLEmailTokenizer);

          class t_UAX29URLEmailTokenizer {
          public:
            PyObject_HEAD
            UAX29URLEmailTokenizer object;
            static PyObject *wrap_Object(const UAX29URLEmailTokenizer&);
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
