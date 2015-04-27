#ifndef org_apache_pylucene_util_PythonSet_H
#define org_apache_pylucene_util_PythonSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Set;
    class Iterator;
    class Collection;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonSet : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_add_290588e2,
            mid_addAll_9bfb3701,
            mid_clear_54c6a166,
            mid_contains_290588e2,
            mid_containsAll_9bfb3701,
            mid_equals_290588e2,
            mid_finalize_54c6a166,
            mid_isEmpty_54c6a16a,
            mid_iterator_40858c90,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            mid_remove_290588e2,
            mid_removeAll_9bfb3701,
            mid_retainAll_9bfb3701,
            mid_size_54c6a179,
            mid_toArray_94e49c77,
            mid_toArray_ae67dbcf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonSet(const PythonSet& obj) : ::java::lang::Object(obj) {}

          PythonSet();

          jboolean add(const ::java::lang::Object &) const;
          jboolean addAll(const ::java::util::Collection &) const;
          void clear() const;
          jboolean contains(const ::java::lang::Object &) const;
          jboolean containsAll(const ::java::util::Collection &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void finalize() const;
          jboolean isEmpty() const;
          ::java::util::Iterator iterator() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          jboolean remove(const ::java::lang::Object &) const;
          jboolean removeAll(const ::java::util::Collection &) const;
          jboolean retainAll(const ::java::util::Collection &) const;
          jint size() const;
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
        extern PyTypeObject PY_TYPE(PythonSet);

        class t_PythonSet {
        public:
          PyObject_HEAD
          PythonSet object;
          static PyObject *wrap_Object(const PythonSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
