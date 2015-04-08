#ifndef org_apache_lucene_analysis_de_GermanStemFilter_H
#define org_apache_lucene_analysis_de_GermanStemFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace de {
          class GermanStemmer;
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
        namespace de {

          class GermanStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_c7c794dc,
              mid_incrementToken_54c6a16a,
              mid_setStemmer_4867d4cf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GermanStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            GermanStemFilter(const GermanStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            GermanStemFilter(const ::org::apache::lucene::analysis::TokenStream &);

            jboolean incrementToken() const;
            void setStemmer(const ::org::apache::lucene::analysis::de::GermanStemmer &) const;
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
        namespace de {
          extern PyTypeObject PY_TYPE(GermanStemFilter);

          class t_GermanStemFilter {
          public:
            PyObject_HEAD
            GermanStemFilter object;
            static PyObject *wrap_Object(const GermanStemFilter&);
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
