#ifndef org_apache_lucene_search_similarities_BasicStats_H
#define org_apache_lucene_search_similarities_BasicStats_H

#include "org/apache/lucene/search/similarities/Similarity$SimWeight.h"

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

          class BasicStats : public ::org::apache::lucene::search::similarities::Similarity$SimWeight {
          public:
            enum {
              mid_init$_f0649ce1,
              mid_getAvgFieldLength_54c6a176,
              mid_getDocFreq_54c6a17a,
              mid_getNumberOfDocuments_54c6a17a,
              mid_getNumberOfFieldTokens_54c6a17a,
              mid_getTotalBoost_54c6a176,
              mid_getTotalTermFreq_54c6a17a,
              mid_getValueForNormalization_54c6a176,
              mid_normalize_f1b0c004,
              mid_setAvgFieldLength_06298cab,
              mid_setDocFreq_0ee6df2f,
              mid_setNumberOfDocuments_0ee6df2f,
              mid_setNumberOfFieldTokens_0ee6df2f,
              mid_setTotalTermFreq_0ee6df2f,
              mid_rawNormalizationValue_54c6a176,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasicStats(jobject obj) : ::org::apache::lucene::search::similarities::Similarity$SimWeight(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BasicStats(const BasicStats& obj) : ::org::apache::lucene::search::similarities::Similarity$SimWeight(obj) {}

            BasicStats(const ::java::lang::String &, jfloat);

            jfloat getAvgFieldLength() const;
            jlong getDocFreq() const;
            jlong getNumberOfDocuments() const;
            jlong getNumberOfFieldTokens() const;
            jfloat getTotalBoost() const;
            jlong getTotalTermFreq() const;
            jfloat getValueForNormalization() const;
            void normalize(jfloat, jfloat) const;
            void setAvgFieldLength(jfloat) const;
            void setDocFreq(jlong) const;
            void setNumberOfDocuments(jlong) const;
            void setNumberOfFieldTokens(jlong) const;
            void setTotalTermFreq(jlong) const;
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
          extern PyTypeObject PY_TYPE(BasicStats);

          class t_BasicStats {
          public:
            PyObject_HEAD
            BasicStats object;
            static PyObject *wrap_Object(const BasicStats&);
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
