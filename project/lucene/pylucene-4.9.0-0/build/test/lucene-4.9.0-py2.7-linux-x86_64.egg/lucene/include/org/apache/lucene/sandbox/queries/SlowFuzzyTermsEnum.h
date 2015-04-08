#ifndef org_apache_lucene_sandbox_queries_SlowFuzzyTermsEnum_H
#define org_apache_lucene_sandbox_queries_SlowFuzzyTermsEnum_H

#include "org/apache/lucene/search/FuzzyTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
      }
      namespace index {
        class Term;
        class Terms;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {

          class SlowFuzzyTermsEnum : public ::org::apache::lucene::search::FuzzyTermsEnum {
          public:
            enum {
              mid_init$_40b71111,
              mid_maxEditDistanceChanged_0741f897,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SlowFuzzyTermsEnum(jobject obj) : ::org::apache::lucene::search::FuzzyTermsEnum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SlowFuzzyTermsEnum(const SlowFuzzyTermsEnum& obj) : ::org::apache::lucene::search::FuzzyTermsEnum(obj) {}

            SlowFuzzyTermsEnum(const ::org::apache::lucene::index::Terms &, const ::org::apache::lucene::util::AttributeSource &, const ::org::apache::lucene::index::Term &, jfloat, jint);
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
      namespace sandbox {
        namespace queries {
          extern PyTypeObject PY_TYPE(SlowFuzzyTermsEnum);

          class t_SlowFuzzyTermsEnum {
          public:
            PyObject_HEAD
            SlowFuzzyTermsEnum object;
            static PyObject *wrap_Object(const SlowFuzzyTermsEnum&);
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
