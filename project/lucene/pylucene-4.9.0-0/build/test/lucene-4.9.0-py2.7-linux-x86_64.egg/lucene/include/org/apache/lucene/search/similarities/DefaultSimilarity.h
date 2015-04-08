#ifndef org_apache_lucene_search_similarities_DefaultSimilarity_H
#define org_apache_lucene_search_similarities_DefaultSimilarity_H

#include "org/apache/lucene/search/similarities/TFIDFSimilarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class FieldInvertState;
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

          class DefaultSimilarity : public ::org::apache::lucene::search::similarities::TFIDFSimilarity {
          public:
            enum {
              mid_init$_54c6a166,
              mid_coord_d8d154b6,
              mid_decodeNormValue_0ee6df3f,
              mid_encodeNormValue_06298cb7,
              mid_getDiscountOverlaps_54c6a16a,
              mid_idf_a7e12cb4,
              mid_lengthNorm_6ff84e02,
              mid_queryNorm_06298cbb,
              mid_scorePayload_ffd34a82,
              mid_setDiscountOverlaps_bb0c767f,
              mid_sloppyFreq_39c7bd2c,
              mid_tf_06298cbb,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DefaultSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::TFIDFSimilarity(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DefaultSimilarity(const DefaultSimilarity& obj) : ::org::apache::lucene::search::similarities::TFIDFSimilarity(obj) {}

            DefaultSimilarity();

            jfloat coord(jint, jint) const;
            jfloat decodeNormValue(jlong) const;
            jlong encodeNormValue(jfloat) const;
            jboolean getDiscountOverlaps() const;
            jfloat idf(jlong, jlong) const;
            jfloat lengthNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            jfloat queryNorm(jfloat) const;
            jfloat scorePayload(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
            void setDiscountOverlaps(jboolean) const;
            jfloat sloppyFreq(jint) const;
            jfloat tf(jfloat) const;
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
          extern PyTypeObject PY_TYPE(DefaultSimilarity);

          class t_DefaultSimilarity {
          public:
            PyObject_HEAD
            DefaultSimilarity object;
            static PyObject *wrap_Object(const DefaultSimilarity&);
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
