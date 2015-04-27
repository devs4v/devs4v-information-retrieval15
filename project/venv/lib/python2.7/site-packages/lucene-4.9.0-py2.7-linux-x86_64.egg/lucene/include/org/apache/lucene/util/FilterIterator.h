#ifndef org_apache_lucene_util_FilterIterator_H
#define org_apache_lucene_util_FilterIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class FilterIterator : public ::java::lang::Object {
        public:
          enum {
            mid_init$_106d97d5,
            mid_hasNext_54c6a16a,
            mid_next_846352c3,
            mid_remove_54c6a166,
            mid_predicateFunction_290588e2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilterIterator(const FilterIterator& obj) : ::java::lang::Object(obj) {}

          FilterIterator(const ::java::util::Iterator &);

          jboolean hasNext() const;
          ::java::lang::Object next() const;
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
        extern PyTypeObject PY_TYPE(FilterIterator);

        class t_FilterIterator {
        public:
          PyObject_HEAD
          FilterIterator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FilterIterator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FilterIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FilterIterator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
