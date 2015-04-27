#ifndef org_apache_lucene_util_packed_GrowableWriter_H
#define org_apache_lucene_util_packed_GrowableWriter_H

#include "org/apache/lucene/util/packed/PackedInts$Mutable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
      }
    }
  }
}
namespace java {
  namespace lang {
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
      namespace util {
        namespace packed {

          class GrowableWriter : public ::org::apache::lucene::util::packed::PackedInts$Mutable {
          public:
            enum {
              mid_init$_a74e6883,
              mid_clear_54c6a166,
              mid_fill_534bf2ff,
              mid_get_39c7bd20,
              mid_get_d80d4c9e,
              mid_getBitsPerValue_54c6a179,
              mid_getMutable_ebbbff61,
              mid_ramBytesUsed_54c6a17a,
              mid_resize_585da437,
              mid_save_27875f57,
              mid_set_03b232b5,
              mid_set_d80d4c9e,
              mid_size_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GrowableWriter(jobject obj) : ::org::apache::lucene::util::packed::PackedInts$Mutable(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            GrowableWriter(const GrowableWriter& obj) : ::org::apache::lucene::util::packed::PackedInts$Mutable(obj) {}

            GrowableWriter(jint, jint, jfloat);

            void clear() const;
            void fill(jint, jint, jlong) const;
            jlong get(jint) const;
            jint get(jint, const JArray< jlong > &, jint, jint) const;
            jint getBitsPerValue() const;
            ::org::apache::lucene::util::packed::PackedInts$Mutable getMutable() const;
            jlong ramBytesUsed() const;
            GrowableWriter resize(jint) const;
            void save(const ::org::apache::lucene::store::DataOutput &) const;
            void set(jint, jlong) const;
            jint set(jint, const JArray< jlong > &, jint, jint) const;
            jint size() const;
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
          extern PyTypeObject PY_TYPE(GrowableWriter);

          class t_GrowableWriter {
          public:
            PyObject_HEAD
            GrowableWriter object;
            static PyObject *wrap_Object(const GrowableWriter&);
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
