#ifndef org_apache_lucene_search_similarities_LMSimilarity$CollectionModel_H
#define org_apache_lucene_search_similarities_LMSimilarity$CollectionModel_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class BasicStats;
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

          class LMSimilarity$CollectionModel : public ::java::lang::Object {
          public:
            enum {
              mid_computeProbability_cb225ea0,
              mid_getName_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LMSimilarity$CollectionModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LMSimilarity$CollectionModel(const LMSimilarity$CollectionModel& obj) : ::java::lang::Object(obj) {}

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
          extern PyTypeObject PY_TYPE(LMSimilarity$CollectionModel);

          class t_LMSimilarity$CollectionModel {
          public:
            PyObject_HEAD
            LMSimilarity$CollectionModel object;
            static PyObject *wrap_Object(const LMSimilarity$CollectionModel&);
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
