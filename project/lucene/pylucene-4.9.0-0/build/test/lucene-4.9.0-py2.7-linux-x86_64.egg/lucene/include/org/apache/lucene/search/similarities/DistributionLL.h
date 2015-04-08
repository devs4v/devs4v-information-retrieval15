#ifndef org_apache_lucene_search_similarities_DistributionLL_H
#define org_apache_lucene_search_similarities_DistributionLL_H

#include "org/apache/lucene/search/similarities/Distribution.h"

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

          class DistributionLL : public ::org::apache::lucene::search::similarities::Distribution {
          public:
            enum {
              mid_init$_54c6a166,
              mid_score_63482206,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DistributionLL(jobject obj) : ::org::apache::lucene::search::similarities::Distribution(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DistributionLL(const DistributionLL& obj) : ::org::apache::lucene::search::similarities::Distribution(obj) {}

            DistributionLL();

            jfloat score(const ::org::apache::lucene::search::similarities::BasicStats &, jfloat, jfloat) const;
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
          extern PyTypeObject PY_TYPE(DistributionLL);

          class t_DistributionLL {
          public:
            PyObject_HEAD
            DistributionLL object;
            static PyObject *wrap_Object(const DistributionLL&);
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
