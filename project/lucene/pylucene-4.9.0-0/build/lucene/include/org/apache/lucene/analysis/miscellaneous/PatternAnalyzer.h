#ifndef org_apache_lucene_analysis_miscellaneous_PatternAnalyzer_H
#define org_apache_lucene_analysis_miscellaneous_PatternAnalyzer_H

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
    class Object;
    class Class;
    class String;
  }
  namespace util {
    namespace regex {
      class Pattern;
    }
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
        namespace miscellaneous {

          class PatternAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
          public:
            enum {
              mid_init$_ed1ef6b5,
              mid_createComponents_1be39cae,
              mid_createComponents_317b7f84,
              mid_equals_290588e2,
              mid_hashCode_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PatternAnalyzer(const PatternAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            static PatternAnalyzer *DEFAULT_ANALYZER;
            static PatternAnalyzer *EXTENDED_ANALYZER;
            static ::java::util::regex::Pattern *NON_WORD_PATTERN;
            static ::java::util::regex::Pattern *WHITESPACE_PATTERN;

            PatternAnalyzer(const ::org::apache::lucene::util::Version &, const ::java::util::regex::Pattern &, jboolean, const ::org::apache::lucene::analysis::util::CharArraySet &);

            ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents createComponents(const ::java::lang::String &, const ::java::io::Reader &) const;
            ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents createComponents(const ::java::lang::String &, const ::java::io::Reader &, const ::java::lang::String &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
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
          extern PyTypeObject PY_TYPE(PatternAnalyzer);

          class t_PatternAnalyzer {
          public:
            PyObject_HEAD
            PatternAnalyzer object;
            static PyObject *wrap_Object(const PatternAnalyzer&);
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
