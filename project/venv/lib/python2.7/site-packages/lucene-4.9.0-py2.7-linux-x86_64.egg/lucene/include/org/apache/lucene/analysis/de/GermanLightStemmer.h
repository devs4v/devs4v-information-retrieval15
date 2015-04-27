#ifndef org_apache_lucene_analysis_de_GermanLightStemmer_H
#define org_apache_lucene_analysis_de_GermanLightStemmer_H

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
        namespace de {

          class GermanLightStemmer : public ::java::lang::Object {
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

            explicit GermanLightStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            GermanLightStemmer(const GermanLightStemmer& obj) : ::java::lang::Object(obj) {}

            GermanLightStemmer();

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
        namespace de {
          extern PyTypeObject PY_TYPE(GermanLightStemmer);

          class t_GermanLightStemmer {
          public:
            PyObject_HEAD
            GermanLightStemmer object;
            static PyObject *wrap_Object(const GermanLightStemmer&);
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
