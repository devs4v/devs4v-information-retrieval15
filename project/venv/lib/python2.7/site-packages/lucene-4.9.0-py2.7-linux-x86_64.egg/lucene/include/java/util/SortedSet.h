#ifndef java_util_SortedSet_H
#define java_util_SortedSet_H

#include "java/util/Set.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace util {
    class Comparator;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class SortedSet : public ::java::util::Set {
    public:
      enum {
        mid_comparator_5a7ff2fc,
        mid_first_846352c3,
        mid_headSet_39f27c22,
        mid_last_846352c3,
        mid_subSet_cf2accb6,
        mid_tailSet_39f27c22,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SortedSet(jobject obj) : ::java::util::Set(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      SortedSet(const SortedSet& obj) : ::java::util::Set(obj) {}

      ::java::util::Comparator comparator() const;
      ::java::lang::Object first() const;
      SortedSet headSet(const ::java::lang::Object &) const;
      ::java::lang::Object last() const;
      SortedSet subSet(const ::java::lang::Object &, const ::java::lang::Object &) const;
      SortedSet tailSet(const ::java::lang::Object &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(SortedSet);

    class t_SortedSet {
    public:
      PyObject_HEAD
      SortedSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_SortedSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const SortedSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const SortedSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
