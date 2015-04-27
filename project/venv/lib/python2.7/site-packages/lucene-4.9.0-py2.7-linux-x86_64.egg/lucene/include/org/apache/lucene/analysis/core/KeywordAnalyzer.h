#ifndef org_apache_lucene_analysis_core_KeywordAnalyzer_H
#define org_apache_lucene_analysis_core_KeywordAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace core {

          class KeywordAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
          public:
            enum {
              mid_init$_54c6a166,
              mid_createComponents_1be39cae,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KeywordAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            KeywordAnalyzer(const KeywordAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            KeywordAnalyzer();
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
          extern PyTypeObject PY_TYPE(KeywordAnalyzer);

          class t_KeywordAnalyzer {
          public:
            PyObject_HEAD
            KeywordAnalyzer object;
            static PyObject *wrap_Object(const KeywordAnalyzer&);
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
