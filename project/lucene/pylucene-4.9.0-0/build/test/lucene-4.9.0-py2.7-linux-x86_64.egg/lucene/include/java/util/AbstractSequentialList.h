#ifndef java_util_AbstractSequentialList_H
#define java_util_AbstractSequentialList_H

#include "java/util/AbstractList.h"

namespace java {
  namespace util {
    class ListIterator;
    class Iterator;
    class Collection;
  }
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractSequentialList : public ::java::util::AbstractList {
    public:
      enum {
        mid_add_f7cd74a4,
        mid_addAll_006cd2b7,
        mid_get_29be6a55,
        mid_iterator_40858c90,
        mid_listIterator_4145ee6a,
        mid_remove_29be6a55,
        mid_set_211591b1,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractSequentialList(jobject obj) : ::java::util::AbstractList(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      AbstractSequentialList(const AbstractSequentialList& obj) : ::java::util::AbstractList(obj) {}

      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      ::java::lang::Object get(jint) const;
      ::java::util::Iterator iterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      ::java::lang::Object remove(jint) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(AbstractSequentialList);

    class t_AbstractSequentialList {
    public:
      PyObject_HEAD
      AbstractSequentialList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_AbstractSequentialList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractSequentialList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractSequentialList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
