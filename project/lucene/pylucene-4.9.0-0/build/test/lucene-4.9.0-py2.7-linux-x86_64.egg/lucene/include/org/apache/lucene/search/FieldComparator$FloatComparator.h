#ifndef org_apache_lucene_search_FieldComparator$FloatComparator_H
#define org_apache_lucene_search_FieldComparator$FloatComparator_H

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
    class Float;
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

        class FieldComparator$FloatComparator : public ::org::apache::lucene::search::FieldComparator$NumericComparator {
        public:
          enum {
            mid_init$_d3177756,
            mid_compare_d8d154b9,
            mid_compareBottom_39c7bd23,
            mid_compareTop_39c7bd23,
            mid_copy_d8d154a6,
            mid_setBottom_39c7bd3c,
            mid_setNextReader_6329aed7,
            mid_setTopValue_6b30eb6a,
            mid_value_c4acb5a1,
            mid_getFloatValues_e61237ca,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator$FloatComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator$NumericComparator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldComparator$FloatComparator(const FieldComparator$FloatComparator& obj) : ::org::apache::lucene::search::FieldComparator$NumericComparator(obj) {}

          FieldComparator$FloatComparator(jint, const ::java::lang::String &, const ::org::apache::lucene::search::FieldCache$Parser &, const ::java::lang::Float &);

          jint compare(jint, jint) const;
          jint compareBottom(jint) const;
          jint compareTop(jint) const;
          void copy(jint, jint) const;
          void setBottom(jint) const;
          ::org::apache::lucene::search::FieldComparator setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
          void setTopValue(const ::java::lang::Float &) const;
          ::java::lang::Float value(jint) const;
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
        extern PyTypeObject PY_TYPE(FieldComparator$FloatComparator);

        class t_FieldComparator$FloatComparator {
        public:
          PyObject_HEAD
          FieldComparator$FloatComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator$FloatComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator$FloatComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator$FloatComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
