#ifndef org_apache_lucene_analysis_miscellaneous_PerFieldAnalyzerWrapper_H
#define org_apache_lucene_analysis_miscellaneous_PerFieldAnalyzerWrapper_H

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
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class PerFieldAnalyzerWrapper : public ::org::apache::lucene::analysis::AnalyzerWrapper {
          public:
            enum {
              mid_init$_31619410,
              mid_init$_b5f2d646,
              mid_toString_14c7b5c5,
              mid_getWrappedAnalyzer_29a2299f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PerFieldAnalyzerWrapper(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PerFieldAnalyzerWrapper(const PerFieldAnalyzerWrapper& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

            PerFieldAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &);
            PerFieldAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &, const ::java::util::Map &);

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
          extern PyTypeObject PY_TYPE(PerFieldAnalyzerWrapper);

          class t_PerFieldAnalyzerWrapper {
          public:
            PyObject_HEAD
            PerFieldAnalyzerWrapper object;
            static PyObject *wrap_Object(const PerFieldAnalyzerWrapper&);
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
