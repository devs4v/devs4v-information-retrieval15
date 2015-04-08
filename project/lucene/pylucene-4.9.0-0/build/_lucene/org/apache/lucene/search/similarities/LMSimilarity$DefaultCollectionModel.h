#ifndef org_apache_lucene_search_similarities_LMSimilarity$DefaultCollectionModel_H
#define org_apache_lucene_search_similarities_LMSimilarity$DefaultCollectionModel_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class BasicStats;
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

          class LMSimilarity$DefaultCollectionModel : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_computeProbability_cb225ea0,
              mid_getName_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LMSimilarity$DefaultCollectionModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LMSimilarity$DefaultCollectionModel(const LMSimilarity$DefaultCollectionModel& obj) : ::java::lang::Object(obj) {}

            LMSimilarity$DefaultCollectionModel();

            jfloat computeProbability(const ::org::apache::lucene::search::similarities::BasicStats &) const;
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
          extern PyTypeObject PY_TYPE(LMSimilarity$DefaultCollectionModel);

          class t_LMSimilarity$DefaultCollectionModel {
          public:
            PyObject_HEAD
            LMSimilarity$DefaultCollectionModel object;
            static PyObject *wrap_Object(const LMSimilarity$DefaultCollectionModel&);
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
