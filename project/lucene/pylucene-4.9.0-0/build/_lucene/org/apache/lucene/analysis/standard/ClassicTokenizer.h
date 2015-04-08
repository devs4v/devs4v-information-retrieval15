#ifndef org_apache_lucene_analysis_standard_ClassicTokenizer_H
#define org_apache_lucene_analysis_standard_ClassicTokenizer_H

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
        namespace standard {

          class ClassicTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
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

            explicit ClassicTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ClassicTokenizer(const ClassicTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint ACRONYM;
            static jint ACRONYM_DEP;
            static jint ALPHANUM;
            static jint APOSTROPHE;
            static jint CJ;
            static jint COMPANY;
            static jint EMAIL;
            static jint HOST;
            static jint NUM;
            static JArray< ::java::lang::String > *TOKEN_TYPES;

            ClassicTokenizer(const ::org::apache::lucene::util::Version &, const ::java::io::Reader &);
            ClassicTokenizer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &);

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
          extern PyTypeObject PY_TYPE(ClassicTokenizer);

          class t_ClassicTokenizer {
          public:
            PyObject_HEAD
            ClassicTokenizer object;
            static PyObject *wrap_Object(const ClassicTokenizer&);
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
