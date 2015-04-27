#ifndef org_apache_lucene_search_similarities_NormalizationZ_H
#define org_apache_lucene_search_similarities_NormalizationZ_H

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

          class NormalizationZ : public ::org::apache::lucene::search::similarities::Normalization {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_06298cab,
              mid_getZ_54c6a176,
              mid_tfn_63482206,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NormalizationZ(jobject obj) : ::org::apache::lucene::search::similarities::Normalization(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            NormalizationZ(const NormalizationZ& obj) : ::org::apache::lucene::search::similarities::Normalization(obj) {}

            NormalizationZ();
            NormalizationZ(jfloat);

            jfloat getZ() const;
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
          extern PyTypeObject PY_TYPE(NormalizationZ);

          class t_NormalizationZ {
          public:
            PyObject_HEAD
            NormalizationZ object;
            static PyObject *wrap_Object(const NormalizationZ&);
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
