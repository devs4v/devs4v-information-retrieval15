#ifndef org_apache_lucene_analysis_hi_HindiNormalizer_H
#define org_apache_lucene_analysis_hi_HindiNormalizer_H

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
        namespace hi {

          class HindiNormalizer : public ::java::lang::Object {
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

            explicit HindiNormalizer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            HindiNormalizer(const HindiNormalizer& obj) : ::java::lang::Object(obj) {}

            HindiNormalizer();

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
        namespace hi {
          extern PyTypeObject PY_TYPE(HindiNormalizer);

          class t_HindiNormalizer {
          public:
            PyObject_HEAD
            HindiNormalizer object;
            static PyObject *wrap_Object(const HindiNormalizer&);
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
