#ifndef org_apache_lucene_analysis_hi_HindiStemmer_H
#define org_apache_lucene_analysis_hi_HindiStemmer_H

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

          class HindiStemmer : public ::java::lang::Object {
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

            explicit HindiStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            HindiStemmer(const HindiStemmer& obj) : ::java::lang::Object(obj) {}

            HindiStemmer();

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
        namespace hi {
          extern PyTypeObject PY_TYPE(HindiStemmer);

          class t_HindiStemmer {
          public:
            PyObject_HEAD
            HindiStemmer object;
            static PyObject *wrap_Object(const HindiStemmer&);
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
