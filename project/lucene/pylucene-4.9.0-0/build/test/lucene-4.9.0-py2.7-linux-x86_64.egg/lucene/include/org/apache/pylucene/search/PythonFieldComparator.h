#ifndef org_apache_pylucene_search_PythonFieldComparator_H
#define org_apache_pylucene_search_PythonFieldComparator_H

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
    class Throwable;
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
    namespace pylucene {
      namespace search {

        class PythonFieldComparator : public ::org::apache::lucene::search::FieldComparator {
        public:
          enum {
            mid_init$_54c6a166,
            mid_compare_d8d154b9,
            mid_compareBottom_39c7bd23,
            mid_compareDocToValue_f7cd74bb,
            mid_compareTop_39c7bd23,
            mid_copy_d8d154a6,
            mid_finalize_54c6a166,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            mid_setBottom_39c7bd3c,
            mid_setNextReader_6329aed7,
            mid_setTopValue_290588ee,
            mid_value_29be6a55,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFieldComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonFieldComparator(const PythonFieldComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

          PythonFieldComparator();

          jint compare(jint, jint) const;
          jint compareBottom(jint) const;
          jint compareDocToValue(jint, const ::java::lang::Object &) const;
          jint compareTop(jint) const;
          void copy(jint, jint) const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void setBottom(jint) const;
          ::org::apache::lucene::search::FieldComparator setNextReader(const ::org::apache::lucene::index::AtomicReaderContext &) const;
          void setTopValue(const ::java::lang::Object &) const;
          ::java::lang::Object value(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        extern PyTypeObject PY_TYPE(PythonFieldComparator);

        class t_PythonFieldComparator {
        public:
          PyObject_HEAD
          PythonFieldComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonFieldComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonFieldComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonFieldComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
