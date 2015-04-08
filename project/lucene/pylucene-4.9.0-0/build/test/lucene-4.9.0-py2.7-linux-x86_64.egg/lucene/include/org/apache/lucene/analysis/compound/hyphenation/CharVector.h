#ifndef org_apache_lucene_analysis_compound_hyphenation_CharVector_H
#define org_apache_lucene_analysis_compound_hyphenation_CharVector_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Cloneable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class CharVector : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                mid_init$_700e23d6,
                mid_init$_39c7bd3c,
                mid_init$_ec6430f4,
                mid_alloc_39c7bd23,
                mid_capacity_54c6a179,
                mid_clear_54c6a166,
                mid_clone_023cce63,
                mid_get_39c7bd29,
                mid_getArray_dab10e7f,
                mid_length_54c6a179,
                mid_put_83eec158,
                mid_trimToSize_54c6a166,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CharVector(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              CharVector(const CharVector& obj) : ::java::lang::Object(obj) {}

              CharVector();
              CharVector(const JArray< jchar > &);
              CharVector(jint);
              CharVector(const JArray< jchar > &, jint);

              jint alloc(jint) const;
              jint capacity() const;
              void clear() const;
              CharVector clone() const;
              jchar get(jint) const;
              JArray< jchar > getArray() const;
              jint length() const;
              void put(jint, jchar) const;
              void trimToSize() const;
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
            extern PyTypeObject PY_TYPE(CharVector);

            class t_CharVector {
            public:
              PyObject_HEAD
              CharVector object;
              static PyObject *wrap_Object(const CharVector&);
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
