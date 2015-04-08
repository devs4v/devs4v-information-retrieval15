#ifndef org_apache_lucene_index_IndexFormatTooOldException_H
#define org_apache_lucene_index_IndexFormatTooOldException_H

#include "org/apache/lucene/index/CorruptIndexException.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
      }
    }
  }
}
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

        class IndexFormatTooOldException : public ::org::apache::lucene::index::CorruptIndexException {
        public:
          enum {
            mid_init$_e6fb04e3,
            mid_init$_4a264742,
            mid_init$_9c112331,
            mid_init$_b8e753a2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexFormatTooOldException(jobject obj) : ::org::apache::lucene::index::CorruptIndexException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexFormatTooOldException(const IndexFormatTooOldException& obj) : ::org::apache::lucene::index::CorruptIndexException(obj) {}

          IndexFormatTooOldException(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &);
          IndexFormatTooOldException(const ::java::lang::String &, const ::java::lang::String &);
          IndexFormatTooOldException(const ::org::apache::lucene::store::DataInput &, jint, jint, jint);
          IndexFormatTooOldException(const ::java::lang::String &, jint, jint, jint);
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
        extern PyTypeObject PY_TYPE(IndexFormatTooOldException);

        class t_IndexFormatTooOldException {
        public:
          PyObject_HEAD
          IndexFormatTooOldException object;
          static PyObject *wrap_Object(const IndexFormatTooOldException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
