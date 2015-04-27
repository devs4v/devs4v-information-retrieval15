#ifndef org_apache_lucene_index_IndexNotFoundException_H
#define org_apache_lucene_index_IndexNotFoundException_H

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
      namespace index {

        class IndexNotFoundException : public ::java::io::FileNotFoundException {
        public:
          enum {
            mid_init$_5fdc3f48,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexNotFoundException(jobject obj) : ::java::io::FileNotFoundException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexNotFoundException(const IndexNotFoundException& obj) : ::java::io::FileNotFoundException(obj) {}

          IndexNotFoundException(const ::java::lang::String &);
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
        extern PyTypeObject PY_TYPE(IndexNotFoundException);

        class t_IndexNotFoundException {
        public:
          PyObject_HEAD
          IndexNotFoundException object;
          static PyObject *wrap_Object(const IndexNotFoundException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
