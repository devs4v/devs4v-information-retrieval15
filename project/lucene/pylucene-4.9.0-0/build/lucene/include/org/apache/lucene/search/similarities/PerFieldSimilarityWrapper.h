#ifndef org_apache_lucene_search_similarities_PerFieldSimilarityWrapper_H
#define org_apache_lucene_search_similarities_PerFieldSimilarityWrapper_H

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

          class PerFieldSimilarityWrapper : public ::org::apache::lucene::search::similarities::Similarity {
          public:
            enum {
              mid_init$_54c6a166,
              mid_computeNorm_6ff84e0e,
              mid_computeWeight_8bb6ee0b,
              mid_get_951784a9,
              mid_simScorer_9a2cfed8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PerFieldSimilarityWrapper(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PerFieldSimilarityWrapper(const PerFieldSimilarityWrapper& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            PerFieldSimilarityWrapper();

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            ::org::apache::lucene::search::similarities::Similarity$SimWeight computeWeight(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            ::org::apache::lucene::search::similarities::Similarity get(const ::java::lang::String &) const;
            ::org::apache::lucene::search::similarities::Similarity$SimScorer simScorer(const ::org::apache::lucene::search::similarities::Similarity$SimWeight &, const ::org::apache::lucene::index::AtomicReaderContext &) const;
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
          extern PyTypeObject PY_TYPE(PerFieldSimilarityWrapper);

          class t_PerFieldSimilarityWrapper {
          public:
            PyObject_HEAD
            PerFieldSimilarityWrapper object;
            static PyObject *wrap_Object(const PerFieldSimilarityWrapper&);
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
