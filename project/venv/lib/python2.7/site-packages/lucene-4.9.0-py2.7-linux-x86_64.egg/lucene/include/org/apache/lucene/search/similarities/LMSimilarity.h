#ifndef org_apache_lucene_search_similarities_LMSimilarity_H
#define org_apache_lucene_search_similarities_LMSimilarity_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

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

          class LMSimilarity : public ::org::apache::lucene::search::similarities::SimilarityBase {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_fb5c3f12,
              mid_getName_14c7b5c5,
              mid_toString_14c7b5c5,
              mid_explain_347d95f8,
              mid_fillBasicStats_c856a532,
              mid_newStats_5129800c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LMSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LMSimilarity(const LMSimilarity& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            LMSimilarity();
            LMSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &);

            ::java::lang::String getName() const;
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
          extern PyTypeObject PY_TYPE(LMSimilarity);

          class t_LMSimilarity {
          public:
            PyObject_HEAD
            LMSimilarity object;
            static PyObject *wrap_Object(const LMSimilarity&);
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
