#ifndef org_apache_lucene_search_similarities_BasicModelG_H
#define org_apache_lucene_search_similarities_BasicModelG_H

#include "org/apache/lucene/search/similarities/BasicModel.h"

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

          class BasicModelG : public ::org::apache::lucene::search::similarities::BasicModel {
          public:
            enum {
              mid_init$_54c6a166,
              mid_score_076760a9,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasicModelG(jobject obj) : ::org::apache::lucene::search::similarities::BasicModel(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BasicModelG(const BasicModelG& obj) : ::org::apache::lucene::search::similarities::BasicModel(obj) {}

            BasicModelG();

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
          extern PyTypeObject PY_TYPE(BasicModelG);

          class t_BasicModelG {
          public:
            PyObject_HEAD
            BasicModelG object;
            static PyObject *wrap_Object(const BasicModelG&);
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
