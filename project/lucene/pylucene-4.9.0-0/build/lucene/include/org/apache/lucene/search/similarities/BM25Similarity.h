#ifndef org_apache_lucene_search_similarities_BM25Similarity_H
#define org_apache_lucene_search_similarities_BM25Similarity_H

#include "org/apache/lucene/search/similarities/Similarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
        class FieldInvertState;
      }
      namespace search {
        class TermStatistics;
        class Explanation;
        namespace similarities {
          class Similarity$SimScorer;
          class Similarity$SimWeight;
        }
        class CollectionStatistics;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class BM25Similarity : public ::org::apache::lucene::search::similarities::Similarity {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_f1b0c004,
              mid_computeNorm_6ff84e0e,
              mid_computeWeight_8bb6ee0b,
              mid_getB_54c6a176,
              mid_getDiscountOverlaps_54c6a16a,
              mid_getK1_54c6a176,
              mid_idfExplain_9dde2121,
              mid_idfExplain_be4c9f2b,
              mid_setDiscountOverlaps_bb0c767f,
              mid_simScorer_9a2cfed8,
              mid_toString_14c7b5c5,
              mid_decodeNormValue_b2271697,
              mid_sloppyFreq_39c7bd2c,
              mid_scorePayload_ffd34a82,
              mid_avgFieldLength_48af4d71,
              mid_encodeNormValue_77691ed7,
              mid_idf_a7e12cb4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BM25Similarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BM25Similarity(const BM25Similarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            BM25Similarity();
            BM25Similarity(jfloat, jfloat);

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            ::org::apache::lucene::search::similarities::Similarity$SimWeight computeWeight(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            jfloat getB() const;
            jboolean getDiscountOverlaps() const;
            jfloat getK1() const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const ::org::apache::lucene::search::TermStatistics &) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            void setDiscountOverlaps(jboolean) const;
            ::org::apache::lucene::search::similarities::Similarity$SimScorer simScorer(const ::org::apache::lucene::search::similarities::Similarity$SimWeight &, const ::org::apache::lucene::index::AtomicReaderContext &) const;
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
          extern PyTypeObject PY_TYPE(BM25Similarity);

          class t_BM25Similarity {
          public:
            PyObject_HEAD
            BM25Similarity object;
            static PyObject *wrap_Object(const BM25Similarity&);
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
