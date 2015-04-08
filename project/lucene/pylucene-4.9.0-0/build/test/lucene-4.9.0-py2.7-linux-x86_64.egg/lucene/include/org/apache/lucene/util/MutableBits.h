#ifndef org_apache_lucene_util_MutableBits_H
#define org_apache_lucene_util_MutableBits_H

#include "org/apache/lucene/util/Bits.h"

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

        class MutableBits : public ::org::apache::lucene::util::Bits {
        public:
          enum {
            mid_clear_39c7bd3c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MutableBits(jobject obj) : ::org::apache::lucene::util::Bits(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MutableBits(const MutableBits& obj) : ::org::apache::lucene::util::Bits(obj) {}

          void clear(jint) const;
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
        extern PyTypeObject PY_TYPE(MutableBits);

        class t_MutableBits {
        public:
          PyObject_HEAD
          MutableBits object;
          static PyObject *wrap_Object(const MutableBits&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
