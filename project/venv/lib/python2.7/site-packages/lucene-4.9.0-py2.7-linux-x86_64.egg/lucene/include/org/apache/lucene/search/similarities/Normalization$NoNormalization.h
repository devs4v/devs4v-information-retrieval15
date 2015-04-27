#ifndef org_apache_lucene_search_similarities_Normalization$NoNormalization_H
#define org_apache_lucene_search_similarities_Normalization$NoNormalization_H

#include "org/apache/lucene/search/similarities/Normalization.h"

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

          class Normalization$NoNormalization : public ::org::apache::lucene::search::similarities::Normalization {
          public:
            enum {
              mid_init$_54c6a166,
              mid_explain_aa9c2b5b,
              mid_tfn_63482206,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Normalization$NoNormalization(jobject obj) : ::org::apache::lucene::search::similarities::Normalization(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Normalization$NoNormalization(const Normalization$NoNormalization& obj) : ::org::apache::lucene::search::similarities::Normalization(obj) {}

            Normalization$NoNormalization();

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::similarities::BasicStats &, jfloat, jfloat) const;
            jfloat tfn(const ::org::apache::lucene::search::similarities::BasicStats &, jfloat, jfloat) const;
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
          extern PyTypeObject PY_TYPE(Normalization$NoNormalization);

          class t_Normalization$NoNormalization {
          public:
            PyObject_HEAD
            Normalization$NoNormalization object;
            static PyObject *wrap_Object(const Normalization$NoNormalization&);
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
