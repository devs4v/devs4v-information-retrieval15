#ifndef org_apache_lucene_analysis_sv_SwedishAnalyzer_H
#define org_apache_lucene_analysis_sv_SwedishAnalyzer_H

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
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace sv {

          class SwedishAnalyzer : public ::org::apache::lucene::analysis::util::StopwordAnalyzerBase {
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

            explicit SwedishAnalyzer(jobject obj) : ::org::apache::lucene::analysis::util::StopwordAnalyzerBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SwedishAnalyzer(const SwedishAnalyzer& obj) : ::org::apache::lucene::analysis::util::StopwordAnalyzerBase(obj) {}

            static ::java::lang::String *DEFAULT_STOPWORD_FILE;

            SwedishAnalyzer(const ::org::apache::lucene::util::Version &);
            SwedishAnalyzer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::util::CharArraySet &);
            SwedishAnalyzer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::util::CharArraySet &, const ::org::apache::lucene::analysis::util::CharArraySet &);

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
        namespace sv {
          extern PyTypeObject PY_TYPE(SwedishAnalyzer);

          class t_SwedishAnalyzer {
          public:
            PyObject_HEAD
            SwedishAnalyzer object;
            static PyObject *wrap_Object(const SwedishAnalyzer&);
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
