#ifndef org_apache_lucene_search_similarities_NormalizationH3_H
#define org_apache_lucene_search_similarities_NormalizationH3_H

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

          class NormalizationH3 : public ::org::apache::lucene::search::similarities::Normalization {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_06298cab,
              mid_getMu_54c6a176,
              mid_tfn_63482206,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NormalizationH3(jobject obj) : ::org::apache::lucene::search::similarities::Normalization(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            NormalizationH3(const NormalizationH3& obj) : ::org::apache::lucene::search::similarities::Normalization(obj) {}

            NormalizationH3();
            NormalizationH3(jfloat);

            jfloat getMu() const;
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
          extern PyTypeObject PY_TYPE(NormalizationH3);

          class t_NormalizationH3 {
          public:
            PyObject_HEAD
            NormalizationH3 object;
            static PyObject *wrap_Object(const NormalizationH3&);
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
