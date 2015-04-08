#ifndef org_apache_lucene_search_highlight_InvalidTokenOffsetsException_H
#define org_apache_lucene_search_highlight_InvalidTokenOffsetsException_H

#include "java/lang/Exception.h"

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
      namespace search {
        namespace highlight {

          class InvalidTokenOffsetsException : public ::java::lang::Exception {
          public:
            enum {
              mid_init$_5fdc3f48,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InvalidTokenOffsetsException(jobject obj) : ::java::lang::Exception(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            InvalidTokenOffsetsException(const InvalidTokenOffsetsException& obj) : ::java::lang::Exception(obj) {}

            InvalidTokenOffsetsException(const ::java::lang::String &);
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
      namespace search {
        namespace highlight {
          extern PyTypeObject PY_TYPE(InvalidTokenOffsetsException);

          class t_InvalidTokenOffsetsException {
          public:
            PyObject_HEAD
            InvalidTokenOffsetsException object;
            static PyObject *wrap_Object(const InvalidTokenOffsetsException&);
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
