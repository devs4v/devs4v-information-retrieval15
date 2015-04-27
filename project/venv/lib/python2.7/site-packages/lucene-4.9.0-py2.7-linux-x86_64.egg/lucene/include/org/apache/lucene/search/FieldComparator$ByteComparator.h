#ifndef org_apache_lucene_search_FieldComparator$ByteComparator_H
#define org_apache_lucene_search_FieldComparator$ByteComparator_H

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
    class Byte;
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

        class FieldComparator$ByteComparator : public ::org::apache::lucene::search::FieldComparator$NumericComparator {
        public:
          enum {
            mid_compare_d8d154b9,
            mid_compareBottom_39c7bd23,
            mid_compareTop_39c7bd23,
            mid_copy_d8d154a6,
            mid_setBottom_39c7bd3c,
            mid_setNextReader_6329aed7,
            mid_setTopValue_c2b89a85,
            mid_value_b801bfbe,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator$ByteComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator$NumericComparator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldComparator$ByteComparator(const FieldComparator$ByteComparator& obj) : ::org::apache::lucene::search::FieldComparator$NumericComparator(obj) {}

          jint compare(jint, jint) const;
          jint compareBottom(jint) const;
          jint compareTop(jint) const;
          void copy(jint, jint) const;
          void setBottom(jint) const;
          ::org::apache::lucene::search::FieldComparator setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
          void setTopValue(const ::java::lang::Byte &) const;
          ::java::lang::Byte value(jint) const;
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
        extern PyTypeObject PY_TYPE(FieldComparator$ByteComparator);

        class t_FieldComparator$ByteComparator {
        public:
          PyObject_HEAD
          FieldComparator$ByteComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator$ByteComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator$ByteComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator$ByteComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
