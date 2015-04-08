#ifndef org_apache_lucene_analysis_fr_FrenchLightStemmer_H
#define org_apache_lucene_analysis_fr_FrenchLightStemmer_H

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
        namespace fr {

          class FrenchLightStemmer : public ::java::lang::Object {
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

            explicit FrenchLightStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            FrenchLightStemmer(const FrenchLightStemmer& obj) : ::java::lang::Object(obj) {}

            FrenchLightStemmer();

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
        namespace fr {
          extern PyTypeObject PY_TYPE(FrenchLightStemmer);

          class t_FrenchLightStemmer {
          public:
            PyObject_HEAD
            FrenchLightStemmer object;
            static PyObject *wrap_Object(const FrenchLightStemmer&);
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
