#ifndef org_apache_lucene_analysis_nl_DutchStemmer_H
#define org_apache_lucene_analysis_nl_DutchStemmer_H

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
        namespace nl {

          class DutchStemmer : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_stem_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DutchStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DutchStemmer(const DutchStemmer& obj) : ::java::lang::Object(obj) {}

            DutchStemmer();

            ::java::lang::String stem(const ::java::lang::String &) const;
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
        namespace nl {
          extern PyTypeObject PY_TYPE(DutchStemmer);

          class t_DutchStemmer {
          public:
            PyObject_HEAD
            DutchStemmer object;
            static PyObject *wrap_Object(const DutchStemmer&);
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
