#ifndef org_apache_lucene_index_CorruptIndexException_H
#define org_apache_lucene_index_CorruptIndexException_H

#include "java/io/IOException.h"

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
      namespace index {

        class CorruptIndexException : public ::java::io::IOException {
        public:
          enum {
            mid_init$_5fdc3f48,
            mid_init$_01646a2e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CorruptIndexException(jobject obj) : ::java::io::IOException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CorruptIndexException(const CorruptIndexException& obj) : ::java::io::IOException(obj) {}

          CorruptIndexException(const ::java::lang::String &);
          CorruptIndexException(const ::java::lang::String &, const ::java::lang::Throwable &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(CorruptIndexException);

        class t_CorruptIndexException {
        public:
          PyObject_HEAD
          CorruptIndexException object;
          static PyObject *wrap_Object(const CorruptIndexException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
