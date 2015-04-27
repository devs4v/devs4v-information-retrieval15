#ifndef java_util_LinkedList_H
#define java_util_LinkedList_H

#include "java/util/AbstractSequentialList.h"

namespace java {
  namespace util {
    class Deque;
    class ListIterator;
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

    class LinkedList : public ::java::util::AbstractSequentialList {
    public:
      enum {
        mid_init$_54c6a166,
        mid_init$_9bfb370d,
        mid_add_290588e2,
        mid_add_f7cd74a4,
        mid_addAll_9bfb3701,
        mid_addAll_006cd2b7,
        mid_addFirst_290588ee,
        mid_addLast_290588ee,
        mid_clear_54c6a166,
        mid_clone_846352c3,
        mid_contains_290588e2,
        mid_descendingIterator_40858c90,
        mid_element_846352c3,
        mid_get_29be6a55,
        mid_getFirst_846352c3,
        mid_getLast_846352c3,
        mid_indexOf_290588f1,
        mid_lastIndexOf_290588f1,
        mid_listIterator_4145ee6a,
        mid_offer_290588e2,
        mid_offerFirst_290588e2,
        mid_offerLast_290588e2,
        mid_peek_846352c3,
        mid_peekFirst_846352c3,
        mid_peekLast_846352c3,
        mid_poll_846352c3,
        mid_pollFirst_846352c3,
        mid_pollLast_846352c3,
        mid_pop_846352c3,
        mid_push_290588ee,
        mid_remove_846352c3,
        mid_remove_29be6a55,
        mid_remove_290588e2,
        mid_removeFirst_846352c3,
        mid_removeFirstOccurrence_290588e2,
        mid_removeLast_846352c3,
        mid_removeLastOccurrence_290588e2,
        mid_set_211591b1,
        mid_size_54c6a179,
        mid_toArray_94e49c77,
        mid_toArray_ae67dbcf,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit LinkedList(jobject obj) : ::java::util::AbstractSequentialList(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      LinkedList(const LinkedList& obj) : ::java::util::AbstractSequentialList(obj) {}

      LinkedList();
      LinkedList(const ::java::util::Collection &);

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void addFirst(const ::java::lang::Object &) const;
      void addLast(const ::java::lang::Object &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      ::java::lang::Object element() const;
      ::java::lang::Object get(jint) const;
      ::java::lang::Object getFirst() const;
      ::java::lang::Object getLast() const;
      jint indexOf(const ::java::lang::Object &) const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator(jint) const;
      jboolean offer(const ::java::lang::Object &) const;
      jboolean offerFirst(const ::java::lang::Object &) const;
      jboolean offerLast(const ::java::lang::Object &) const;
      ::java::lang::Object peek() const;
      ::java::lang::Object peekFirst() const;
      ::java::lang::Object peekLast() const;
      ::java::lang::Object poll() const;
      ::java::lang::Object pollFirst() const;
      ::java::lang::Object pollLast() const;
      ::java::lang::Object pop() const;
      void push(const ::java::lang::Object &) const;
      ::java::lang::Object remove() const;
      ::java::lang::Object remove(jint) const;
      jboolean remove(const ::java::lang::Object &) const;
      ::java::lang::Object removeFirst() const;
      jboolean removeFirstOccurrence(const ::java::lang::Object &) const;
      ::java::lang::Object removeLast() const;
      jboolean removeLastOccurrence(const ::java::lang::Object &) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      jint size() const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(LinkedList);

    class t_LinkedList {
    public:
      PyObject_HEAD
      LinkedList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_LinkedList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const LinkedList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const LinkedList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
