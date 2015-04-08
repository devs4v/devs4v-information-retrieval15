#ifndef org_apache_lucene_index_SegmentReader_H
#define org_apache_lucene_index_SegmentReader_H

#include "org/apache/lucene/index/AtomicReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class Bits;
      }
      namespace index {
        class AtomicReader$CoreClosedListener;
        class SortedSetDocValues;
        class FieldInfos;
        class NumericDocValues;
        class SegmentCommitInfo;
        class SortedDocValues;
        class BinaryDocValues;
        class Fields;
        class SortedNumericDocValues;
        class StoredFieldVisitor;
      }
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace codecs {
        class StoredFieldsReader;
        class TermVectorsReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
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

        class SegmentReader : public ::org::apache::lucene::index::AtomicReader {
        public:
          enum {
            mid_init$_20f5bc6a,
            mid_addCoreClosedListener_cbc2818f,
            mid_checkIntegrity_54c6a166,
            mid_directory_1f3934bb,
            mid_document_a2ea3ebe,
            mid_fields_77db581d,
            mid_getBinaryDocValues_ecab96be,
            mid_getCombinedCoreAndDeletesKey_846352c3,
            mid_getCoreCacheKey_846352c3,
            mid_getDocsWithField_e1c6a7db,
            mid_getFieldInfos_9ba20825,
            mid_getFieldsReader_ef585f0d,
            mid_getLiveDocs_03c2457d,
            mid_getNormValues_d2b19f49,
            mid_getNumericDocValues_d2b19f49,
            mid_getSegmentInfo_5df298a9,
            mid_getSegmentName_14c7b5c5,
            mid_getSortedDocValues_7b8b1a0a,
            mid_getSortedNumericDocValues_37cd1812,
            mid_getSortedSetDocValues_43e0e807,
            mid_getTermInfosIndexDivisor_54c6a179,
            mid_getTermVectors_ef1c9c73,
            mid_getTermVectorsReader_475a2624,
            mid_maxDoc_54c6a179,
            mid_numDocs_54c6a179,
            mid_ramBytesUsed_54c6a17a,
            mid_removeCoreClosedListener_cbc2818f,
            mid_toString_14c7b5c5,
            mid_doClose_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentReader(jobject obj) : ::org::apache::lucene::index::AtomicReader(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SegmentReader(const SegmentReader& obj) : ::org::apache::lucene::index::AtomicReader(obj) {}

          SegmentReader(const ::org::apache::lucene::index::SegmentCommitInfo &, jint, const ::org::apache::lucene::store::IOContext &);

          void addCoreClosedListener(const ::org::apache::lucene::index::AtomicReader$CoreClosedListener &) const;
          void checkIntegrity() const;
          ::org::apache::lucene::store::Directory directory() const;
          void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          ::org::apache::lucene::index::Fields fields() const;
          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::java::lang::Object getCombinedCoreAndDeletesKey() const;
          ::java::lang::Object getCoreCacheKey() const;
          ::org::apache::lucene::util::Bits getDocsWithField(const ::java::lang::String &) const;
          ::org::apache::lucene::index::FieldInfos getFieldInfos() const;
          ::org::apache::lucene::codecs::StoredFieldsReader getFieldsReader() const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::NumericDocValues getNormValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SegmentCommitInfo getSegmentInfo() const;
          ::java::lang::String getSegmentName() const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
          jint getTermInfosIndexDivisor() const;
          ::org::apache::lucene::index::Fields getTermVectors(jint) const;
          ::org::apache::lucene::codecs::TermVectorsReader getTermVectorsReader() const;
          jint maxDoc() const;
          jint numDocs() const;
          jlong ramBytesUsed() const;
          void removeCoreClosedListener(const ::org::apache::lucene::index::AtomicReader$CoreClosedListener &) const;
          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(SegmentReader);

        class t_SegmentReader {
        public:
          PyObject_HEAD
          SegmentReader object;
          static PyObject *wrap_Object(const SegmentReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
