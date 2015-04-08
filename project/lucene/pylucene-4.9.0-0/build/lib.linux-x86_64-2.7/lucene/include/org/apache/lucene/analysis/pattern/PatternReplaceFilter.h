#ifndef org_apache_lucene_analysis_pattern_PatternReplaceFilter_H
#define org_apache_lucene_analysis_pattern_PatternReplaceFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
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
    namespace regex {
      class Pattern;
    }
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {

          class PatternReplaceFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_afb3adc3,
              mid_incrementToken_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternReplaceFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PatternReplaceFilter(const PatternReplaceFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            PatternReplaceFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::regex::Pattern &, const ::java::lang::String &, jboolean);

            jboolean incrementToken() const;
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
        namespace pattern {
          extern PyTypeObject PY_TYPE(PatternReplaceFilter);

          class t_PatternReplaceFilter {
          public:
            PyObject_HEAD
            PatternReplaceFilter object;
            static PyObject *wrap_Object(const PatternReplaceFilter&);
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
