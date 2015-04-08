#ifndef org_apache_lucene_store_RAMInputStream_H
#define org_apache_lucene_store_RAMInputStream_H

#include "org/apache/lucene/store/IndexInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RAMFile;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class RAMInputStream : public ::org::apache::lucene::store::IndexInput {
        public:
          enum {
            mid_init$_4d2db83b,
            mid_close_54c6a166,
            mid_getFilePointer_54c6a17a,
            mid_length_54c6a17a,
            mid_readByte_54c6a172,
            mid_readBytes_86f4435f,
            mid_seek_0ee6df2f,
            mid_slice_d00c83eb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RAMInputStream(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RAMInputStream(const RAMInputStream& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          RAMInputStream(const ::java::lang::String &, const ::org::apache::lucene::store::RAMFile &);

          void close() const;
          jlong getFilePointer() const;
          jlong length() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void seek(jlong) const;
          ::org::apache::lucene::store::IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyTypeObject PY_TYPE(RAMInputStream);

        class t_RAMInputStream {
        public:
          PyObject_HEAD
          RAMInputStream object;
          static PyObject *wrap_Object(const RAMInputStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
