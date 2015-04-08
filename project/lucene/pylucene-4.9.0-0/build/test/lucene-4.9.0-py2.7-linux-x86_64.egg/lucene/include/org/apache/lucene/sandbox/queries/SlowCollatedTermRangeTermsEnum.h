#ifndef org_apache_lucene_sandbox_queries_SlowCollatedTermRangeTermsEnum_H
#define org_apache_lucene_sandbox_queries_SlowCollatedTermRangeTermsEnum_H

#include "org/apache/lucene/index/FilteredTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace text {
    class Collator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {

          class SlowCollatedTermRangeTermsEnum : public ::org::apache::lucene::index::FilteredTermsEnum {
          public:
            enum {
              mid_init$_b77b0cda,
              mid_accept_30bc08e1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SlowCollatedTermRangeTermsEnum(jobject obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SlowCollatedTermRangeTermsEnum(const SlowCollatedTermRangeTermsEnum& obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {}

            SlowCollatedTermRangeTermsEnum(const ::org::apache::lucene::index::TermsEnum &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean, const ::java::text::Collator &);
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
          extern PyTypeObject PY_TYPE(SlowCollatedTermRangeTermsEnum);

          class t_SlowCollatedTermRangeTermsEnum {
          public:
            PyObject_HEAD
            SlowCollatedTermRangeTermsEnum object;
            static PyObject *wrap_Object(const SlowCollatedTermRangeTermsEnum&);
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
