#ifndef org_apache_lucene_search_similarities_LMSimilarity$LMStats_H
#define org_apache_lucene_search_similarities_LMSimilarity$LMStats_H

#include "org/apache/lucene/search/similarities/BasicStats.h"

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

          class LMSimilarity$LMStats : public ::org::apache::lucene::search::similarities::BasicStats {
          public:
            enum {
              mid_init$_f0649ce1,
              mid_getCollectionProbability_54c6a176,
              mid_setCollectionProbability_06298cab,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LMSimilarity$LMStats(jobject obj) : ::org::apache::lucene::search::similarities::BasicStats(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LMSimilarity$LMStats(const LMSimilarity$LMStats& obj) : ::org::apache::lucene::search::similarities::BasicStats(obj) {}

            LMSimilarity$LMStats(const ::java::lang::String &, jfloat);

            jfloat getCollectionProbability() const;
            void setCollectionProbability(jfloat) const;
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
          extern PyTypeObject PY_TYPE(LMSimilarity$LMStats);

          class t_LMSimilarity$LMStats {
          public:
            PyObject_HEAD
            LMSimilarity$LMStats object;
            static PyObject *wrap_Object(const LMSimilarity$LMStats&);
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
