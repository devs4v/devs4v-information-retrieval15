#ifndef org_apache_lucene_util_BytesRefHash$MaxBytesLengthExceededException_H
#define org_apache_lucene_util_BytesRefHash$MaxBytesLengthExceededException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BytesRefHash$MaxBytesLengthExceededException : public ::java::lang::RuntimeException {
        public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefHash$MaxBytesLengthExceededException(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BytesRefHash$MaxBytesLengthExceededException(const BytesRefHash$MaxBytesLengthExceededException& obj) : ::java::lang::RuntimeException(obj) {}
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(BytesRefHash$MaxBytesLengthExceededException);

        class t_BytesRefHash$MaxBytesLengthExceededException {
        public:
          PyObject_HEAD
          BytesRefHash$MaxBytesLengthExceededException object;
          static PyObject *wrap_Object(const BytesRefHash$MaxBytesLengthExceededException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
