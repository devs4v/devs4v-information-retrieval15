#ifndef org_apache_lucene_util_IndexableBinaryStringTools_H
#define org_apache_lucene_util_IndexableBinaryStringTools_H

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

        class IndexableBinaryStringTools : public ::java::lang::Object {
        public:
          enum {
            mid_decode_af6092ff,
            mid_encode_f24ebb03,
            mid_getDecodedLength_6f0bb349,
            mid_getEncodedLength_86f44340,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexableBinaryStringTools(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexableBinaryStringTools(const IndexableBinaryStringTools& obj) : ::java::lang::Object(obj) {}

          static void decode(const JArray< jchar > &, jint, jint, const JArray< jbyte > &, jint, jint);
          static void encode(const JArray< jbyte > &, jint, jint, const JArray< jchar > &, jint, jint);
          static jint getDecodedLength(const JArray< jchar > &, jint, jint);
          static jint getEncodedLength(const JArray< jbyte > &, jint, jint);
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
        extern PyTypeObject PY_TYPE(IndexableBinaryStringTools);

        class t_IndexableBinaryStringTools {
        public:
          PyObject_HEAD
          IndexableBinaryStringTools object;
          static PyObject *wrap_Object(const IndexableBinaryStringTools&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
