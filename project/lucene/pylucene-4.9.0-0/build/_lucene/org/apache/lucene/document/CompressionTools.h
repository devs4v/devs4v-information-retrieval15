#ifndef org_apache_lucene_document_CompressionTools_H
#define org_apache_lucene_document_CompressionTools_H

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
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class CompressionTools : public ::java::lang::Object {
        public:
          enum {
            mid_compress_1193226d,
            mid_compress_3d448975,
            mid_compress_dad27ce1,
            mid_compressString_94a731a4,
            mid_compressString_7bb29782,
            mid_decompress_1193226d,
            mid_decompress_942a4f60,
            mid_decompress_3d448975,
            mid_decompressString_edfda73b,
            mid_decompressString_0f6e0f86,
            mid_decompressString_f7ab0d9e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CompressionTools(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CompressionTools(const CompressionTools& obj) : ::java::lang::Object(obj) {}

          static JArray< jbyte > compress(const JArray< jbyte > &);
          static JArray< jbyte > compress(const JArray< jbyte > &, jint, jint);
          static JArray< jbyte > compress(const JArray< jbyte > &, jint, jint, jint);
          static JArray< jbyte > compressString(const ::java::lang::String &);
          static JArray< jbyte > compressString(const ::java::lang::String &, jint);
          static JArray< jbyte > decompress(const JArray< jbyte > &);
          static JArray< jbyte > decompress(const ::org::apache::lucene::util::BytesRef &);
          static JArray< jbyte > decompress(const JArray< jbyte > &, jint, jint);
          static ::java::lang::String decompressString(const ::org::apache::lucene::util::BytesRef &);
          static ::java::lang::String decompressString(const JArray< jbyte > &);
          static ::java::lang::String decompressString(const JArray< jbyte > &, jint, jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyTypeObject PY_TYPE(CompressionTools);

        class t_CompressionTools {
        public:
          PyObject_HEAD
          CompressionTools object;
          static PyObject *wrap_Object(const CompressionTools&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
