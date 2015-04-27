#ifndef org_apache_lucene_analysis_util_StopwordAnalyzerBase_H
#define org_apache_lucene_analysis_util_StopwordAnalyzerBase_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class CharArraySet;
        }
      }
    }
  }
}
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
        namespace util {

          class StopwordAnalyzerBase : public ::org::apache::lucene::analysis::Analyzer {
          public:
            enum {
              mid_getStopwordSet_d2d3505c,
              mid_loadStopwordSet_b3c09259,
              mid_loadStopwordSet_b1bbe8e8,
              mid_loadStopwordSet_3cef351b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StopwordAnalyzerBase(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            StopwordAnalyzerBase(const StopwordAnalyzerBase& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            ::org::apache::lucene::analysis::util::CharArraySet getStopwordSet() const;
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
          extern PyTypeObject PY_TYPE(StopwordAnalyzerBase);

          class t_StopwordAnalyzerBase {
          public:
            PyObject_HEAD
            StopwordAnalyzerBase object;
            static PyObject *wrap_Object(const StopwordAnalyzerBase&);
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
