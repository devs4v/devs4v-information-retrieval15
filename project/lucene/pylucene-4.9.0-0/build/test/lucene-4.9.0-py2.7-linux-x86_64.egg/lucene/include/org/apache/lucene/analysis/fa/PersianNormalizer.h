#ifndef org_apache_lucene_analysis_fa_PersianNormalizer_H
#define org_apache_lucene_analysis_fa_PersianNormalizer_H

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
      namespace analysis {
        namespace fa {

          class PersianNormalizer : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_normalize_ec6430eb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PersianNormalizer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PersianNormalizer(const PersianNormalizer& obj) : ::java::lang::Object(obj) {}

            static jchar FARSI_YEH;
            static jchar HAMZA_ABOVE;
            static jchar HEH;
            static jchar HEH_GOAL;
            static jchar HEH_YEH;
            static jchar KAF;
            static jchar KEHEH;
            static jchar YEH;
            static jchar YEH_BARREE;

            PersianNormalizer();

            jint normalize(const JArray< jchar > &, jint) const;
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
          extern PyTypeObject PY_TYPE(PersianNormalizer);

          class t_PersianNormalizer {
          public:
            PyObject_HEAD
            PersianNormalizer object;
            static PyObject *wrap_Object(const PersianNormalizer&);
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
