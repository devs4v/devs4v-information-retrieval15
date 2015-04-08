#ifndef org_apache_lucene_util_BytesRefHash$BytesStartArray_H
#define org_apache_lucene_util_BytesRefHash$BytesStartArray_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Counter;
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
      namespace util {

        class BytesRefHash$BytesStartArray : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_bytesUsed_781dd30a,
            mid_clear_dab10e75,
            mid_grow_dab10e75,
            mid_init_dab10e75,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefHash$BytesStartArray(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BytesRefHash$BytesStartArray(const BytesRefHash$BytesStartArray& obj) : ::java::lang::Object(obj) {}

          BytesRefHash$BytesStartArray();

          ::org::apache::lucene::util::Counter bytesUsed() const;
          JArray< jint > clear() const;
          JArray< jint > grow() const;
          JArray< jint > init() const;
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
        extern PyTypeObject PY_TYPE(BytesRefHash$BytesStartArray);

        class t_BytesRefHash$BytesStartArray {
        public:
          PyObject_HEAD
          BytesRefHash$BytesStartArray object;
          static PyObject *wrap_Object(const BytesRefHash$BytesStartArray&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
