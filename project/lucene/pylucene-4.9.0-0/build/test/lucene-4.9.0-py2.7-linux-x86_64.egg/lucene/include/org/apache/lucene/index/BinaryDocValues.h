#ifndef org_apache_lucene_index_BinaryDocValues_H
#define org_apache_lucene_index_BinaryDocValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class BinaryDocValues : public ::java::lang::Object {
        public:
          enum {
            mid_get_b57e9c3f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BinaryDocValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BinaryDocValues(const BinaryDocValues& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::util::BytesRef get(jint) const;
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
        extern PyTypeObject PY_TYPE(BinaryDocValues);

        class t_BinaryDocValues {
        public:
          PyObject_HEAD
          BinaryDocValues object;
          static PyObject *wrap_Object(const BinaryDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
