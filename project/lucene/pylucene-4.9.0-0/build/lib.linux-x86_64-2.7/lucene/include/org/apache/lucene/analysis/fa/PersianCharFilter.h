#ifndef org_apache_lucene_analysis_fa_PersianCharFilter_H
#define org_apache_lucene_analysis_fa_PersianCharFilter_H

#include "org/apache/lucene/analysis/CharFilter.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace fa {

          class PersianCharFilter : public ::org::apache::lucene::analysis::CharFilter {
          public:
            enum {
              mid_init$_cf2e3c10,
              mid_read_54c6a179,
              mid_read_6f0bb349,
              mid_correct_39c7bd23,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PersianCharFilter(jobject obj) : ::org::apache::lucene::analysis::CharFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PersianCharFilter(const PersianCharFilter& obj) : ::org::apache::lucene::analysis::CharFilter(obj) {}

            PersianCharFilter(const ::java::io::Reader &);

            jint read() const;
            jint read(const JArray< jchar > &, jint, jint) const;
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
        namespace fa {
          extern PyTypeObject PY_TYPE(PersianCharFilter);

          class t_PersianCharFilter {
          public:
            PyObject_HEAD
            PersianCharFilter object;
            static PyObject *wrap_Object(const PersianCharFilter&);
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
