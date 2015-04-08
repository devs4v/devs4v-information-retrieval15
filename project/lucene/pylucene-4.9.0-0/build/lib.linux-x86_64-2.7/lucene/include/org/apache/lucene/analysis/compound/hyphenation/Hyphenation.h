#ifndef org_apache_lucene_analysis_compound_hyphenation_Hyphenation_H
#define org_apache_lucene_analysis_compound_hyphenation_Hyphenation_H

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
        namespace compound {
          namespace hyphenation {

            class Hyphenation : public ::java::lang::Object {
            public:
              enum {
                mid_getHyphenationPoints_dab10e75,
                mid_length_54c6a179,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Hyphenation(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              Hyphenation(const Hyphenation& obj) : ::java::lang::Object(obj) {}

              JArray< jint > getHyphenationPoints() const;
              jint length() const;
            };
          }
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
        namespace compound {
          namespace hyphenation {
            extern PyTypeObject PY_TYPE(Hyphenation);

            class t_Hyphenation {
            public:
              PyObject_HEAD
              Hyphenation object;
              static PyObject *wrap_Object(const Hyphenation&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
