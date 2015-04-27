#ifndef org_apache_lucene_analysis_pt_PortugueseLightStemmer_H
#define org_apache_lucene_analysis_pt_PortugueseLightStemmer_H

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
        namespace pt {

          class PortugueseLightStemmer : public ::java::lang::Object {
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

            explicit PortugueseLightStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PortugueseLightStemmer(const PortugueseLightStemmer& obj) : ::java::lang::Object(obj) {}

            PortugueseLightStemmer();

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
        namespace pt {
          extern PyTypeObject PY_TYPE(PortugueseLightStemmer);

          class t_PortugueseLightStemmer {
          public:
            PyObject_HEAD
            PortugueseLightStemmer object;
            static PyObject *wrap_Object(const PortugueseLightStemmer&);
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
