#ifndef org_apache_lucene_store_DataInput_H
#define org_apache_lucene_store_DataInput_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class String;
    class Cloneable;
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

        class DataInput : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_clone_3fcc829c,
            mid_readByte_54c6a172,
            mid_readBytes_86f4435f,
            mid_readBytes_717964e8,
            mid_readInt_54c6a179,
            mid_readLong_54c6a17a,
            mid_readShort_54c6a163,
            mid_readString_14c7b5c5,
            mid_readStringSet_03e99967,
            mid_readStringStringMap_db60befd,
            mid_readVInt_54c6a179,
            mid_readVLong_54c6a17a,
            mid_skipBytes_0ee6df2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DataInput(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DataInput(const DataInput& obj) : ::java::lang::Object(obj) {}

          DataInput();

          DataInput clone() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void readBytes(const JArray< jbyte > &, jint, jint, jboolean) const;
          jint readInt() const;
          jlong readLong() const;
          jshort readShort() const;
          ::java::lang::String readString() const;
          ::java::util::Set readStringSet() const;
          ::java::util::Map readStringStringMap() const;
          jint readVInt() const;
          jlong readVLong() const;
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
        extern PyTypeObject PY_TYPE(DataInput);

        class t_DataInput {
        public:
          PyObject_HEAD
          DataInput object;
          static PyObject *wrap_Object(const DataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
