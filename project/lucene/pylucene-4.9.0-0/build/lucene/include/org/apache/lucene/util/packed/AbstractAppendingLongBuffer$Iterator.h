#ifndef org_apache_lucene_util_packed_AbstractAppendingLongBuffer$Iterator_H
#define org_apache_lucene_util_packed_AbstractAppendingLongBuffer$Iterator_H

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

          class AbstractAppendingLongBuffer$Iterator : public ::java::lang::Object {
          public:
            enum {
              mid_hasNext_54c6a16a,
              mid_next_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractAppendingLongBuffer$Iterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractAppendingLongBuffer$Iterator(const AbstractAppendingLongBuffer$Iterator& obj) : ::java::lang::Object(obj) {}

            jboolean hasNext() const;
            jlong next() const;
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
          extern PyTypeObject PY_TYPE(AbstractAppendingLongBuffer$Iterator);

          class t_AbstractAppendingLongBuffer$Iterator {
          public:
            PyObject_HEAD
            AbstractAppendingLongBuffer$Iterator object;
            static PyObject *wrap_Object(const AbstractAppendingLongBuffer$Iterator&);
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
