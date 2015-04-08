#ifndef org_apache_lucene_queryparser_xml_ParserException_H
#define org_apache_lucene_queryparser_xml_ParserException_H

#include "java/lang/Exception.h"

namespace java {
  namespace lang {
    class Throwable;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {

          class ParserException : public ::java::lang::Exception {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_c5ec8ca4,
              mid_init$_5fdc3f48,
              mid_init$_01646a2e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParserException(jobject obj) : ::java::lang::Exception(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ParserException(const ParserException& obj) : ::java::lang::Exception(obj) {}

            ParserException();
            ParserException(const ::java::lang::Throwable &);
            ParserException(const ::java::lang::String &);
            ParserException(const ::java::lang::String &, const ::java::lang::Throwable &);
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
      namespace queryparser {
        namespace xml {
          extern PyTypeObject PY_TYPE(ParserException);

          class t_ParserException {
          public:
            PyObject_HEAD
            ParserException object;
            static PyObject *wrap_Object(const ParserException&);
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
