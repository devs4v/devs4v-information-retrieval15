#ifndef org_apache_lucene_search_similarities_NormalizationH2_H
#define org_apache_lucene_search_similarities_NormalizationH2_H

#include "org/apache/lucene/search/similarities/Normalization.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class BasicStats;
        }
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

          class NormalizationH2 : public ::org::apache::lucene::search::similarities::Normalization {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_06298cab,
              mid_getC_54c6a176,
              mid_tfn_63482206,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NormalizationH2(jobject obj) : ::org::apache::lucene::search::similarities::Normalization(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            NormalizationH2(const NormalizationH2& obj) : ::org::apache::lucene::search::similarities::Normalization(obj) {}

            NormalizationH2();
            NormalizationH2(jfloat);

            jfloat getC() const;
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
          extern PyTypeObject PY_TYPE(NormalizationH2);

          class t_NormalizationH2 {
          public:
            PyObject_HEAD
            NormalizationH2 object;
            static PyObject *wrap_Object(const NormalizationH2&);
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
