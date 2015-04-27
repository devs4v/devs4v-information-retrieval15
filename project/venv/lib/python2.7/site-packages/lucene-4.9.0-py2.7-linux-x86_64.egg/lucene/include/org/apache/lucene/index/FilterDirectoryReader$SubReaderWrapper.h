#ifndef org_apache_lucene_index_FilterDirectoryReader$SubReaderWrapper_H
#define org_apache_lucene_index_FilterDirectoryReader$SubReaderWrapper_H

#include "java/lang/Object.h"

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

        class FilterDirectoryReader$SubReaderWrapper : public ::java::lang::Object {
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

          explicit FilterDirectoryReader$SubReaderWrapper(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilterDirectoryReader$SubReaderWrapper(const FilterDirectoryReader$SubReaderWrapper& obj) : ::java::lang::Object(obj) {}

          FilterDirectoryReader$SubReaderWrapper();

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
        extern PyTypeObject PY_TYPE(FilterDirectoryReader$SubReaderWrapper);

        class t_FilterDirectoryReader$SubReaderWrapper {
        public:
          PyObject_HEAD
          FilterDirectoryReader$SubReaderWrapper object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FilterDirectoryReader$SubReaderWrapper *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FilterDirectoryReader$SubReaderWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FilterDirectoryReader$SubReaderWrapper&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
