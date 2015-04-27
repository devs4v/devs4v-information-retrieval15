#ifndef org_apache_lucene_analysis_commongrams_CommonGramsQueryFilter_H
#define org_apache_lucene_analysis_commongrams_CommonGramsQueryFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace commongrams {
          class CommonGramsFilter;
        }
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
      namespace analysis {
        namespace commongrams {

          class CommonGramsQueryFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_625c9356,
              mid_incrementToken_54c6a16a,
              mid_isGramType_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CommonGramsQueryFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CommonGramsQueryFilter(const CommonGramsQueryFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            CommonGramsQueryFilter(const ::org::apache::lucene::analysis::commongrams::CommonGramsFilter &);

            jboolean incrementToken() const;
            jboolean isGramType() const;
            void reset() const;
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
      namespace analysis {
        namespace commongrams {
          extern PyTypeObject PY_TYPE(CommonGramsQueryFilter);

          class t_CommonGramsQueryFilter {
          public:
            PyObject_HEAD
            CommonGramsQueryFilter object;
            static PyObject *wrap_Object(const CommonGramsQueryFilter&);
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
