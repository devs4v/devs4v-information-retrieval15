#ifndef org_apache_lucene_search_similarities_Similarity$SimWeight_H
#define org_apache_lucene_search_similarities_Similarity$SimWeight_H

#include "java/lang/Object.h"

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

          class Similarity$SimWeight : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_getValueForNormalization_54c6a176,
              mid_normalize_f1b0c004,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Similarity$SimWeight(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Similarity$SimWeight(const Similarity$SimWeight& obj) : ::java::lang::Object(obj) {}

            Similarity$SimWeight();

            jfloat getValueForNormalization() const;
            void normalize(jfloat, jfloat) const;
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
          extern PyTypeObject PY_TYPE(Similarity$SimWeight);

          class t_Similarity$SimWeight {
          public:
            PyObject_HEAD
            Similarity$SimWeight object;
            static PyObject *wrap_Object(const Similarity$SimWeight&);
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
