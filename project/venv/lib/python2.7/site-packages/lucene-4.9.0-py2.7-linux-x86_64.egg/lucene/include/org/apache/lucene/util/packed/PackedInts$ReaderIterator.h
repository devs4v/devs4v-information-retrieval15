#ifndef org_apache_lucene_util_packed_PackedInts$ReaderIterator_H
#define org_apache_lucene_util_packed_PackedInts$ReaderIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class LongsRef;
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

          class PackedInts$ReaderIterator : public ::java::lang::Object {
          public:
            enum {
              mid_getBitsPerValue_54c6a179,
              mid_next_54c6a17a,
              mid_next_a3d07a9b,
              mid_ord_54c6a179,
              mid_size_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$ReaderIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PackedInts$ReaderIterator(const PackedInts$ReaderIterator& obj) : ::java::lang::Object(obj) {}

            jint getBitsPerValue() const;
            jlong next() const;
            ::org::apache::lucene::util::LongsRef next(jint) const;
            jint ord() const;
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
          extern PyTypeObject PY_TYPE(PackedInts$ReaderIterator);

          class t_PackedInts$ReaderIterator {
          public:
            PyObject_HEAD
            PackedInts$ReaderIterator object;
            static PyObject *wrap_Object(const PackedInts$ReaderIterator&);
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
