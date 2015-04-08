#ifndef org_apache_lucene_search_similarities_LMJelinekMercerSimilarity_H
#define org_apache_lucene_search_similarities_LMJelinekMercerSimilarity_H

#include "org/apache/lucene/search/similarities/LMSimilarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class LMSimilarity$CollectionModel;
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

          class LMJelinekMercerSimilarity : public ::org::apache::lucene::search::similarities::LMSimilarity {
          public:
            enum {
              mid_init$_06298cab,
              mid_init$_75020b37,
              mid_getLambda_54c6a176,
              mid_getName_14c7b5c5,
              mid_score_63482206,
              mid_explain_347d95f8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LMJelinekMercerSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::LMSimilarity(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LMJelinekMercerSimilarity(const LMJelinekMercerSimilarity& obj) : ::org::apache::lucene::search::similarities::LMSimilarity(obj) {}

            LMJelinekMercerSimilarity(jfloat);
            LMJelinekMercerSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &, jfloat);

            jfloat getLambda() const;
            ::java::lang::String getName() const;
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
          extern PyTypeObject PY_TYPE(LMJelinekMercerSimilarity);

          class t_LMJelinekMercerSimilarity {
          public:
            PyObject_HEAD
            LMJelinekMercerSimilarity object;
            static PyObject *wrap_Object(const LMJelinekMercerSimilarity&);
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
