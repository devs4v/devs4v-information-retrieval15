#ifndef org_apache_lucene_util_packed_PagedGrowableWriter_H
#define org_apache_lucene_util_packed_PagedGrowableWriter_H

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

          class PagedGrowableWriter : public ::org::apache::lucene::util::packed::AbstractPagedMutable {
          public:
            enum {
              mid_init$_9832dac4,
              mid_newMutable_48ebd249,
              mid_newUnfilledCopy_b730b410,
              mid_baseRamBytesUsed_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PagedGrowableWriter(jobject obj) : ::org::apache::lucene::util::packed::AbstractPagedMutable(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PagedGrowableWriter(const PagedGrowableWriter& obj) : ::org::apache::lucene::util::packed::AbstractPagedMutable(obj) {}

            PagedGrowableWriter(jlong, jint, jint, jfloat);
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
          extern PyTypeObject PY_TYPE(PagedGrowableWriter);

          class t_PagedGrowableWriter {
          public:
            PyObject_HEAD
            PagedGrowableWriter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PagedGrowableWriter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PagedGrowableWriter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PagedGrowableWriter&, PyTypeObject *);
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
