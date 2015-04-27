#ifndef org_apache_lucene_store_ByteArrayDataOutput_H
#define org_apache_lucene_store_ByteArrayDataOutput_H

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
      namespace store {

        class ByteArrayDataOutput : public ::org::apache::lucene::store::DataOutput {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_49b4f12b,
            mid_init$_86f4435f,
            mid_getPosition_54c6a179,
            mid_reset_49b4f12b,
            mid_reset_86f4435f,
            mid_writeByte_b2271687,
            mid_writeBytes_86f4435f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteArrayDataOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ByteArrayDataOutput(const ByteArrayDataOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          ByteArrayDataOutput();
          ByteArrayDataOutput(const JArray< jbyte > &);
          ByteArrayDataOutput(const JArray< jbyte > &, jint, jint);

          jint getPosition() const;
          void reset(const JArray< jbyte > &) const;
          void reset(const JArray< jbyte > &, jint, jint) const;
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
      namespace store {
        extern PyTypeObject PY_TYPE(ByteArrayDataOutput);

        class t_ByteArrayDataOutput {
        public:
          PyObject_HEAD
          ByteArrayDataOutput object;
          static PyObject *wrap_Object(const ByteArrayDataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
