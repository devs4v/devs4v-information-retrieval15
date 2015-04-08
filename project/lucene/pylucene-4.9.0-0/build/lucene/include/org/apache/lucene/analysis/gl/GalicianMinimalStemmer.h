#ifndef org_apache_lucene_analysis_gl_GalicianMinimalStemmer_H
#define org_apache_lucene_analysis_gl_GalicianMinimalStemmer_H

#include "org/apache/lucene/analysis/pt/RSLPStemmerBase.h"

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
        namespace gl {

          class GalicianMinimalStemmer : public ::org::apache::lucene::analysis::pt::RSLPStemmerBase {
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

            explicit GalicianMinimalStemmer(jobject obj) : ::org::apache::lucene::analysis::pt::RSLPStemmerBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            GalicianMinimalStemmer(const GalicianMinimalStemmer& obj) : ::org::apache::lucene::analysis::pt::RSLPStemmerBase(obj) {}

            GalicianMinimalStemmer();

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
        namespace gl {
          extern PyTypeObject PY_TYPE(GalicianMinimalStemmer);

          class t_GalicianMinimalStemmer {
          public:
            PyObject_HEAD
            GalicianMinimalStemmer object;
            static PyObject *wrap_Object(const GalicianMinimalStemmer&);
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
