#ifndef org_apache_lucene_search_similarities_Normalization_H
#define org_apache_lucene_search_similarities_Normalization_H

#include "java/lang/Object.h"

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

          class Normalization : public ::java::lang::Object {
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

            explicit Normalization(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Normalization(const Normalization& obj) : ::java::lang::Object(obj) {}

            Normalization();

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
          extern PyTypeObject PY_TYPE(Normalization);

          class t_Normalization {
          public:
            PyObject_HEAD
            Normalization object;
            static PyObject *wrap_Object(const Normalization&);
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
