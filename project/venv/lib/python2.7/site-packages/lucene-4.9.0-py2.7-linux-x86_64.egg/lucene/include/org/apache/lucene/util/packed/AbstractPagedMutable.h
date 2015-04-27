#ifndef org_apache_lucene_util_packed_AbstractPagedMutable_H
#define org_apache_lucene_util_packed_AbstractPagedMutable_H

#include "org/apache/lucene/util/LongValues.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class AbstractPagedMutable : public ::org::apache::lucene::util::LongValues {
          public:
            enum {
              mid_get_0ee6df33,
              mid_grow_3bfef47c,
              mid_grow_5f2a2a5f,
              mid_ramBytesUsed_54c6a17a,
              mid_resize_5f2a2a5f,
              mid_set_a7e12ca4,
              mid_size_54c6a17a,
              mid_toString_14c7b5c5,
              mid_fillPages_54c6a166,
              mid_newMutable_48ebd249,
              mid_newUnfilledCopy_5f2a2a5f,
              mid_baseRamBytesUsed_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractPagedMutable(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractPagedMutable(const AbstractPagedMutable& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            jlong get(jlong) const;
            AbstractPagedMutable grow() const;
            AbstractPagedMutable grow(jlong) const;
            jlong ramBytesUsed() const;
            AbstractPagedMutable resize(jlong) const;
            void set(jlong, jlong) const;
            jlong size() const;
            ::java::lang::String toString() const;
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
          extern PyTypeObject PY_TYPE(AbstractPagedMutable);

          class t_AbstractPagedMutable {
          public:
            PyObject_HEAD
            AbstractPagedMutable object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractPagedMutable *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractPagedMutable&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractPagedMutable&, PyTypeObject *);
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
