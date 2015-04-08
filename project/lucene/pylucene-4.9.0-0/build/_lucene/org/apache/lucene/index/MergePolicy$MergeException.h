#ifndef org_apache_lucene_index_MergePolicy$MergeException_H
#define org_apache_lucene_index_MergePolicy$MergeException_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
    }
  }
}
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

        class MergePolicy$MergeException : public ::java::lang::RuntimeException {
        public:
          enum {
            mid_init$_972c7504,
            mid_init$_1f8035c0,
            mid_getDirectory_1f3934bb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$MergeException(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$MergeException(const MergePolicy$MergeException& obj) : ::java::lang::RuntimeException(obj) {}

          MergePolicy$MergeException(const ::java::lang::String &, const ::org::apache::lucene::store::Directory &);
          MergePolicy$MergeException(const ::java::lang::Throwable &, const ::org::apache::lucene::store::Directory &);

          ::org::apache::lucene::store::Directory getDirectory() const;
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
        extern PyTypeObject PY_TYPE(MergePolicy$MergeException);

        class t_MergePolicy$MergeException {
        public:
          PyObject_HEAD
          MergePolicy$MergeException object;
          static PyObject *wrap_Object(const MergePolicy$MergeException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
