#ifndef org_apache_lucene_analysis_nl_DutchStemFilter_H
#define org_apache_lucene_analysis_nl_DutchStemFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace nl {
          class DutchStemmer;
        }
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace util {
    class Map;
    class HashMap;
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
        namespace nl {

          class DutchStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_c7c794dc,
              mid_init$_d492dbba,
              mid_incrementToken_54c6a16a,
              mid_setStemDictionary_70cdf88c,
              mid_setStemmer_b66a40d3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DutchStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DutchStemFilter(const DutchStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            DutchStemFilter(const ::org::apache::lucene::analysis::TokenStream &);
            DutchStemFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::Map &);

            jboolean incrementToken() const;
            void setStemDictionary(const ::java::util::HashMap &) const;
            void setStemmer(const ::org::apache::lucene::analysis::nl::DutchStemmer &) const;
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
        namespace nl {
          extern PyTypeObject PY_TYPE(DutchStemFilter);

          class t_DutchStemFilter {
          public:
            PyObject_HEAD
            DutchStemFilter object;
            static PyObject *wrap_Object(const DutchStemFilter&);
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
