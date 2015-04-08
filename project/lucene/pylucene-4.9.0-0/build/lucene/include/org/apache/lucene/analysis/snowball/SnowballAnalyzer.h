#ifndef org_apache_lucene_analysis_snowball_SnowballAnalyzer_H
#define org_apache_lucene_analysis_snowball_SnowballAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

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
    class String;
    class Class;
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
        namespace snowball {

          class SnowballAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
          public:
            enum {
              mid_init$_1d68b8f5,
              mid_init$_df6e5eaa,
              mid_createComponents_1be39cae,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SnowballAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SnowballAnalyzer(const SnowballAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            SnowballAnalyzer(const ::org::apache::lucene::util::Version &, const ::java::lang::String &);
            SnowballAnalyzer(const ::org::apache::lucene::util::Version &, const ::java::lang::String &, const ::org::apache::lucene::analysis::util::CharArraySet &);

            ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents createComponents(const ::java::lang::String &, const ::java::io::Reader &) const;
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
        namespace snowball {
          extern PyTypeObject PY_TYPE(SnowballAnalyzer);

          class t_SnowballAnalyzer {
          public:
            PyObject_HEAD
            SnowballAnalyzer object;
            static PyObject *wrap_Object(const SnowballAnalyzer&);
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
