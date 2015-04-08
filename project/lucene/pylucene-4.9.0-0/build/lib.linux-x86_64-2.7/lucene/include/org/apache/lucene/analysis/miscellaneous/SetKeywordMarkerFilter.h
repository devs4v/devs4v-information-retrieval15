#ifndef org_apache_lucene_analysis_miscellaneous_SetKeywordMarkerFilter_H
#define org_apache_lucene_analysis_miscellaneous_SetKeywordMarkerFilter_H

#include "org/apache/lucene/analysis/miscellaneous/KeywordMarkerFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class CharArraySet;
        }
        class TokenStream;
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
        namespace miscellaneous {

          class SetKeywordMarkerFilter : public ::org::apache::lucene::analysis::miscellaneous::KeywordMarkerFilter {
          public:
            enum {
              mid_init$_64fb9de3,
              mid_isKeyword_54c6a16a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SetKeywordMarkerFilter(jobject obj) : ::org::apache::lucene::analysis::miscellaneous::KeywordMarkerFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SetKeywordMarkerFilter(const SetKeywordMarkerFilter& obj) : ::org::apache::lucene::analysis::miscellaneous::KeywordMarkerFilter(obj) {}

            SetKeywordMarkerFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::util::CharArraySet &);
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
          extern PyTypeObject PY_TYPE(SetKeywordMarkerFilter);

          class t_SetKeywordMarkerFilter {
          public:
            PyObject_HEAD
            SetKeywordMarkerFilter object;
            static PyObject *wrap_Object(const SetKeywordMarkerFilter&);
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
