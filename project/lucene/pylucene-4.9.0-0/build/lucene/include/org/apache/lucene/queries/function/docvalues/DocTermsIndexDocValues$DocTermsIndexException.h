#ifndef org_apache_lucene_queries_function_docvalues_DocTermsIndexDocValues$DocTermsIndexException_H
#define org_apache_lucene_queries_function_docvalues_DocTermsIndexDocValues$DocTermsIndexException_H

#include "java/lang/RuntimeException.h"

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
      namespace queries {
        namespace function {
          namespace docvalues {

            class DocTermsIndexDocValues$DocTermsIndexException : public ::java::lang::RuntimeException {
            public:
              enum {
                mid_init$_df97be8c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DocTermsIndexDocValues$DocTermsIndexException(jobject obj) : ::java::lang::RuntimeException(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              DocTermsIndexDocValues$DocTermsIndexException(const DocTermsIndexDocValues$DocTermsIndexException& obj) : ::java::lang::RuntimeException(obj) {}

              DocTermsIndexDocValues$DocTermsIndexException(const ::java::lang::String &, const ::java::lang::RuntimeException &);
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
      namespace queries {
        namespace function {
          namespace docvalues {
            extern PyTypeObject PY_TYPE(DocTermsIndexDocValues$DocTermsIndexException);

            class t_DocTermsIndexDocValues$DocTermsIndexException {
            public:
              PyObject_HEAD
              DocTermsIndexDocValues$DocTermsIndexException object;
              static PyObject *wrap_Object(const DocTermsIndexDocValues$DocTermsIndexException&);
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
