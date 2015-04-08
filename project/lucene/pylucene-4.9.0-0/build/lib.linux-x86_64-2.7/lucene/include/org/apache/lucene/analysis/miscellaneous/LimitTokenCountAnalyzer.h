#ifndef org_apache_lucene_analysis_miscellaneous_LimitTokenCountAnalyzer_H
#define org_apache_lucene_analysis_miscellaneous_LimitTokenCountAnalyzer_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class LimitTokenCountAnalyzer : public ::org::apache::lucene::analysis::AnalyzerWrapper {
          public:
            enum {
              mid_init$_e882998a,
              mid_init$_79b44903,
              mid_toString_14c7b5c5,
              mid_getWrappedAnalyzer_29a2299f,
              mid_wrapComponents_46d74455,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LimitTokenCountAnalyzer(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LimitTokenCountAnalyzer(const LimitTokenCountAnalyzer& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

            LimitTokenCountAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jint);
            LimitTokenCountAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jint, jboolean);

            ::java::lang::String toString() const;
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
        namespace miscellaneous {
          extern PyTypeObject PY_TYPE(LimitTokenCountAnalyzer);

          class t_LimitTokenCountAnalyzer {
          public:
            PyObject_HEAD
            LimitTokenCountAnalyzer object;
            static PyObject *wrap_Object(const LimitTokenCountAnalyzer&);
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
