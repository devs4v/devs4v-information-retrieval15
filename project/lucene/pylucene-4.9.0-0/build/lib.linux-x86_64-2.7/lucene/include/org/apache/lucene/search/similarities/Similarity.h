#ifndef org_apache_lucene_search_similarities_Similarity_H
#define org_apache_lucene_search_similarities_Similarity_H

#include "java/lang/Object.h"

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

          class Similarity : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_computeNorm_6ff84e0e,
              mid_computeWeight_8bb6ee0b,
              mid_coord_d8d154b6,
              mid_queryNorm_06298cbb,
              mid_simScorer_9a2cfed8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Similarity(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Similarity(const Similarity& obj) : ::java::lang::Object(obj) {}

            Similarity();

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            ::org::apache::lucene::search::similarities::Similarity$SimWeight computeWeight(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            jfloat coord(jint, jint) const;
            jfloat queryNorm(jfloat) const;
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
          extern PyTypeObject PY_TYPE(Similarity);

          class t_Similarity {
          public:
            PyObject_HEAD
            Similarity object;
            static PyObject *wrap_Object(const Similarity&);
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
