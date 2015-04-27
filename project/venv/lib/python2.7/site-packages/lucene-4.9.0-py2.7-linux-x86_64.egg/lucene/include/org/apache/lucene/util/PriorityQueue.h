#ifndef org_apache_lucene_util_PriorityQueue_H
#define org_apache_lucene_util_PriorityQueue_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PriorityQueue : public ::java::lang::Object {
        public:
          enum {
            mid_init$_39c7bd3c,
            mid_init$_b3a85a05,
            mid_add_a932a95f,
            mid_clear_54c6a166,
            mid_insertWithOverflow_a932a95f,
            mid_pop_846352c3,
            mid_size_54c6a179,
            mid_top_846352c3,
            mid_updateTop_846352c3,
            mid_getSentinelObject_846352c3,
            mid_getHeapArray_94e49c77,
            mid_lessThan_466982fe,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PriorityQueue(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PriorityQueue(const PriorityQueue& obj) : ::java::lang::Object(obj) {}

          PriorityQueue(jint);
          PriorityQueue(jint, jboolean);

          ::java::lang::Object add(const ::java::lang::Object &) const;
          void clear() const;
          ::java::lang::Object insertWithOverflow(const ::java::lang::Object &) const;
          ::java::lang::Object pop() const;
          jint size() const;
          ::java::lang::Object top() const;
          ::java::lang::Object updateTop() const;
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
        extern PyTypeObject PY_TYPE(PriorityQueue);

        class t_PriorityQueue {
        public:
          PyObject_HEAD
          PriorityQueue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PriorityQueue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PriorityQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PriorityQueue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
