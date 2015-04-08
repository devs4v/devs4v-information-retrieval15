#ifndef org_apache_lucene_util_packed_PackedInts$Mutable_H
#define org_apache_lucene_util_packed_PackedInts$Mutable_H

#include "org/apache/lucene/util/packed/PackedInts$Reader.h"

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

          class PackedInts$Mutable : public ::org::apache::lucene::util::packed::PackedInts$Reader {
          public:
            enum {
              mid_init$_54c6a166,
              mid_clear_54c6a166,
              mid_fill_534bf2ff,
              mid_getBitsPerValue_54c6a179,
              mid_save_27875f57,
              mid_set_03b232b5,
              mid_set_d80d4c9e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$Mutable(jobject obj) : ::org::apache::lucene::util::packed::PackedInts$Reader(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PackedInts$Mutable(const PackedInts$Mutable& obj) : ::org::apache::lucene::util::packed::PackedInts$Reader(obj) {}

            PackedInts$Mutable();

            void clear() const;
            void fill(jint, jint, jlong) const;
            jint getBitsPerValue() const;
            void save(const ::org::apache::lucene::store::DataOutput &) const;
            void set(jint, jlong) const;
            jint set(jint, const JArray< jlong > &, jint, jint) const;
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
          extern PyTypeObject PY_TYPE(PackedInts$Mutable);

          class t_PackedInts$Mutable {
          public:
            PyObject_HEAD
            PackedInts$Mutable object;
            static PyObject *wrap_Object(const PackedInts$Mutable&);
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
