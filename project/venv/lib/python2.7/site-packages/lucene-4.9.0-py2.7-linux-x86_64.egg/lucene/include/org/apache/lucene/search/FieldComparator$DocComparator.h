#ifndef org_apache_lucene_search_FieldComparator$DocComparator_H
#define org_apache_lucene_search_FieldComparator$DocComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Integer;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FieldComparator$DocComparator : public ::org::apache::lucene::search::FieldComparator {
        public:
          enum {
            mid_compare_d8d154b9,
            mid_compareBottom_39c7bd23,
            mid_compareTop_39c7bd23,
            mid_copy_d8d154a6,
            mid_setBottom_39c7bd3c,
            mid_setNextReader_6329aed7,
            mid_setTopValue_af7b73a4,
            mid_value_7266dabb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator$DocComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldComparator$DocComparator(const FieldComparator$DocComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

          jint compare(jint, jint) const;
          jint compareBottom(jint) const;
          jint compareTop(jint) const;
          void copy(jint, jint) const;
          void setBottom(jint) const;
          ::org::apache::lucene::search::FieldComparator setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
          void setTopValue(const ::java::lang::Integer &) const;
          ::java::lang::Integer value(jint) const;
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
        extern PyTypeObject PY_TYPE(FieldComparator$DocComparator);

        class t_FieldComparator$DocComparator {
        public:
          PyObject_HEAD
          FieldComparator$DocComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator$DocComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator$DocComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator$DocComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
