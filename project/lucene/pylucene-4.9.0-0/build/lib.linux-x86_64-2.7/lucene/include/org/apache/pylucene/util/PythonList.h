#ifndef org_apache_pylucene_util_PythonList_H
#define org_apache_pylucene_util_PythonList_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class IllegalArgumentException;
    class Class;
    class IndexOutOfBoundsException;
  }
  namespace util {
    class ListIterator;
    class List;
    class Iterator;
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonList : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_add_290588e2,
            mid_add_f7cd74a4,
            mid_addAll_9bfb3701,
            mid_addAll_006cd2b7,
            mid_clear_54c6a166,
            mid_contains_290588e2,
            mid_containsAll_9bfb3701,
            mid_equals_290588e2,
            mid_finalize_54c6a166,
            mid_get_29be6a55,
            mid_indexOf_290588f1,
            mid_isEmpty_54c6a16a,
            mid_iterator_40858c90,
            mid_lastIndexOf_290588f1,
            mid_listIterator_b5be4e14,
            mid_listIterator_4145ee6a,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            mid_remove_29be6a55,
            mid_remove_290588e2,
            mid_removeAll_9bfb3701,
            mid_retainAll_9bfb3701,
            mid_set_211591b1,
            mid_size_54c6a179,
            mid_subList_6bc635fe,
            mid_toArray_94e49c77,
            mid_toArray_ae67dbcf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonList(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonList(const PythonList& obj) : ::java::lang::Object(obj) {}

          PythonList();

          jboolean add(const ::java::lang::Object &) const;
          void add(jint, const ::java::lang::Object &) const;
          jboolean addAll(const ::java::util::Collection &) const;
          jboolean addAll(jint, const ::java::util::Collection &) const;
          void clear() const;
          jboolean contains(const ::java::lang::Object &) const;
          jboolean containsAll(const ::java::util::Collection &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void finalize() const;
          ::java::lang::Object get(jint) const;
          jint indexOf(const ::java::lang::Object &) const;
          jboolean isEmpty() const;
          ::java::util::Iterator iterator() const;
          jint lastIndexOf(const ::java::lang::Object &) const;
          ::java::util::ListIterator listIterator() const;
          ::java::util::ListIterator listIterator(jint) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::java::lang::Object remove(jint) const;
          jboolean remove(const ::java::lang::Object &) const;
          jboolean removeAll(const ::java::util::Collection &) const;
          jboolean retainAll(const ::java::util::Collection &) const;
          ::java::lang::Object set(jint, const ::java::lang::Object &) const;
          jint size() const;
          ::java::util::List subList(jint, jint) const;
          JArray< ::java::lang::Object > toArray() const;
          JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {
        extern PyTypeObject PY_TYPE(PythonList);

        class t_PythonList {
        public:
          PyObject_HEAD
          PythonList object;
          static PyObject *wrap_Object(const PythonList&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
