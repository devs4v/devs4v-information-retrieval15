#ifndef org_apache_lucene_search_similarities_IBSimilarity_H
#define org_apache_lucene_search_similarities_IBSimilarity_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Distribution;
          class Normalization;
          class Lambda;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class IBSimilarity : public ::org::apache::lucene::search::similarities::SimilarityBase {
          public:
            enum {
              mid_init$_c1a9dba4,
              mid_getDistribution_997d9b00,
              mid_getLambda_c82cedff,
              mid_getNormalization_d2e76e28,
              mid_toString_14c7b5c5,
              mid_score_63482206,
              mid_explain_347d95f8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IBSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            IBSimilarity(const IBSimilarity& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            IBSimilarity(const ::org::apache::lucene::search::similarities::Distribution &, const ::org::apache::lucene::search::similarities::Lambda &, const ::org::apache::lucene::search::similarities::Normalization &);

            ::org::apache::lucene::search::similarities::Distribution getDistribution() const;
            ::org::apache::lucene::search::similarities::Lambda getLambda() const;
            ::org::apache::lucene::search::similarities::Normalization getNormalization() const;
            ::java::lang::String toString() const;
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
      namespace search {
        namespace similarities {
          extern PyTypeObject PY_TYPE(IBSimilarity);

          class t_IBSimilarity {
          public:
            PyObject_HEAD
            IBSimilarity object;
            static PyObject *wrap_Object(const IBSimilarity&);
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
