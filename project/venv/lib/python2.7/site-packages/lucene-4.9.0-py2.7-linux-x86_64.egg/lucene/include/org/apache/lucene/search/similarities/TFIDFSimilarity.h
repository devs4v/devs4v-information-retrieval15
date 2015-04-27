#ifndef org_apache_lucene_search_similarities_TFIDFSimilarity_H
#define org_apache_lucene_search_similarities_TFIDFSimilarity_H

#include "org/apache/lucene/search/similarities/Similarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class AtomicReaderContext;
        class FieldInvertState;
      }
      namespace search {
        class TermStatistics;
        class Explanation;
        class CollectionStatistics;
        namespace similarities {
          class Similarity$SimScorer;
          class Similarity$SimWeight;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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

          class TFIDFSimilarity : public ::org::apache::lucene::search::similarities::Similarity {
          public:
            enum {
              mid_init$_54c6a166,
              mid_computeNorm_6ff84e0e,
              mid_computeWeight_8bb6ee0b,
              mid_coord_d8d154b6,
              mid_decodeNormValue_0ee6df3f,
              mid_encodeNormValue_06298cb7,
              mid_idf_a7e12cb4,
              mid_idfExplain_9dde2121,
              mid_idfExplain_be4c9f2b,
              mid_lengthNorm_6ff84e02,
              mid_queryNorm_06298cbb,
              mid_scorePayload_ffd34a82,
              mid_simScorer_9a2cfed8,
              mid_sloppyFreq_39c7bd2c,
              mid_tf_06298cbb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TFIDFSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TFIDFSimilarity(const TFIDFSimilarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            TFIDFSimilarity();

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            ::org::apache::lucene::search::similarities::Similarity$SimWeight computeWeight(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            jfloat coord(jint, jint) const;
            jfloat decodeNormValue(jlong) const;
            jlong encodeNormValue(jfloat) const;
            jfloat idf(jlong, jlong) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const ::org::apache::lucene::search::TermStatistics &) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            jfloat lengthNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            jfloat queryNorm(jfloat) const;
            jfloat scorePayload(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::search::similarities::Similarity$SimScorer simScorer(const ::org::apache::lucene::search::similarities::Similarity$SimWeight &, const ::org::apache::lucene::index::AtomicReaderContext &) const;
            jfloat sloppyFreq(jint) const;
            jfloat tf(jfloat) const;
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
          extern PyTypeObject PY_TYPE(TFIDFSimilarity);

          class t_TFIDFSimilarity {
          public:
            PyObject_HEAD
            TFIDFSimilarity object;
            static PyObject *wrap_Object(const TFIDFSimilarity&);
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
