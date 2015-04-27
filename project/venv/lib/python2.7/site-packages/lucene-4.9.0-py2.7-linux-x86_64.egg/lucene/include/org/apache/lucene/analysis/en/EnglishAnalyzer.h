#ifndef org_apache_lucene_analysis_en_EnglishAnalyzer_H
#define org_apache_lucene_analysis_en_EnglishAnalyzer_H

#include "org/apache/lucene/analysis/util/StopwordAnalyzerBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
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
        namespace en {

          class EnglishAnalyzer : public ::org::apache::lucene::analysis::util::StopwordAnalyzerBase {
          public:
            enum {
              mid_init$_0d96cf33,
              mid_init$_83eafe28,
              mid_init$_c9d7e4a3,
              mid_getDefaultStopSet_d2d3505c,
              mid_createComponents_1be39cae,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EnglishAnalyzer(jobject obj) : ::org::apache::lucene::analysis::util::StopwordAnalyzerBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            EnglishAnalyzer(const EnglishAnalyzer& obj) : ::org::apache::lucene::analysis::util::StopwordAnalyzerBase(obj) {}

            EnglishAnalyzer(const ::org::apache::lucene::util::Version &);
            EnglishAnalyzer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::util::CharArraySet &);
            EnglishAnalyzer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::util::CharArraySet &, const ::org::apache::lucene::analysis::util::CharArraySet &);

            static ::org::apache::lucene::analysis::util::CharArraySet getDefaultStopSet();
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
        namespace en {
          extern PyTypeObject PY_TYPE(EnglishAnalyzer);

          class t_EnglishAnalyzer {
          public:
            PyObject_HEAD
            EnglishAnalyzer object;
            static PyObject *wrap_Object(const EnglishAnalyzer&);
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
