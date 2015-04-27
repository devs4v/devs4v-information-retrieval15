#ifndef org_apache_lucene_sandbox_queries_SlowCollatedStringComparator_H
#define org_apache_lucene_sandbox_queries_SlowCollatedStringComparator_H

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
    class Class;
    class String;
  }
  namespace text {
    class Collator;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {

          class SlowCollatedStringComparator : public ::org::apache::lucene::search::FieldComparator {
          public:
            enum {
              mid_init$_f4353060,
              mid_compare_d8d154b9,
              mid_compareBottom_39c7bd23,
              mid_compareTop_39c7bd23,
              mid_compareValues_4a26475d,
              mid_copy_d8d154a6,
              mid_setBottom_39c7bd3c,
              mid_setNextReader_6329aed7,
              mid_setTopValue_5fdc3f48,
              mid_value_141401b3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SlowCollatedStringComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SlowCollatedStringComparator(const SlowCollatedStringComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

            SlowCollatedStringComparator(jint, const ::java::lang::String &, const ::java::text::Collator &);

            jint compare(jint, jint) const;
            jint compareBottom(jint) const;
            jint compareTop(jint) const;
            jint compareValues(const ::java::lang::String &, const ::java::lang::String &) const;
            void copy(jint, jint) const;
            void setBottom(jint) const;
            ::org::apache::lucene::search::FieldComparator setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
            void setTopValue(const ::java::lang::String &) const;
            ::java::lang::String value(jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {
          extern PyTypeObject PY_TYPE(SlowCollatedStringComparator);

          class t_SlowCollatedStringComparator {
          public:
            PyObject_HEAD
            SlowCollatedStringComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SlowCollatedStringComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SlowCollatedStringComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SlowCollatedStringComparator&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
