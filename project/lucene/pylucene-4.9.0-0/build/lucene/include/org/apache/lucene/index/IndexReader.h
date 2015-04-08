#ifndef org_apache_lucene_index_IndexReader_H
#define org_apache_lucene_index_IndexReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class Terms;
        class Fields;
        class DirectoryReader;
        class IndexCommit;
        class IndexWriter;
        class IndexReader$ReaderClosedListener;
        class IndexReaderContext;
        class AtomicReaderContext;
        class StoredFieldVisitor;
      }
      namespace document {
        class Document;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
    class List;
  }
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexReader : public ::java::lang::Object {
        public:
          enum {
            mid_addReaderClosedListener_60172ded,
            mid_close_54c6a166,
            mid_decRef_54c6a166,
            mid_docFreq_7eca6a9e,
            mid_document_9c2cfcf9,
            mid_document_f65cb155,
            mid_document_a2ea3ebe,
            mid_equals_290588e2,
            mid_getCombinedCoreAndDeletesKey_846352c3,
            mid_getContext_5823c99a,
            mid_getCoreCacheKey_846352c3,
            mid_getDocCount_5fdc3f57,
            mid_getRefCount_54c6a179,
            mid_getSumDocFreq_5fdc3f54,
            mid_getSumTotalTermFreq_5fdc3f54,
            mid_getTermVector_ffaa1be2,
            mid_getTermVectors_ef1c9c73,
            mid_hasDeletions_54c6a16a,
            mid_hashCode_54c6a179,
            mid_incRef_54c6a166,
            mid_leaves_87851566,
            mid_maxDoc_54c6a179,
            mid_numDeletedDocs_54c6a179,
            mid_numDocs_54c6a179,
            mid_open_26fd6272,
            mid_open_109b8ac7,
            mid_open_d7b74111,
            mid_open_13bade12,
            mid_open_e4ee522b,
            mid_registerParentReader_7d7eaea9,
            mid_removeReaderClosedListener_60172ded,
            mid_totalTermFreq_7eca6a9d,
            mid_tryIncRef_54c6a16a,
            mid_ensureOpen_54c6a166,
            mid_doClose_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexReader(const IndexReader& obj) : ::java::lang::Object(obj) {}

          void addReaderClosedListener(const ::org::apache::lucene::index::IndexReader$ReaderClosedListener &) const;
          void close() const;
          void decRef() const;
          jint docFreq(const ::org::apache::lucene::index::Term &) const;
          ::org::apache::lucene::document::Document document(jint) const;
          ::org::apache::lucene::document::Document document(jint, const ::java::util::Set &) const;
          void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::Object getCombinedCoreAndDeletesKey() const;
          ::org::apache::lucene::index::IndexReaderContext getContext() const;
          ::java::lang::Object getCoreCacheKey() const;
          jint getDocCount(const ::java::lang::String &) const;
          jint getRefCount() const;
          jlong getSumDocFreq(const ::java::lang::String &) const;
          jlong getSumTotalTermFreq(const ::java::lang::String &) const;
          ::org::apache::lucene::index::Terms getTermVector(jint, const ::java::lang::String &) const;
          ::org::apache::lucene::index::Fields getTermVectors(jint) const;
          jboolean hasDeletions() const;
          jint hashCode() const;
          void incRef() const;
          ::java::util::List leaves() const;
          jint maxDoc() const;
          jint numDeletedDocs() const;
          jint numDocs() const;
          static ::org::apache::lucene::index::DirectoryReader open(const ::org::apache::lucene::index::IndexCommit &);
          static ::org::apache::lucene::index::DirectoryReader open(const ::org::apache::lucene::store::Directory &);
          static ::org::apache::lucene::index::DirectoryReader open(const ::org::apache::lucene::store::Directory &, jint);
          static ::org::apache::lucene::index::DirectoryReader open(const ::org::apache::lucene::index::IndexCommit &, jint);
          static ::org::apache::lucene::index::DirectoryReader open(const ::org::apache::lucene::index::IndexWriter &, jboolean);
          void registerParentReader(const IndexReader &) const;
          void removeReaderClosedListener(const ::org::apache::lucene::index::IndexReader$ReaderClosedListener &) const;
          jlong totalTermFreq(const ::org::apache::lucene::index::Term &) const;
          jboolean tryIncRef() const;
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
        extern PyTypeObject PY_TYPE(IndexReader);

        class t_IndexReader {
        public:
          PyObject_HEAD
          IndexReader object;
          static PyObject *wrap_Object(const IndexReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
