#ifndef org_apache_lucene_search_similarities_DFRSimilarity_H
#define org_apache_lucene_search_similarities_DFRSimilarity_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class BasicModel;
          class AfterEffect;
          class Normalization;
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

          class DFRSimilarity : public ::org::apache::lucene::search::similarities::SimilarityBase {
          public:
            enum {
              mid_init$_0c253c94,
              mid_getAfterEffect_b58cd920,
              mid_getBasicModel_05e8921f,
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

            explicit DFRSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DFRSimilarity(const DFRSimilarity& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            DFRSimilarity(const ::org::apache::lucene::search::similarities::BasicModel &, const ::org::apache::lucene::search::similarities::AfterEffect &, const ::org::apache::lucene::search::similarities::Normalization &);

            ::org::apache::lucene::search::similarities::AfterEffect getAfterEffect() const;
            ::org::apache::lucene::search::similarities::BasicModel getBasicModel() const;
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
          extern PyTypeObject PY_TYPE(DFRSimilarity);

          class t_DFRSimilarity {
          public:
            PyObject_HEAD
            DFRSimilarity object;
            static PyObject *wrap_Object(const DFRSimilarity&);
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
