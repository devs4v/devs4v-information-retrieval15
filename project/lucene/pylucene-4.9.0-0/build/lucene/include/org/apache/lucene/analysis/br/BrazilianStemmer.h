#ifndef org_apache_lucene_analysis_br_BrazilianStemmer_H
#define org_apache_lucene_analysis_br_BrazilianStemmer_H

#include "java/lang/Object.h"

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
      namespace analysis {
        namespace br {

          class BrazilianStemmer : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_log_14c7b5c5,
              mid_stem_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BrazilianStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BrazilianStemmer(const BrazilianStemmer& obj) : ::java::lang::Object(obj) {}

            BrazilianStemmer();

            ::java::lang::String log() const;
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
        namespace br {
          extern PyTypeObject PY_TYPE(BrazilianStemmer);

          class t_BrazilianStemmer {
          public:
            PyObject_HEAD
            BrazilianStemmer object;
            static PyObject *wrap_Object(const BrazilianStemmer&);
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
