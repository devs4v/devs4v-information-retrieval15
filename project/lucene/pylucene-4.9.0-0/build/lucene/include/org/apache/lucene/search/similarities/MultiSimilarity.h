#ifndef org_apache_lucene_search_similarities_MultiSimilarity_H
#define org_apache_lucene_search_similarities_MultiSimilarity_H

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

          class MultiSimilarity : public ::org::apache::lucene::search::similarities::Similarity {
          public:
            enum {
              mid_init$_82c64346,
              mid_computeNorm_6ff84e0e,
              mid_computeWeight_8bb6ee0b,
              mid_simScorer_9a2cfed8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            MultiSimilarity(const MultiSimilarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            MultiSimilarity(const JArray< ::org::apache::lucene::search::similarities::Similarity > &);

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            ::org::apache::lucene::search::similarities::Similarity$SimWeight computeWeight(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
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
          extern PyTypeObject PY_TYPE(MultiSimilarity);

          class t_MultiSimilarity {
          public:
            PyObject_HEAD
            MultiSimilarity object;
            static PyObject *wrap_Object(const MultiSimilarity&);
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
