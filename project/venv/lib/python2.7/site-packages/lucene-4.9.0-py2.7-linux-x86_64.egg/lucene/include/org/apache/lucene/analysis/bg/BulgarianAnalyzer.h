#ifndef org_apache_lucene_analysis_bg_BulgarianAnalyzer_H
#define org_apache_lucene_analysis_bg_BulgarianAnalyzer_H

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
        class Analyzer$TokenStreamComponents;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace bg {

          class BulgarianAnalyzer : public ::org::apache::lucene::analysis::util::StopwordAnalyzerBase {
          public:
            enum {
              mid_init$_0d96cf33,
              mid_init$_83eafe28,
              mid_init$_c9d7e4a3,
              mid_createComponents_1be39cae,
              mid_getDefaultStopSet_d2d3505c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BulgarianAnalyzer(jobject obj) : ::org::apache::lucene::analysis::util::StopwordAnalyzerBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BulgarianAnalyzer(const BulgarianAnalyzer& obj) : ::org::apache::lucene::analysis::util::StopwordAnalyzerBase(obj) {}

            static ::java::lang::String *DEFAULT_STOPWORD_FILE;

            BulgarianAnalyzer(const ::org::apache::lucene::util::Version &);
            BulgarianAnalyzer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::util::CharArraySet &);
            BulgarianAnalyzer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::util::CharArraySet &, const ::org::apache::lucene::analysis::util::CharArraySet &);

            ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents createComponents(const ::java::lang::String &, const ::java::io::Reader &) const;
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
        namespace bg {
          extern PyTypeObject PY_TYPE(BulgarianAnalyzer);

          class t_BulgarianAnalyzer {
          public:
            PyObject_HEAD
            BulgarianAnalyzer object;
            static PyObject *wrap_Object(const BulgarianAnalyzer&);
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
