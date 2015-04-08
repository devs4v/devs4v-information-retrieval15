#ifndef org_apache_lucene_analysis_miscellaneous_PatternKeywordMarkerFilter_H
#define org_apache_lucene_analysis_miscellaneous_PatternKeywordMarkerFilter_H

#include "org/apache/lucene/analysis/miscellaneous/KeywordMarkerFilter.h"

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
    class Class;
  }
  namespace util {
    namespace regex {
      class Pattern;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class PatternKeywordMarkerFilter : public ::org::apache::lucene::analysis::miscellaneous::KeywordMarkerFilter {
          public:
            enum {
              mid_init$_df7fd280,
              mid_isKeyword_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternKeywordMarkerFilter(jobject obj) : ::org::apache::lucene::analysis::miscellaneous::KeywordMarkerFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PatternKeywordMarkerFilter(const PatternKeywordMarkerFilter& obj) : ::org::apache::lucene::analysis::miscellaneous::KeywordMarkerFilter(obj) {}

            PatternKeywordMarkerFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::regex::Pattern &);
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
          extern PyTypeObject PY_TYPE(PatternKeywordMarkerFilter);

          class t_PatternKeywordMarkerFilter {
          public:
            PyObject_HEAD
            PatternKeywordMarkerFilter object;
            static PyObject *wrap_Object(const PatternKeywordMarkerFilter&);
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
