#ifndef org_apache_pylucene_search_similarities_PythonDefaultSimilarity_H
#define org_apache_pylucene_search_similarities_PythonDefaultSimilarity_H

#include "org/apache/lucene/search/similarities/DefaultSimilarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInvertState;
      }
      namespace search {
        class TermStatistics;
        class Explanation;
        class CollectionStatistics;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace similarities {

          class PythonDefaultSimilarity : public ::org::apache::lucene::search::similarities::DefaultSimilarity {
          public:
            enum {
              mid_init$_54c6a166,
              mid_coord_d8d154b6,
              mid_finalize_54c6a166,
              mid_idf_a7e12cb4,
              mid_idfExplain_be4c9f2b,
              mid_lengthNorm_6ff84e02,
              mid_pythonDecRef_54c6a166,
              mid_pythonExtension_54c6a17a,
              mid_pythonExtension_0ee6df2f,
              mid_queryNorm_06298cbb,
              mid_sloppyFreq_39c7bd2c,
              mid_tf_06298cbb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonDefaultSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::DefaultSimilarity(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PythonDefaultSimilarity(const PythonDefaultSimilarity& obj) : ::org::apache::lucene::search::similarities::DefaultSimilarity(obj) {}

            PythonDefaultSimilarity();

            jfloat coord(jint, jint) const;
            void finalize() const;
            jfloat idf(jlong, jlong) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            jfloat lengthNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            jfloat queryNorm(jfloat) const;
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
    namespace pylucene {
      namespace search {
        namespace similarities {
          extern PyTypeObject PY_TYPE(PythonDefaultSimilarity);

          class t_PythonDefaultSimilarity {
          public:
            PyObject_HEAD
            PythonDefaultSimilarity object;
            static PyObject *wrap_Object(const PythonDefaultSimilarity&);
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
