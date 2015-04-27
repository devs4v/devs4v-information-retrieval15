#ifndef org_apache_lucene_analysis_lv_LatvianStemmer_H
#define org_apache_lucene_analysis_lv_LatvianStemmer_H

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
        namespace lv {

          class LatvianStemmer : public ::java::lang::Object {
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

            explicit LatvianStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LatvianStemmer(const LatvianStemmer& obj) : ::java::lang::Object(obj) {}

            LatvianStemmer();

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
        namespace lv {
          extern PyTypeObject PY_TYPE(LatvianStemmer);

          class t_LatvianStemmer {
          public:
            PyObject_HEAD
            LatvianStemmer object;
            static PyObject *wrap_Object(const LatvianStemmer&);
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
