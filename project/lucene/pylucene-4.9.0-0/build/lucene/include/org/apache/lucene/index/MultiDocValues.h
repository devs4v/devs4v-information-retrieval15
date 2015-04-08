#ifndef org_apache_lucene_index_MultiDocValues_H
#define org_apache_lucene_index_MultiDocValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class SortedSetDocValues;
        class IndexReader;
        class SortedDocValues;
        class BinaryDocValues;
        class NumericDocValues;
        class SortedNumericDocValues;
      }
    }
  }
}
namespace java {
  namespace lang {
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
      namespace index {

        class MultiDocValues : public ::java::lang::Object {
        public:
          enum {
            mid_getBinaryValues_03a34e9d,
            mid_getDocsWithField_cb5a3ee0,
            mid_getNormValues_e37a26c0,
            mid_getNumericValues_e37a26c0,
            mid_getSortedNumericValues_21f7b92b,
            mid_getSortedSetValues_0b5c63b6,
            mid_getSortedValues_af349b19,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDocValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiDocValues(const MultiDocValues& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::index::BinaryDocValues getBinaryValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::util::Bits getDocsWithField(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::NumericDocValues getNormValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::NumericDocValues getNumericValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedSetDocValues getSortedSetValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedDocValues getSortedValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
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
        extern PyTypeObject PY_TYPE(MultiDocValues);

        class t_MultiDocValues {
        public:
          PyObject_HEAD
          MultiDocValues object;
          static PyObject *wrap_Object(const MultiDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
