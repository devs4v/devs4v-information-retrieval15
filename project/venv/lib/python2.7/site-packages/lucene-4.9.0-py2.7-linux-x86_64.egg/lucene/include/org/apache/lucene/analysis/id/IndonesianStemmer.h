#ifndef org_apache_lucene_analysis_id_IndonesianStemmer_H
#define org_apache_lucene_analysis_id_IndonesianStemmer_H

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
        namespace id {

          class IndonesianStemmer : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_stem_39342af2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndonesianStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            IndonesianStemmer(const IndonesianStemmer& obj) : ::java::lang::Object(obj) {}

            IndonesianStemmer();

            jint stem(const JArray< jchar > &, jint, jboolean) const;
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
        namespace id {
          extern PyTypeObject PY_TYPE(IndonesianStemmer);

          class t_IndonesianStemmer {
          public:
            PyObject_HEAD
            IndonesianStemmer object;
            static PyObject *wrap_Object(const IndonesianStemmer&);
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
