#ifndef org_apache_lucene_index_FilterAtomicReader_H
#define org_apache_lucene_index_FilterAtomicReader_H

#include "org/apache/lucene/index/AtomicReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class AtomicReader$CoreClosedListener;
        class SortedSetDocValues;
        class Fields;
        class FieldInfos;
        class SortedDocValues;
        class BinaryDocValues;
        class NumericDocValues;
        class SortedNumericDocValues;
        class StoredFieldVisitor;
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

        class FilterAtomicReader : public ::org::apache::lucene::index::AtomicReader {
        public:
          enum {
            mid_init$_c9e29579,
            mid_addCoreClosedListener_cbc2818f,
            mid_checkIntegrity_54c6a166,
            mid_document_a2ea3ebe,
            mid_fields_77db581d,
            mid_getBinaryDocValues_ecab96be,
            mid_getDocsWithField_e1c6a7db,
            mid_getFieldInfos_9ba20825,
            mid_getLiveDocs_03c2457d,
            mid_getNormValues_d2b19f49,
            mid_getNumericDocValues_d2b19f49,
            mid_getSortedDocValues_7b8b1a0a,
            mid_getSortedNumericDocValues_37cd1812,
            mid_getSortedSetDocValues_43e0e807,
            mid_getTermVectors_ef1c9c73,
            mid_maxDoc_54c6a179,
            mid_numDocs_54c6a179,
            mid_removeCoreClosedListener_cbc2818f,
            mid_toString_14c7b5c5,
            mid_unwrap_3b1ad795,
            mid_doClose_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterAtomicReader(jobject obj) : ::org::apache::lucene::index::AtomicReader(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FilterAtomicReader(const FilterAtomicReader& obj) : ::org::apache::lucene::index::AtomicReader(obj) {}

          FilterAtomicReader(const ::org::apache::lucene::index::AtomicReader &);

          void addCoreClosedListener(const ::org::apache::lucene::index::AtomicReader$CoreClosedListener &) const;
          void checkIntegrity() const;
          void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          ::org::apache::lucene::index::Fields fields() const;
          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::util::Bits getDocsWithField(const ::java::lang::String &) const;
          ::org::apache::lucene::index::FieldInfos getFieldInfos() const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::NumericDocValues getNormValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::Fields getTermVectors(jint) const;
          jint maxDoc() const;
          jint numDocs() const;
          void removeCoreClosedListener(const ::org::apache::lucene::index::AtomicReader$CoreClosedListener &) const;
          ::java::lang::String toString() const;
          static ::org::apache::lucene::index::AtomicReader unwrap(const ::org::apache::lucene::index::AtomicReader &);
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
        extern PyTypeObject PY_TYPE(FilterAtomicReader);

        class t_FilterAtomicReader {
        public:
          PyObject_HEAD
          FilterAtomicReader object;
          static PyObject *wrap_Object(const FilterAtomicReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
