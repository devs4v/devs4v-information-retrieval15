#ifndef org_apache_lucene_store_DataOutput_H
#define org_apache_lucene_store_DataOutput_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
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

        class DataOutput : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_copyBytes_394617c2,
            mid_writeByte_b2271687,
            mid_writeBytes_b8354c43,
            mid_writeBytes_86f4435f,
            mid_writeInt_39c7bd3c,
            mid_writeLong_0ee6df2f,
            mid_writeShort_3bc40c6a,
            mid_writeString_5fdc3f48,
            mid_writeStringSet_fb4f2b26,
            mid_writeStringStringMap_4c9e2b1c,
            mid_writeVInt_39c7bd3c,
            mid_writeVLong_0ee6df2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DataOutput(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DataOutput(const DataOutput& obj) : ::java::lang::Object(obj) {}

          DataOutput();

          void copyBytes(const ::org::apache::lucene::store::DataInput &, jlong) const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
          void writeInt(jint) const;
          void writeLong(jlong) const;
          void writeShort(jshort) const;
          void writeString(const ::java::lang::String &) const;
          void writeStringSet(const ::java::util::Set &) const;
          void writeStringStringMap(const ::java::util::Map &) const;
          void writeVInt(jint) const;
          void writeVLong(jlong) const;
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
        extern PyTypeObject PY_TYPE(DataOutput);

        class t_DataOutput {
        public:
          PyObject_HEAD
          DataOutput object;
          static PyObject *wrap_Object(const DataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
