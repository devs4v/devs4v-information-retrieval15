#ifndef org_apache_lucene_analysis_commongrams_CommonGramsFilter_H
#define org_apache_lucene_analysis_commongrams_CommonGramsFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

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
        class TokenStream;
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
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace commongrams {

          class CommonGramsFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_e67dd59e,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CommonGramsFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CommonGramsFilter(const CommonGramsFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static ::java::lang::String *GRAM_TYPE;

            CommonGramsFilter(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::util::CharArraySet &);

            jboolean incrementToken() const;
            void reset() const;
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
        namespace commongrams {
          extern PyTypeObject PY_TYPE(CommonGramsFilter);

          class t_CommonGramsFilter {
          public:
            PyObject_HEAD
            CommonGramsFilter object;
            static PyObject *wrap_Object(const CommonGramsFilter&);
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
