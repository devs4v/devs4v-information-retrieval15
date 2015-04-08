#ifndef org_apache_lucene_analysis_core_StopAnalyzer_H
#define org_apache_lucene_analysis_core_StopAnalyzer_H

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
  namespace io {
    class IOException;
    class File;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace core {

          class StopAnalyzer : public ::org::apache::lucene::analysis::util::StopwordAnalyzerBase {
          public:
            enum {
              mid_init$_0d96cf33,
              mid_init$_7997a391,
              mid_init$_f88c7fb6,
              mid_init$_83eafe28,
              mid_createComponents_1be39cae,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StopAnalyzer(jobject obj) : ::org::apache::lucene::analysis::util::StopwordAnalyzerBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            StopAnalyzer(const StopAnalyzer& obj) : ::org::apache::lucene::analysis::util::StopwordAnalyzerBase(obj) {}

            static ::org::apache::lucene::analysis::util::CharArraySet *ENGLISH_STOP_WORDS_SET;

            StopAnalyzer(const ::org::apache::lucene::util::Version &);
            StopAnalyzer(const ::org::apache::lucene::util::Version &, const ::java::io::Reader &);
            StopAnalyzer(const ::org::apache::lucene::util::Version &, const ::java::io::File &);
            StopAnalyzer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::util::CharArraySet &);
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
          extern PyTypeObject PY_TYPE(StopAnalyzer);

          class t_StopAnalyzer {
          public:
            PyObject_HEAD
            StopAnalyzer object;
            static PyObject *wrap_Object(const StopAnalyzer&);
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
