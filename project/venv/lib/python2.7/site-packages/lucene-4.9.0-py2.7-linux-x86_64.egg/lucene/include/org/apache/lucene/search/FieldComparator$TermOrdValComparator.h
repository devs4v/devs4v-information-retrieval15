#ifndef org_apache_lucene_search_FieldComparator$TermOrdValComparator_H
#define org_apache_lucene_search_FieldComparator$TermOrdValComparator_H

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
    class String;
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

        class FieldComparator$TermOrdValComparator : public ::org::apache::lucene::search::FieldComparator {
        public:
          enum {
            mid_init$_d40a4f2e,
            mid_init$_cab89017,
            mid_compare_d8d154b9,
            mid_compareBottom_39c7bd23,
            mid_compareTop_39c7bd23,
            mid_compareValues_594e5ef9,
            mid_copy_d8d154a6,
            mid_setBottom_39c7bd3c,
            mid_setNextReader_6329aed7,
            mid_setTopValue_7bc03dc4,
            mid_value_b57e9c3f,
            mid_getSortedDocValues_59a5c92f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator$TermOrdValComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldComparator$TermOrdValComparator(const FieldComparator$TermOrdValComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

          FieldComparator$TermOrdValComparator(jint, const ::java::lang::String &);
          FieldComparator$TermOrdValComparator(jint, const ::java::lang::String &, jboolean);

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
        extern PyTypeObject PY_TYPE(FieldComparator$TermOrdValComparator);

        class t_FieldComparator$TermOrdValComparator {
        public:
          PyObject_HEAD
          FieldComparator$TermOrdValComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator$TermOrdValComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator$TermOrdValComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator$TermOrdValComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
