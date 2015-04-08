#ifndef org_apache_lucene_util_packed_PackedInts$Encoder_H
#define org_apache_lucene_util_packed_PackedInts$Encoder_H

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
        namespace packed {

          class PackedInts$Encoder : public ::java::lang::Object {
          public:
            enum {
              mid_byteBlockCount_54c6a179,
              mid_byteValueCount_54c6a179,
              mid_encode_b62d11da,
              mid_encode_9d48bd73,
              mid_encode_6b7ac502,
              mid_encode_98f8869b,
              mid_longBlockCount_54c6a179,
              mid_longValueCount_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$Encoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PackedInts$Encoder(const PackedInts$Encoder& obj) : ::java::lang::Object(obj) {}

            jint byteBlockCount() const;
            jint byteValueCount() const;
            void encode(const JArray< jlong > &, jint, const JArray< jbyte > &, jint, jint) const;
            void encode(const JArray< jint > &, jint, const JArray< jbyte > &, jint, jint) const;
            void encode(const JArray< jlong > &, jint, const JArray< jlong > &, jint, jint) const;
            void encode(const JArray< jint > &, jint, const JArray< jlong > &, jint, jint) const;
            jint longBlockCount() const;
            jint longValueCount() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          extern PyTypeObject PY_TYPE(PackedInts$Encoder);

          class t_PackedInts$Encoder {
          public:
            PyObject_HEAD
            PackedInts$Encoder object;
            static PyObject *wrap_Object(const PackedInts$Encoder&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
