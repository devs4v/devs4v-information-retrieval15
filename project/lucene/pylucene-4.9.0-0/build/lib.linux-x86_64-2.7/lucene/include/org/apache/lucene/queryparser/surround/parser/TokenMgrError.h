#ifndef org_apache_lucene_queryparser_surround_parser_TokenMgrError_H
#define org_apache_lucene_queryparser_surround_parser_TokenMgrError_H

#include "java/lang/Error.h"

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
      namespace queryparser {
        namespace surround {
          namespace parser {

            class TokenMgrError : public ::java::lang::Error {
            public:
              enum {
                mid_init$_54c6a166,
                mid_init$_6e53ccc6,
                mid_init$_8aaeec67,
                mid_getMessage_14c7b5c5,
                mid_LexicalError_e888c5f6,
                mid_addEscapes_97a5258f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TokenMgrError(jobject obj) : ::java::lang::Error(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              TokenMgrError(const TokenMgrError& obj) : ::java::lang::Error(obj) {}

              TokenMgrError();
              TokenMgrError(const ::java::lang::String &, jint);
              TokenMgrError(jboolean, jint, jint, jint, const ::java::lang::String &, jchar, jint);

              ::java::lang::String getMessage() const;
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
      namespace queryparser {
        namespace surround {
          namespace parser {
            extern PyTypeObject PY_TYPE(TokenMgrError);

            class t_TokenMgrError {
            public:
              PyObject_HEAD
              TokenMgrError object;
              static PyObject *wrap_Object(const TokenMgrError&);
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
