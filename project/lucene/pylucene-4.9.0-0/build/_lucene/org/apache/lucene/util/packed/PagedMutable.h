#ifndef org_apache_lucene_util_packed_PagedMutable_H
#define org_apache_lucene_util_packed_PagedMutable_H

#include "org/apache/lucene/util/packed/AbstractPagedMutable.h"

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

          class PagedMutable : public ::org::apache::lucene::util::packed::AbstractPagedMutable {
          public:
            enum {
              mid_init$_9832dac4,
              mid_newMutable_48ebd249,
              mid_newUnfilledCopy_79c554c1,
              mid_baseRamBytesUsed_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PagedMutable(jobject obj) : ::org::apache::lucene::util::packed::AbstractPagedMutable(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PagedMutable(const PagedMutable& obj) : ::org::apache::lucene::util::packed::AbstractPagedMutable(obj) {}

            PagedMutable(jlong, jint, jint, jfloat);
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
          extern PyTypeObject PY_TYPE(PagedMutable);

          class t_PagedMutable {
          public:
            PyObject_HEAD
            PagedMutable object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PagedMutable *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PagedMutable&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PagedMutable&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
