#ifndef org_apache_lucene_analysis_cn_ChineseAnalyzer_H
#define org_apache_lucene_analysis_cn_ChineseAnalyzer_H

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
        namespace cn {

          class ChineseAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
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

            explicit ChineseAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ChineseAnalyzer(const ChineseAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            ChineseAnalyzer();
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
          extern PyTypeObject PY_TYPE(ChineseAnalyzer);

          class t_ChineseAnalyzer {
          public:
            PyObject_HEAD
            ChineseAnalyzer object;
            static PyObject *wrap_Object(const ChineseAnalyzer&);
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
