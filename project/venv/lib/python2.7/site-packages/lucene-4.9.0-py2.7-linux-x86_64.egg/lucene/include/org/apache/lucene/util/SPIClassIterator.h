#ifndef org_apache_lucene_util_SPIClassIterator_H
#define org_apache_lucene_util_SPIClassIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ClassLoader;
    class Class;
  }
  namespace util {
    class Iterator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class SPIClassIterator : public ::java::lang::Object {
        public:
          enum {
            mid_get_d529caef,
            mid_get_9dc4dbcc,
            mid_hasNext_54c6a16a,
            mid_isParentClassLoader_7f5616f8,
            mid_next_44a5f2c9,
            mid_remove_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SPIClassIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SPIClassIterator(const SPIClassIterator& obj) : ::java::lang::Object(obj) {}

          static SPIClassIterator get(const ::java::lang::Class &);
          static SPIClassIterator get(const ::java::lang::Class &, const ::java::lang::ClassLoader &);
          jboolean hasNext() const;
          static jboolean isParentClassLoader(const ::java::lang::ClassLoader &, const ::java::lang::ClassLoader &);
          ::java::lang::Class next() const;
          void remove() const;
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
        extern PyTypeObject PY_TYPE(SPIClassIterator);

        class t_SPIClassIterator {
        public:
          PyObject_HEAD
          SPIClassIterator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SPIClassIterator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SPIClassIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SPIClassIterator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
