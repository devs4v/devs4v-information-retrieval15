#ifndef org_apache_lucene_analysis_util_SegmentingTokenizerBase_H
#define org_apache_lucene_analysis_util_SegmentingTokenizerBase_H

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
  namespace text {
    class BreakIterator;
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
        namespace util {

          class SegmentingTokenizerBase : public ::org::apache::lucene::analysis::Tokenizer {
          public:
            enum {
              mid_init$_42e90ef8,
              mid_init$_441b2340,
              mid_end_54c6a166,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              mid_setNextSentence_d8d154a6,
              mid_incrementWord_54c6a16a,
              mid_isSafeEnd_87fd5456,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SegmentingTokenizerBase(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SegmentingTokenizerBase(const SegmentingTokenizerBase& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            SegmentingTokenizerBase(const ::java::io::Reader &, const ::java::text::BreakIterator &);
            SegmentingTokenizerBase(const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &, const ::java::text::BreakIterator &);

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
        namespace util {
          extern PyTypeObject PY_TYPE(SegmentingTokenizerBase);

          class t_SegmentingTokenizerBase {
          public:
            PyObject_HEAD
            SegmentingTokenizerBase object;
            static PyObject *wrap_Object(const SegmentingTokenizerBase&);
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
