#ifndef org_apache_lucene_analysis_fr_FrenchStemFilter_H
#define org_apache_lucene_analysis_fr_FrenchStemFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace fr {
          class FrenchStemmer;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace fr {

          class FrenchStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_c7c794dc,
              mid_incrementToken_54c6a16a,
              mid_setStemmer_d53125fa,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FrenchStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FrenchStemFilter(const FrenchStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            FrenchStemFilter(const ::org::apache::lucene::analysis::TokenStream &);

            jboolean incrementToken() const;
            void setStemmer(const ::org::apache::lucene::analysis::fr::FrenchStemmer &) const;
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
        namespace fr {
          extern PyTypeObject PY_TYPE(FrenchStemFilter);

          class t_FrenchStemFilter {
          public:
            PyObject_HEAD
            FrenchStemFilter object;
            static PyObject *wrap_Object(const FrenchStemFilter&);
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
