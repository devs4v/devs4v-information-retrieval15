#ifndef org_apache_lucene_index_FilterAtomicReader$FilterFields_H
#define org_apache_lucene_index_FilterAtomicReader$FilterFields_H

#include "org/apache/lucene/index/Fields.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Iterator;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FilterAtomicReader$FilterFields : public ::org::apache::lucene::index::Fields {
        public:
          enum {
            mid_init$_a2a6a1f4,
            mid_iterator_40858c90,
            mid_size_54c6a179,
            mid_terms_ee262ab4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterAtomicReader$FilterFields(jobject obj) : ::org::apache::lucene::index::Fields(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilterAtomicReader$FilterFields(const FilterAtomicReader$FilterFields& obj) : ::org::apache::lucene::index::Fields(obj) {}

          FilterAtomicReader$FilterFields(const ::org::apache::lucene::index::Fields &);

          ::java::util::Iterator iterator() const;
          jint size() const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(FilterAtomicReader$FilterFields);

        class t_FilterAtomicReader$FilterFields {
        public:
          PyObject_HEAD
          FilterAtomicReader$FilterFields object;
          static PyObject *wrap_Object(const FilterAtomicReader$FilterFields&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
