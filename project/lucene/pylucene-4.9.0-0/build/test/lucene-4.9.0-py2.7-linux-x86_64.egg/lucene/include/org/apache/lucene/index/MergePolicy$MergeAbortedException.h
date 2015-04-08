#ifndef org_apache_lucene_index_MergePolicy$MergeAbortedException_H
#define org_apache_lucene_index_MergePolicy$MergeAbortedException_H

#include "java/io/IOException.h"

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

        class MergePolicy$MergeAbortedException : public ::java::io::IOException {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_5fdc3f48,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$MergeAbortedException(jobject obj) : ::java::io::IOException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$MergeAbortedException(const MergePolicy$MergeAbortedException& obj) : ::java::io::IOException(obj) {}

          MergePolicy$MergeAbortedException();
          MergePolicy$MergeAbortedException(const ::java::lang::String &);
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
        extern PyTypeObject PY_TYPE(MergePolicy$MergeAbortedException);

        class t_MergePolicy$MergeAbortedException {
        public:
          PyObject_HEAD
          MergePolicy$MergeAbortedException object;
          static PyObject *wrap_Object(const MergePolicy$MergeAbortedException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
