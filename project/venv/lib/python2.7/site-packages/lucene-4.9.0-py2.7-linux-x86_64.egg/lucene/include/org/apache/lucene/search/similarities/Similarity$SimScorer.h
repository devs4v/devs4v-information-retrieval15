#ifndef org_apache_lucene_search_similarities_Similarity$SimScorer_H
#define org_apache_lucene_search_similarities_Similarity$SimScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class Explanation;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class Similarity$SimScorer : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_computePayloadFactor_ffd34a82,
              mid_computeSlopFactor_39c7bd2c,
              mid_explain_d1ebfb75,
              mid_score_abdf2c41,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Similarity$SimScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Similarity$SimScorer(const Similarity$SimScorer& obj) : ::java::lang::Object(obj) {}

            Similarity$SimScorer();

            jfloat computePayloadFactor(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
            jfloat computeSlopFactor(jint) const;
            ::org::apache::lucene::search::Explanation explain(jint, const ::org::apache::lucene::search::Explanation &) const;
            jfloat score(jint, jfloat) const;
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
          extern PyTypeObject PY_TYPE(Similarity$SimScorer);

          class t_Similarity$SimScorer {
          public:
            PyObject_HEAD
            Similarity$SimScorer object;
            static PyObject *wrap_Object(const Similarity$SimScorer&);
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
