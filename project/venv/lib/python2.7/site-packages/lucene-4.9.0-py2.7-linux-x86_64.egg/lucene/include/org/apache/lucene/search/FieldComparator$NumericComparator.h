#ifndef org_apache_lucene_search_FieldComparator$NumericComparator_H
#define org_apache_lucene_search_FieldComparator$NumericComparator_H

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
    class Number;
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

        class FieldComparator$NumericComparator : public ::org::apache::lucene::search::FieldComparator {
        public:
          enum {
            mid_init$_158d1296,
            mid_setNextReader_6329aed7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator$NumericComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldComparator$NumericComparator(const FieldComparator$NumericComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

          FieldComparator$NumericComparator(const ::java::lang::String &, const ::java::lang::Number &);

          ::org::apache::lucene::search::FieldComparator setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
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
        extern PyTypeObject PY_TYPE(FieldComparator$NumericComparator);

        class t_FieldComparator$NumericComparator {
        public:
          PyObject_HEAD
          FieldComparator$NumericComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator$NumericComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator$NumericComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator$NumericComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
