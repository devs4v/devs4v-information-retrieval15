#ifndef org_apache_lucene_facet_TopOrdAndIntQueue_H
#define org_apache_lucene_facet_TopOrdAndIntQueue_H

#include "org/apache/lucene/util/PriorityQueue.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class TopOrdAndIntQueue$OrdAndValue;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class TopOrdAndIntQueue : public ::org::apache::lucene::util::PriorityQueue {
        public:
          enum {
            mid_init$_39c7bd3c,
            mid_lessThan_bb8ee210,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopOrdAndIntQueue(jobject obj) : ::org::apache::lucene::util::PriorityQueue(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TopOrdAndIntQueue(const TopOrdAndIntQueue& obj) : ::org::apache::lucene::util::PriorityQueue(obj) {}

          TopOrdAndIntQueue(jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyTypeObject PY_TYPE(TopOrdAndIntQueue);

        class t_TopOrdAndIntQueue {
        public:
          PyObject_HEAD
          TopOrdAndIntQueue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopOrdAndIntQueue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopOrdAndIntQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopOrdAndIntQueue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
