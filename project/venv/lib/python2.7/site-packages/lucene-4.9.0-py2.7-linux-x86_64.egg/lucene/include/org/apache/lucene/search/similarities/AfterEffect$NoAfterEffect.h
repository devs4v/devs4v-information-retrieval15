#ifndef org_apache_lucene_search_similarities_AfterEffect$NoAfterEffect_H
#define org_apache_lucene_search_similarities_AfterEffect$NoAfterEffect_H

#include "org/apache/lucene/search/similarities/AfterEffect.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class BasicStats;
        }
        class Explanation;
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

          class AfterEffect$NoAfterEffect : public ::org::apache::lucene::search::similarities::AfterEffect {
          public:
            enum {
              mid_init$_54c6a166,
              mid_explain_05d4946a,
              mid_score_076760a9,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AfterEffect$NoAfterEffect(jobject obj) : ::org::apache::lucene::search::similarities::AfterEffect(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AfterEffect$NoAfterEffect(const AfterEffect$NoAfterEffect& obj) : ::org::apache::lucene::search::similarities::AfterEffect(obj) {}

            AfterEffect$NoAfterEffect();

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::similarities::BasicStats &, jfloat) const;
            jfloat score(const ::org::apache::lucene::search::similarities::BasicStats &, jfloat) const;
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
          extern PyTypeObject PY_TYPE(AfterEffect$NoAfterEffect);

          class t_AfterEffect$NoAfterEffect {
          public:
            PyObject_HEAD
            AfterEffect$NoAfterEffect object;
            static PyObject *wrap_Object(const AfterEffect$NoAfterEffect&);
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
