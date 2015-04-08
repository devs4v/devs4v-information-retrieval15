#ifndef org_apache_lucene_analysis_ar_ArabicStemmer_H
#define org_apache_lucene_analysis_ar_ArabicStemmer_H

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
        namespace ar {

          class ArabicStemmer : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_stem_ec6430eb,
              mid_stemPrefix_ec6430eb,
              mid_stemSuffix_ec6430eb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ArabicStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ArabicStemmer(const ArabicStemmer& obj) : ::java::lang::Object(obj) {}

            static jchar ALEF;
            static jchar BEH;
            static jchar FEH;
            static jchar HEH;
            static jchar KAF;
            static jchar LAM;
            static jchar NOON;
            static jchar TEH;
            static jchar TEH_MARBUTA;
            static jchar WAW;
            static jchar YEH;
            static JArray< JArray< jchar > > *prefixes;
            static JArray< JArray< jchar > > *suffixes;

            ArabicStemmer();

            jint stem(const JArray< jchar > &, jint) const;
            jint stemPrefix(const JArray< jchar > &, jint) const;
            jint stemSuffix(const JArray< jchar > &, jint) const;
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
        namespace ar {
          extern PyTypeObject PY_TYPE(ArabicStemmer);

          class t_ArabicStemmer {
          public:
            PyObject_HEAD
            ArabicStemmer object;
            static PyObject *wrap_Object(const ArabicStemmer&);
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
