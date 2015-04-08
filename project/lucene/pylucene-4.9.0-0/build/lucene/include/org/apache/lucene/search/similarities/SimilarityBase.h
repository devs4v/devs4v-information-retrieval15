#ifndef org_apache_lucene_search_similarities_SimilarityBase_H
#define org_apache_lucene_search_similarities_SimilarityBase_H

#include "org/apache/lucene/search/similarities/Similarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
        class FieldInvertState;
      }
      namespace search {
        namespace similarities {
          class Similarity$SimWeight;
          class Similarity$SimScorer;
        }
        class TermStatistics;
        class CollectionStatistics;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
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

          class SimilarityBase : public ::org::apache::lucene::search::similarities::Similarity {
          public:
            enum {
              mid_init$_54c6a166,
              mid_computeNorm_6ff84e0e,
              mid_computeWeight_8bb6ee0b,
              mid_getDiscountOverlaps_54c6a16a,
              mid_log2_5d1c7657,
              mid_setDiscountOverlaps_bb0c767f,
              mid_simScorer_9a2cfed8,
              mid_toString_14c7b5c5,
              mid_score_63482206,
              mid_explain_347d95f8,
              mid_explain_be9c5a0c,
              mid_decodeNormValue_b2271697,
              mid_fillBasicStats_c856a532,
              mid_encodeNormValue_f1b0c010,
              mid_newStats_5129800c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimilarityBase(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SimilarityBase(const SimilarityBase& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            SimilarityBase();

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            ::org::apache::lucene::search::similarities::Similarity$SimWeight computeWeight(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            jboolean getDiscountOverlaps() const;
            static jdouble log2(jdouble);
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
          extern PyTypeObject PY_TYPE(SimilarityBase);

          class t_SimilarityBase {
          public:
            PyObject_HEAD
            SimilarityBase object;
            static PyObject *wrap_Object(const SimilarityBase&);
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
