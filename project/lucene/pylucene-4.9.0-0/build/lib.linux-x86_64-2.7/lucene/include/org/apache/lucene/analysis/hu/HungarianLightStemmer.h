#ifndef org_apache_lucene_analysis_hu_HungarianLightStemmer_H
#define org_apache_lucene_analysis_hu_HungarianLightStemmer_H

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
        namespace hu {

          class HungarianLightStemmer : public ::java::lang::Object {
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

            explicit HungarianLightStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            HungarianLightStemmer(const HungarianLightStemmer& obj) : ::java::lang::Object(obj) {}

            HungarianLightStemmer();

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
        namespace hu {
          extern PyTypeObject PY_TYPE(HungarianLightStemmer);

          class t_HungarianLightStemmer {
          public:
            PyObject_HEAD
            HungarianLightStemmer object;
            static PyObject *wrap_Object(const HungarianLightStemmer&);
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
