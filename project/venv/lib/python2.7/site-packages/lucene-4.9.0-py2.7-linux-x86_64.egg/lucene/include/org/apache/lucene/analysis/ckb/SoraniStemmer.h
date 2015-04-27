#ifndef org_apache_lucene_analysis_ckb_SoraniStemmer_H
#define org_apache_lucene_analysis_ckb_SoraniStemmer_H

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
        namespace ckb {

          class SoraniStemmer : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_stem_ec6430eb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SoraniStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SoraniStemmer(const SoraniStemmer& obj) : ::java::lang::Object(obj) {}

            SoraniStemmer();

            jint stem(const JArray< jchar > &, jint) const;
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
        namespace ckb {
          extern PyTypeObject PY_TYPE(SoraniStemmer);

          class t_SoraniStemmer {
          public:
            PyObject_HEAD
            SoraniStemmer object;
            static PyObject *wrap_Object(const SoraniStemmer&);
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
