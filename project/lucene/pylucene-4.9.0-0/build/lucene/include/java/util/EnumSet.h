#ifndef java_util_EnumSet_H
#define java_util_EnumSet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Enum;
    class Class;
    class Cloneable;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class EnumSet : public ::java::util::AbstractSet {
    public:
      enum {
        mid_allOf_b1570ea6,
        mid_clone_eebf2c68,
        mid_complementOf_dd827517,
        mid_copyOf_b370b22f,
        mid_copyOf_dd827517,
        mid_noneOf_b1570ea6,
        mid_of_719aa3f8,
        mid_of_c8956208,
        mid_of_53c6f404,
        mid_of_25924a58,
        mid_of_e31c4ea8,
        mid_of_3317e638,
        mid_range_c8956208,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit EnumSet(jobject obj) : ::java::util::AbstractSet(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      EnumSet(const EnumSet& obj) : ::java::util::AbstractSet(obj) {}

      static EnumSet allOf(const ::java::lang::Class &);
      EnumSet clone() const;
      static EnumSet complementOf(const EnumSet &);
      static EnumSet copyOf(const ::java::util::Collection &);
      static EnumSet copyOf(const EnumSet &);
      static EnumSet noneOf(const ::java::lang::Class &);
      static EnumSet of(const ::java::lang::Enum &);
      static EnumSet of(const ::java::lang::Enum &, const ::java::lang::Enum &);
      static EnumSet of(const ::java::lang::Enum &, const JArray< ::java::lang::Enum > &);
      static EnumSet of(const ::java::lang::Enum &, const ::java::lang::Enum &, const ::java::lang::Enum &);
      static EnumSet of(const ::java::lang::Enum &, const ::java::lang::Enum &, const ::java::lang::Enum &, const ::java::lang::Enum &);
      static EnumSet of(const ::java::lang::Enum &, const ::java::lang::Enum &, const ::java::lang::Enum &, const ::java::lang::Enum &, const ::java::lang::Enum &);
      static EnumSet range(const ::java::lang::Enum &, const ::java::lang::Enum &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(EnumSet);

    class t_EnumSet {
    public:
      PyObject_HEAD
      EnumSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_EnumSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const EnumSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const EnumSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
