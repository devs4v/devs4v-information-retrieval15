#ifndef org_apache_lucene_util_packed_PackedInts$Reader_H
#define org_apache_lucene_util_packed_PackedInts$Reader_H

#include "org/apache/lucene/index/NumericDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
    }
  }
}
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

          class PackedInts$Reader : public ::org::apache::lucene::index::NumericDocValues {
          public:
            enum {
              mid_init$_54c6a166,
              mid_get_d80d4c9e,
              mid_size_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$Reader(jobject obj) : ::org::apache::lucene::index::NumericDocValues(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PackedInts$Reader(const PackedInts$Reader& obj) : ::org::apache::lucene::index::NumericDocValues(obj) {}

            PackedInts$Reader();

            jint get(jint, const JArray< jlong > &, jint, jint) const;
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
          extern PyTypeObject PY_TYPE(PackedInts$Reader);

          class t_PackedInts$Reader {
          public:
            PyObject_HEAD
            PackedInts$Reader object;
            static PyObject *wrap_Object(const PackedInts$Reader&);
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
