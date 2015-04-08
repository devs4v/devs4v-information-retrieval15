#ifndef java_util_ArrayList_H
#define java_util_ArrayList_H

#include "java/util/AbstractList.h"

namespace java {
  namespace util {
    class ListIterator;
    class RandomAccess;
    class List;
    class Iterator;
    class Collection;
  }
  namespace lang {
    class Object;
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

    class ArrayList : public ::java::util::AbstractList {
    public:
      enum {
        mid_init$_54c6a166,
        mid_init$_9bfb370d,
        mid_init$_39c7bd3c,
        mid_add_290588e2,
        mid_add_f7cd74a4,
        mid_addAll_9bfb3701,
        mid_addAll_006cd2b7,
        mid_clear_54c6a166,
        mid_clone_846352c3,
        mid_contains_290588e2,
        mid_ensureCapacity_39c7bd3c,
        mid_get_29be6a55,
        mid_indexOf_290588f1,
        mid_isEmpty_54c6a16a,
        mid_iterator_40858c90,
        mid_lastIndexOf_290588f1,
        mid_listIterator_b5be4e14,
        mid_listIterator_4145ee6a,
        mid_remove_29be6a55,
        mid_remove_290588e2,
        mid_removeAll_9bfb3701,
        mid_retainAll_9bfb3701,
        mid_set_211591b1,
        mid_size_54c6a179,
        mid_subList_6bc635fe,
        mid_toArray_94e49c77,
        mid_toArray_ae67dbcf,
        mid_trimToSize_54c6a166,
        mid_removeRange_d8d154a6,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ArrayList(jobject obj) : ::java::util::AbstractList(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      ArrayList(const ArrayList& obj) : ::java::util::AbstractList(obj) {}

      ArrayList();
      ArrayList(const ::java::util::Collection &);
      ArrayList(jint);

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      void ensureCapacity(jint) const;
      ::java::lang::Object get(jint) const;
      jint indexOf(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      ::java::lang::Object remove(jint) const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      jint size() const;
      ::java::util::List subList(jint, jint) const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
      void trimToSize() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(ArrayList);

    class t_ArrayList {
    public:
      PyObject_HEAD
      ArrayList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_ArrayList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const ArrayList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const ArrayList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
