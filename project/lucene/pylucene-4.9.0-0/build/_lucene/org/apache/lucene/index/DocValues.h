#ifndef org_apache_lucene_index_DocValues_H
#define org_apache_lucene_index_DocValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class SortedSetDocValues;
        class SortedDocValues;
        class BinaryDocValues;
        class NumericDocValues;
        class SortedNumericDocValues;
        class AtomicReader;
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

        class DocValues : public ::java::lang::Object {
        public:
          enum {
            mid_docsWithValue_6932366e,
            mid_docsWithValue_c7ef87d6,
            mid_docsWithValue_f9286ac1,
            mid_emptyBinary_56a19500,
            mid_emptyNumeric_729438c3,
            mid_emptySorted_57832734,
            mid_emptySortedNumeric_68ec8b8c,
            mid_emptySortedSet_4bead171,
            mid_getBinary_d197d479,
            mid_getDocsWithField_b8ffc438,
            mid_getNumeric_abcbf8b8,
            mid_getSorted_e27a1341,
            mid_getSortedNumeric_593e885b,
            mid_getSortedSet_1498712e,
            mid_singleton_9fed6638,
            mid_singleton_082bce56,
            mid_unwrapSingleton_c9f185f6,
            mid_unwrapSingleton_66807036,
            mid_unwrapSingletonBits_aa3508ee,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DocValues(const DocValues& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::util::Bits docsWithValue(const ::org::apache::lucene::index::SortedDocValues &, jint);
          static ::org::apache::lucene::util::Bits docsWithValue(const ::org::apache::lucene::index::SortedNumericDocValues &, jint);
          static ::org::apache::lucene::util::Bits docsWithValue(const ::org::apache::lucene::index::SortedSetDocValues &, jint);
          static ::org::apache::lucene::index::BinaryDocValues emptyBinary();
          static ::org::apache::lucene::index::NumericDocValues emptyNumeric();
          static ::org::apache::lucene::index::SortedDocValues emptySorted();
          static ::org::apache::lucene::index::SortedNumericDocValues emptySortedNumeric();
          static ::org::apache::lucene::index::SortedSetDocValues emptySortedSet();
          static ::org::apache::lucene::index::BinaryDocValues getBinary(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &);
          static ::org::apache::lucene::util::Bits getDocsWithField(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::NumericDocValues getNumeric(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedDocValues getSorted(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedNumericDocValues getSortedNumeric(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedSetDocValues getSortedSet(const ::org::apache::lucene::index::AtomicReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedSetDocValues singleton(const ::org::apache::lucene::index::SortedDocValues &);
          static ::org::apache::lucene::index::SortedNumericDocValues singleton(const ::org::apache::lucene::index::NumericDocValues &, const ::org::apache::lucene::util::Bits &);
          static ::org::apache::lucene::index::SortedDocValues unwrapSingleton(const ::org::apache::lucene::index::SortedSetDocValues &);
          static ::org::apache::lucene::index::NumericDocValues unwrapSingleton(const ::org::apache::lucene::index::SortedNumericDocValues &);
          static ::org::apache::lucene::util::Bits unwrapSingletonBits(const ::org::apache::lucene::index::SortedNumericDocValues &);
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
        extern PyTypeObject PY_TYPE(DocValues);

        class t_DocValues {
        public:
          PyObject_HEAD
          DocValues object;
          static PyObject *wrap_Object(const DocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
