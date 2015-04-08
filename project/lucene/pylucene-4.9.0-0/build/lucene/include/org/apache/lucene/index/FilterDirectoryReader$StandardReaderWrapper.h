#ifndef org_apache_lucene_index_FilterDirectoryReader$StandardReaderWrapper_H
#define org_apache_lucene_index_FilterDirectoryReader$StandardReaderWrapper_H

#include "org/apache/lucene/index/FilterDirectoryReader$SubReaderWrapper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReader;
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
      namespace index {

        class FilterDirectoryReader$StandardReaderWrapper : public ::org::apache::lucene::index::FilterDirectoryReader$SubReaderWrapper {
        public:
          enum {
            mid_init$_54c6a166,
            mid_wrap_3b1ad795,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterDirectoryReader$StandardReaderWrapper(jobject obj) : ::org::apache::lucene::index::FilterDirectoryReader$SubReaderWrapper(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilterDirectoryReader$StandardReaderWrapper(const FilterDirectoryReader$StandardReaderWrapper& obj) : ::org::apache::lucene::index::FilterDirectoryReader$SubReaderWrapper(obj) {}

          FilterDirectoryReader$StandardReaderWrapper();

          ::org::apache::lucene::index::AtomicReader wrap(const ::org::apache::lucene::index::AtomicReader &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(FilterDirectoryReader$StandardReaderWrapper);

        class t_FilterDirectoryReader$StandardReaderWrapper {
        public:
          PyObject_HEAD
          FilterDirectoryReader$StandardReaderWrapper object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FilterDirectoryReader$StandardReaderWrapper *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FilterDirectoryReader$StandardReaderWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FilterDirectoryReader$StandardReaderWrapper&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
