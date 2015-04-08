#ifndef org_apache_lucene_analysis_pattern_PatternTokenizer_H
#define org_apache_lucene_analysis_pattern_PatternTokenizer_H

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
  namespace util {
    namespace regex {
      class Pattern;
    }
  }
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
        namespace pattern {

          class PatternTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
          public:
            enum {
              mid_init$_f57c1546,
              mid_init$_b5faf662,
              mid_end_54c6a166,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PatternTokenizer(const PatternTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            PatternTokenizer(const ::java::io::Reader &, const ::java::util::regex::Pattern &, jint);
            PatternTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &, const ::java::util::regex::Pattern &, jint);

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
        namespace pattern {
          extern PyTypeObject PY_TYPE(PatternTokenizer);

          class t_PatternTokenizer {
          public:
            PyObject_HEAD
            PatternTokenizer object;
            static PyObject *wrap_Object(const PatternTokenizer&);
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
