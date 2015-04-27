#ifndef org_apache_lucene_store_ByteArrayDataInput_H
#define org_apache_lucene_store_ByteArrayDataInput_H

#include "org/apache/lucene/store/DataInput.h"

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

        class ByteArrayDataInput : public ::org::apache::lucene::store::DataInput {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_49b4f12b,
            mid_init$_86f4435f,
            mid_eof_54c6a16a,
            mid_getPosition_54c6a179,
            mid_length_54c6a179,
            mid_readByte_54c6a172,
            mid_readBytes_86f4435f,
            mid_readInt_54c6a179,
            mid_readLong_54c6a17a,
            mid_readShort_54c6a163,
            mid_readVInt_54c6a179,
            mid_readVLong_54c6a17a,
            mid_reset_49b4f12b,
            mid_reset_86f4435f,
            mid_rewind_54c6a166,
            mid_setPosition_39c7bd3c,
            mid_skipBytes_0ee6df2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteArrayDataInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ByteArrayDataInput(const ByteArrayDataInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          ByteArrayDataInput();
          ByteArrayDataInput(const JArray< jbyte > &);
          ByteArrayDataInput(const JArray< jbyte > &, jint, jint);

          jboolean eof() const;
          jint getPosition() const;
          jint length() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          jint readInt() const;
          jlong readLong() const;
          jshort readShort() const;
          jint readVInt() const;
          jlong readVLong() const;
          void reset(const JArray< jbyte > &) const;
          void reset(const JArray< jbyte > &, jint, jint) const;
          void rewind() const;
          void setPosition(jint) const;
          void skipBytes(jlong) const;
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
        extern PyTypeObject PY_TYPE(ByteArrayDataInput);

        class t_ByteArrayDataInput {
        public:
          PyObject_HEAD
          ByteArrayDataInput object;
          static PyObject *wrap_Object(const ByteArrayDataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
