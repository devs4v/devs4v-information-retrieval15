#ifndef org_apache_lucene_util_GrowableByteArrayDataOutput_H
#define org_apache_lucene_util_GrowableByteArrayDataOutput_H

#include "org/apache/lucene/store/DataOutput.h"

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

        class GrowableByteArrayDataOutput : public ::org::apache::lucene::store::DataOutput {
        public:
          enum {
            mid_init$_39c7bd3c,
            mid_writeByte_b2271687,
            mid_writeBytes_86f4435f,
            max_mid
          };

          enum {
            fid_bytes,
            fid_length,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GrowableByteArrayDataOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          GrowableByteArrayDataOutput(const GrowableByteArrayDataOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          JArray< jbyte > _get_bytes() const;
          void _set_bytes(const JArray< jbyte > &) const;
          jint _get_length() const;
          void _set_length(jint) const;

          GrowableByteArrayDataOutput(jint);

          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
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
        extern PyTypeObject PY_TYPE(GrowableByteArrayDataOutput);

        class t_GrowableByteArrayDataOutput {
        public:
          PyObject_HEAD
          GrowableByteArrayDataOutput object;
          static PyObject *wrap_Object(const GrowableByteArrayDataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
