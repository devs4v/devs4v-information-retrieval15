#ifndef org_apache_lucene_analysis_compound_hyphenation_ByteVector_H
#define org_apache_lucene_analysis_compound_hyphenation_ByteVector_H

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

            class ByteVector : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                mid_init$_49b4f12b,
                mid_init$_39c7bd3c,
                mid_init$_b8354c43,
                mid_alloc_39c7bd23,
                mid_capacity_54c6a179,
                mid_get_39c7bd28,
                mid_getArray_dab10e7e,
                mid_length_54c6a179,
                mid_put_58d0da5d,
                mid_trimToSize_54c6a166,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ByteVector(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              ByteVector(const ByteVector& obj) : ::java::lang::Object(obj) {}

              ByteVector();
              ByteVector(const JArray< jbyte > &);
              ByteVector(jint);
              ByteVector(const JArray< jbyte > &, jint);

              jint alloc(jint) const;
              jint capacity() const;
              jbyte get(jint) const;
              JArray< jbyte > getArray() const;
              jint length() const;
              void put(jint, jbyte) const;
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
            extern PyTypeObject PY_TYPE(ByteVector);

            class t_ByteVector {
            public:
              PyObject_HEAD
              ByteVector object;
              static PyObject *wrap_Object(const ByteVector&);
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
