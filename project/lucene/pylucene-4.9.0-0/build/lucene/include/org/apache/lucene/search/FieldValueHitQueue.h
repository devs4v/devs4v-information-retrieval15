#ifndef org_apache_lucene_search_FieldValueHitQueue_H
#define org_apache_lucene_search_FieldValueHitQueue_H

#include "org/apache/lucene/util/PriorityQueue.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortField;
        class FieldComparator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FieldValueHitQueue : public ::org::apache::lucene::util::PriorityQueue {
        public:
          enum {
            mid_create_c78d73c1,
            mid_getComparators_cbcbe6bc,
            mid_getReverseMul_dab10e75,
            mid_setComparator_205d9ea7,
            mid_lessThan_90234960,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldValueHitQueue(jobject obj) : ::org::apache::lucene::util::PriorityQueue(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldValueHitQueue(const FieldValueHitQueue& obj) : ::org::apache::lucene::util::PriorityQueue(obj) {}

          static FieldValueHitQueue create(const JArray< ::org::apache::lucene::search::SortField > &, jint);
          JArray< ::org::apache::lucene::search::FieldComparator > getComparators() const;
          JArray< jint > getReverseMul() const;
          void setComparator(jint, const ::org::apache::lucene::search::FieldComparator &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(FieldValueHitQueue);

        class t_FieldValueHitQueue {
        public:
          PyObject_HEAD
          FieldValueHitQueue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldValueHitQueue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldValueHitQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldValueHitQueue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
