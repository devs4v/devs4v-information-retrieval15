#ifndef java_util_AbstractSet_H
#define java_util_AbstractSet_H

#include "java/util/AbstractCollection.h"

namespace java {
  namespace util {
    class Set;
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

    class AbstractSet : public ::java::util::AbstractCollection {
    public:
      enum {
        mid_equals_290588e2,
        mid_hashCode_54c6a179,
        mid_removeAll_9bfb3701,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractSet(jobject obj) : ::java::util::AbstractCollection(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      AbstractSet(const AbstractSet& obj) : ::java::util::AbstractCollection(obj) {}

      jboolean equals(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean removeAll(const ::java::util::Collection &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(AbstractSet);

    class t_AbstractSet {
    public:
      PyObject_HEAD
      AbstractSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_AbstractSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
