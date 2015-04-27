#ifndef org_apache_lucene_util_OfflineSorter$BufferSize_H
#define org_apache_lucene_util_OfflineSorter$BufferSize_H

#include "java/lang/Object.h"

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

        class OfflineSorter$BufferSize : public ::java::lang::Object {
        public:
          enum {
            mid_automatic_c261dc62,
            mid_megabytes_80c67993,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OfflineSorter$BufferSize(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          OfflineSorter$BufferSize(const OfflineSorter$BufferSize& obj) : ::java::lang::Object(obj) {}

          static OfflineSorter$BufferSize automatic();
          static OfflineSorter$BufferSize megabytes(jlong);
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
        extern PyTypeObject PY_TYPE(OfflineSorter$BufferSize);

        class t_OfflineSorter$BufferSize {
        public:
          PyObject_HEAD
          OfflineSorter$BufferSize object;
          static PyObject *wrap_Object(const OfflineSorter$BufferSize&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
