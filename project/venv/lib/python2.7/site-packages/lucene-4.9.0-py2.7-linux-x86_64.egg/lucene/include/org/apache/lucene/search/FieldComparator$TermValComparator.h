#ifndef org_apache_lucene_search_FieldComparator$TermValComparator_H
#define org_apache_lucene_search_FieldComparator$TermValComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class AtomicReaderContext;
      }
    }
  }
}
namespace java {
  namespace lang {
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

        class FieldComparator$TermValComparator : public ::org::apache::lucene::search::FieldComparator {
        public:
          enum {
            mid_compare_d8d154b9,
            mid_compareBottom_39c7bd23,
            mid_compareTop_39c7bd23,
            mid_compareValues_594e5ef9,
            mid_copy_d8d154a6,
            mid_setBottom_39c7bd3c,
            mid_setNextReader_6329aed7,
            mid_setTopValue_7bc03dc4,
            mid_value_b57e9c3f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator$TermValComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldComparator$TermValComparator(const FieldComparator$TermValComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

          jint compare(jint, jint) const;
          jint compareBottom(jint) const;
          jint compareTop(jint) const;
          jint compareValues(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
          void copy(jint, jint) const;
          void setBottom(jint) const;
          ::org::apache::lucene::search::FieldComparator setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
          void setTopValue(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::util::BytesRef value(jint) const;
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
        extern PyTypeObject PY_TYPE(FieldComparator$TermValComparator);

        class t_FieldComparator$TermValComparator {
        public:
          PyObject_HEAD
          FieldComparator$TermValComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator$TermValComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator$TermValComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator$TermValComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
