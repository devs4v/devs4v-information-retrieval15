#ifndef org_apache_lucene_index_IndexFormatTooNewException_H
#define org_apache_lucene_index_IndexFormatTooNewException_H

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

        class IndexFormatTooNewException : public ::org::apache::lucene::index::CorruptIndexException {
        public:
          enum {
            mid_init$_b8e753a2,
            mid_init$_9c112331,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexFormatTooNewException(jobject obj) : ::org::apache::lucene::index::CorruptIndexException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexFormatTooNewException(const IndexFormatTooNewException& obj) : ::org::apache::lucene::index::CorruptIndexException(obj) {}

          IndexFormatTooNewException(const ::java::lang::String &, jint, jint, jint);
          IndexFormatTooNewException(const ::org::apache::lucene::store::DataInput &, jint, jint, jint);
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
        extern PyTypeObject PY_TYPE(IndexFormatTooNewException);

        class t_IndexFormatTooNewException {
        public:
          PyObject_HEAD
          IndexFormatTooNewException object;
          static PyObject *wrap_Object(const IndexFormatTooNewException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
