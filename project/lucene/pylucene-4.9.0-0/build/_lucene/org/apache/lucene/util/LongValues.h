#ifndef org_apache_lucene_util_LongValues_H
#define org_apache_lucene_util_LongValues_H

#include "org/apache/lucene/index/NumericDocValues.h"

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

        class LongValues : public ::org::apache::lucene::index::NumericDocValues {
        public:
          enum {
            mid_init$_54c6a166,
            mid_get_0ee6df33,
            mid_get_39c7bd20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongValues(jobject obj) : ::org::apache::lucene::index::NumericDocValues(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          LongValues(const LongValues& obj) : ::org::apache::lucene::index::NumericDocValues(obj) {}

          static LongValues *IDENTITY;

          LongValues();

          jlong get(jlong) const;
          jlong get(jint) const;
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
        extern PyTypeObject PY_TYPE(LongValues);

        class t_LongValues {
        public:
          PyObject_HEAD
          LongValues object;
          static PyObject *wrap_Object(const LongValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
