#ifndef org_apache_lucene_store_NoSuchDirectoryException_H
#define org_apache_lucene_store_NoSuchDirectoryException_H

#include "java/io/FileNotFoundException.h"

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
      namespace store {

        class NoSuchDirectoryException : public ::java::io::FileNotFoundException {
        public:
          enum {
            mid_init$_5fdc3f48,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NoSuchDirectoryException(jobject obj) : ::java::io::FileNotFoundException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NoSuchDirectoryException(const NoSuchDirectoryException& obj) : ::java::io::FileNotFoundException(obj) {}

          NoSuchDirectoryException(const ::java::lang::String &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyTypeObject PY_TYPE(NoSuchDirectoryException);

        class t_NoSuchDirectoryException {
        public:
          PyObject_HEAD
          NoSuchDirectoryException object;
          static PyObject *wrap_Object(const NoSuchDirectoryException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
