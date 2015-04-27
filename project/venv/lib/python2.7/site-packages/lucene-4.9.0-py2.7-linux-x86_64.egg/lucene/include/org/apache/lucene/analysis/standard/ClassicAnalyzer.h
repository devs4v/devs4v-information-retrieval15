#ifndef org_apache_lucene_analysis_standard_ClassicAnalyzer_H
#define org_apache_lucene_analysis_standard_ClassicAnalyzer_H

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
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace standard {

          class ClassicAnalyzer : public ::org::apache::lucene::analysis::util::StopwordAnalyzerBase {
          public:
            enum {
              mid_init$_0d96cf33,
              mid_init$_7997a391,
              mid_init$_83eafe28,
              mid_getMaxTokenLength_54c6a179,
              mid_setMaxTokenLength_39c7bd3c,
              mid_createComponents_1be39cae,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ClassicAnalyzer(jobject obj) : ::org::apache::lucene::analysis::util::StopwordAnalyzerBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ClassicAnalyzer(const ClassicAnalyzer& obj) : ::org::apache::lucene::analysis::util::StopwordAnalyzerBase(obj) {}

            static jint DEFAULT_MAX_TOKEN_LENGTH;
            static ::org::apache::lucene::analysis::util::CharArraySet *STOP_WORDS_SET;

            ClassicAnalyzer(const ::org::apache::lucene::util::Version &);
            ClassicAnalyzer(const ::org::apache::lucene::util::Version &, const ::java::io::Reader &);
            ClassicAnalyzer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::util::CharArraySet &);

            jint getMaxTokenLength() const;
            void setMaxTokenLength(jint) const;
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
        namespace standard {
          extern PyTypeObject PY_TYPE(ClassicAnalyzer);

          class t_ClassicAnalyzer {
          public:
            PyObject_HEAD
            ClassicAnalyzer object;
            static PyObject *wrap_Object(const ClassicAnalyzer&);
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
