#ifndef org_apache_lucene_analysis_compound_CompoundWordTokenFilterBase_H
#define org_apache_lucene_analysis_compound_CompoundWordTokenFilterBase_H

#include "org/apache/lucene/analysis/TokenFilter.h"

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
        namespace compound {

          class CompoundWordTokenFilterBase : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              mid_decompose_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompoundWordTokenFilterBase(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CompoundWordTokenFilterBase(const CompoundWordTokenFilterBase& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint DEFAULT_MAX_SUBWORD_SIZE;
            static jint DEFAULT_MIN_SUBWORD_SIZE;
            static jint DEFAULT_MIN_WORD_SIZE;

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
        namespace compound {
          extern PyTypeObject PY_TYPE(CompoundWordTokenFilterBase);

          class t_CompoundWordTokenFilterBase {
          public:
            PyObject_HEAD
            CompoundWordTokenFilterBase object;
            static PyObject *wrap_Object(const CompoundWordTokenFilterBase&);
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
