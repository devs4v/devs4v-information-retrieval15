#ifndef org_apache_lucene_index_AtomicReader_H
#define org_apache_lucene_index_AtomicReader_H

#include "org/apache/lucene/index/IndexReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class FieldInfos;
        class DocsEnum;
        class AtomicReader$CoreClosedListener;
        class SortedSetDocValues;
        class Fields;
        class DocsAndPositionsEnum;
        class Term;
        class SortedDocValues;
        class BinaryDocValues;
        class NumericDocValues;
        class Terms;
        class SortedNumericDocValues;
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
      namespace index {

        class AtomicReader : public ::org::apache::lucene::index::IndexReader {
        public:
          enum {
            mid_addCoreClosedListener_cbc2818f,
            mid_checkIntegrity_54c6a166,
            mid_docFreq_7eca6a9e,
            mid_fields_77db581d,
            mid_getBinaryDocValues_ecab96be,
            mid_getContext_c2ef2576,
            mid_getDocCount_5fdc3f57,
            mid_getDocsWithField_e1c6a7db,
            mid_getFieldInfos_9ba20825,
            mid_getLiveDocs_03c2457d,
            mid_getNormValues_d2b19f49,
            mid_getNumericDocValues_d2b19f49,
            mid_getSortedDocValues_7b8b1a0a,
            mid_getSortedNumericDocValues_37cd1812,
            mid_getSortedSetDocValues_43e0e807,
            mid_getSumDocFreq_5fdc3f54,
            mid_getSumTotalTermFreq_5fdc3f54,
            mid_hasNorms_5fdc3f44,
            mid_removeCoreClosedListener_cbc2818f,
            mid_termDocsEnum_d9acd275,
            mid_termPositionsEnum_bf42c6a6,
            mid_terms_ee262ab4,
            mid_totalTermFreq_7eca6a9d,
            mid_addCoreClosedListenerAsReaderClosedListener_36772e26,
            mid_removeCoreClosedListenerAsReaderClosedListener_36772e26,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AtomicReader(jobject obj) : ::org::apache::lucene::index::IndexReader(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          AtomicReader(const AtomicReader& obj) : ::org::apache::lucene::index::IndexReader(obj) {}

          void addCoreClosedListener(const ::org::apache::lucene::index::AtomicReader$CoreClosedListener &) const;
          void checkIntegrity() const;
          jint docFreq(const ::org::apache::lucene::index::Term &) const;
          ::org::apache::lucene::index::Fields fields() const;
          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::AtomicReaderContext getContext() const;
          jint getDocCount(const ::java::lang::String &) const;
          ::org::apache::lucene::util::Bits getDocsWithField(const ::java::lang::String &) const;
          ::org::apache::lucene::index::FieldInfos getFieldInfos() const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::NumericDocValues getNormValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
          jlong getSumDocFreq(const ::java::lang::String &) const;
          jlong getSumTotalTermFreq(const ::java::lang::String &) const;
          jboolean hasNorms(const ::java::lang::String &) const;
          void removeCoreClosedListener(const ::org::apache::lucene::index::AtomicReader$CoreClosedListener &) const;
          ::org::apache::lucene::index::DocsEnum termDocsEnum(const ::org::apache::lucene::index::Term &) const;
          ::org::apache::lucene::index::DocsAndPositionsEnum termPositionsEnum(const ::org::apache::lucene::index::Term &) const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
          jlong totalTermFreq(const ::org::apache::lucene::index::Term &) const;
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
        extern PyTypeObject PY_TYPE(AtomicReader);

        class t_AtomicReader {
        public:
          PyObject_HEAD
          AtomicReader object;
          static PyObject *wrap_Object(const AtomicReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
