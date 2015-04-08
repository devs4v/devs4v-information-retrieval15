#ifndef org_apache_lucene_search_FieldComparator$DoubleComparator_H
#define org_apache_lucene_search_FieldComparator$DoubleComparator_H

#include "org/apache/lucene/search/FieldComparator$NumericComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace search {
        class FieldCache$Parser;
        class FieldComparator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Double;
    class String;
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

        class FieldComparator$DoubleComparator : public ::org::apache::lucene::search::FieldComparator$NumericComparator {
        public:
          enum {
            mid_init$_bf59efcc,
            mid_compare_d8d154b9,
            mid_compareBottom_39c7bd23,
            mid_compareTop_39c7bd23,
            mid_copy_d8d154a6,
            mid_setBottom_39c7bd3c,
            mid_setNextReader_6329aed7,
            mid_setTopValue_8baed06c,
            mid_value_a0bf0c9f,
            mid_getDoubleValues_9f6b3702,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator$DoubleComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator$NumericComparator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldComparator$DoubleComparator(const FieldComparator$DoubleComparator& obj) : ::org::apache::lucene::search::FieldComparator$NumericComparator(obj) {}

          FieldComparator$DoubleComparator(jint, const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$Parser &, const ::java::lang::Double &);

          jint compare(jint, jint) const;
          jint compareBottom(jint) const;
          jint compareTop(jint) const;
          void copy(jint, jint) const;
          void setBottom(jint) const;
          ::org::apache::lucene::search::FieldComparator setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
          void setTopValue(const ::java::lang::Double &) const;
          ::java::lang::Double value(jint) const;
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
        extern PyTypeObject PY_TYPE(FieldComparator$DoubleComparator);

        class t_FieldComparator$DoubleComparator {
        public:
          PyObject_HEAD
          FieldComparator$DoubleComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator$DoubleComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator$DoubleComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator$DoubleComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
