#ifndef org_apache_lucene_search_FieldComparator$ShortComparator_H
#define org_apache_lucene_search_FieldComparator$ShortComparator_H

#include "org/apache/lucene/search/FieldComparator$NumericComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class FieldComparator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Short;
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

        class FieldComparator$ShortComparator : public ::org::apache::lucene::search::FieldComparator$NumericComparator {
        public:
          enum {
            mid_compare_d8d154b9,
            mid_compareBottom_39c7bd23,
            mid_compareTop_39c7bd23,
            mid_copy_d8d154a6,
            mid_setBottom_39c7bd3c,
            mid_setNextReader_6329aed7,
            mid_setTopValue_6b8573ce,
            mid_value_5bcaf269,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator$ShortComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator$NumericComparator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldComparator$ShortComparator(const FieldComparator$ShortComparator& obj) : ::org::apache::lucene::search::FieldComparator$NumericComparator(obj) {}

          jint compare(jint, jint) const;
          jint compareBottom(jint) const;
          jint compareTop(jint) const;
          void copy(jint, jint) const;
          void setBottom(jint) const;
          ::org::apache::lucene::search::FieldComparator setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
          void setTopValue(const ::java::lang::Short &) const;
          ::java::lang::Short value(jint) const;
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
        extern PyTypeObject PY_TYPE(FieldComparator$ShortComparator);

        class t_FieldComparator$ShortComparator {
        public:
          PyObject_HEAD
          FieldComparator$ShortComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator$ShortComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator$ShortComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator$ShortComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
