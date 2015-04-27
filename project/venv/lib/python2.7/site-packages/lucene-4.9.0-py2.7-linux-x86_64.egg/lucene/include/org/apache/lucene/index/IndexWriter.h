#ifndef org_apache_lucene_index_IndexWriter_H
#define org_apache_lucene_index_IndexWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexReader;
        class TwoPhaseCommit;
        class DirectoryReader;
        class IndexWriterConfig;
        class SegmentCommitInfo;
        class IndexableField;
        class LiveIndexWriterConfig;
        class MergePolicy$OneMerge;
      }
      namespace search {
        class Query;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace document {
        class Field;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Iterable;
    class String;
  }
  namespace util {
    class Map;
    class Collection;
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

        class IndexWriter : public ::java::lang::Object {
        public:
          enum {
            mid_init$_02525b2d,
            mid_addDocument_d1cac205,
            mid_addDocument_f74a1d55,
            mid_addDocuments_d1cac205,
            mid_addDocuments_f74a1d55,
            mid_addIndexes_a20f8ee9,
            mid_addIndexes_160e6086,
            mid_close_54c6a166,
            mid_close_bb0c767f,
            mid_commit_54c6a166,
            mid_deleteAll_54c6a166,
            mid_deleteDocuments_c9f85e01,
            mid_deleteDocuments_937b34d3,
            mid_deleteUnusedFiles_54c6a166,
            mid_forceMerge_39c7bd3c,
            mid_forceMerge_b3a85a05,
            mid_forceMergeDeletes_54c6a166,
            mid_forceMergeDeletes_bb0c767f,
            mid_getAnalyzer_347f60a9,
            mid_getCommitData_db60befd,
            mid_getConfig_d6b985f6,
            mid_getDirectory_1f3934bb,
            mid_getMergingSegments_2d2d7de4,
            mid_getNextMerge_2a262a14,
            mid_getReader_1de06693,
            mid_getReader_cfe2828e,
            mid_hasDeletions_54c6a16a,
            mid_hasPendingMerges_54c6a16a,
            mid_hasUncommittedChanges_54c6a16a,
            mid_isLocked_2e261efe,
            mid_maxDoc_54c6a179,
            mid_maybeMerge_54c6a166,
            mid_merge_54badd95,
            mid_numDeletedDocs_6649cdeb,
            mid_numDocs_54c6a179,
            mid_numRamDocs_54c6a179,
            mid_prepareCommit_54c6a166,
            mid_ramBytesUsed_54c6a17a,
            mid_ramSizeInBytes_54c6a17a,
            mid_rollback_54c6a166,
            mid_segString_14c7b5c5,
            mid_segString_e5fcb63c,
            mid_segString_edb3a3c3,
            mid_setCommitData_4c9e2b1c,
            mid_tryDeleteDocument_1e4306e9,
            mid_unlock_2e261ef2,
            mid_updateBinaryDocValue_1aaa0ac7,
            mid_updateDocValues_48345845,
            mid_updateDocument_b5aef5e2,
            mid_updateDocument_4d995db8,
            mid_updateDocuments_b5aef5e2,
            mid_updateDocuments_4d995db8,
            mid_updateNumericDocValue_3866ef1c,
            mid_waitForMerges_54c6a166,
            mid_flush_46f2e2c4,
            mid_ensureOpen_bb0c767f,
            mid_ensureOpen_54c6a166,
            mid_doAfterFlush_54c6a166,
            mid_doBeforeFlush_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexWriter(const IndexWriter& obj) : ::java::lang::Object(obj) {}

          static jint MAX_TERM_LENGTH;
          static ::java::lang::String *SOURCE;
          static ::java::lang::String *SOURCE_ADDINDEXES_READERS;
          static ::java::lang::String *SOURCE_FLUSH;
          static ::java::lang::String *SOURCE_MERGE;
          static ::java::lang::String *WRITE_LOCK_NAME;

          IndexWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig &);

          void addDocument(const ::java::lang::Iterable &) const;
          void addDocument(const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &) const;
          void addDocuments(const ::java::lang::Iterable &) const;
          void addDocuments(const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &) const;
          void addIndexes(const JArray< ::org::apache::lucene::index::IndexReader > &) const;
          void addIndexes(const JArray< ::org::apache::lucene::store::Directory > &) const;
          void close() const;
          void close(jboolean) const;
          void commit() const;
          void deleteAll() const;
          void deleteDocuments(const JArray< ::org::apache::lucene::index::Term > &) const;
          void deleteDocuments(const JArray< ::org::apache::lucene::search::Query > &) const;
          void deleteUnusedFiles() const;
          void forceMerge(jint) const;
          void forceMerge(jint, jboolean) const;
          void forceMergeDeletes() const;
          void forceMergeDeletes(jboolean) const;
          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          ::java::util::Map getCommitData() const;
          ::org::apache::lucene::index::LiveIndexWriterConfig getConfig() const;
          ::org::apache::lucene::store::Directory getDirectory() const;
          ::java::util::Collection getMergingSegments() const;
          ::org::apache::lucene::index::MergePolicy$OneMerge getNextMerge() const;
          ::org::apache::lucene::index::DirectoryReader getReader() const;
          ::org::apache::lucene::index::DirectoryReader getReader(jboolean) const;
          jboolean hasDeletions() const;
          jboolean hasPendingMerges() const;
          jboolean hasUncommittedChanges() const;
          static jboolean isLocked(const ::org::apache::lucene::store::Directory &);
          jint maxDoc() const;
          void maybeMerge() const;
          void merge(const ::org::apache::lucene::index::MergePolicy$OneMerge &) const;
          jint numDeletedDocs(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          jint numDocs() const;
          jint numRamDocs() const;
          void prepareCommit() const;
          jlong ramBytesUsed() const;
          jlong ramSizeInBytes() const;
          void rollback() const;
          ::java::lang::String segString() const;
          ::java::lang::String segString(const ::java::lang::Iterable &) const;
          ::java::lang::String segString(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          void setCommitData(const ::java::util::Map &) const;
          jboolean tryDeleteDocument(const ::org::apache::lucene::index::IndexReader &, jint) const;
          static void unlock(const ::org::apache::lucene::store::Directory &);
          void updateBinaryDocValue(const ::org::apache::lucene::index::Term &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &) const;
          void updateDocValues(const ::org::apache::lucene::index::Term &, const JArray< ::org::apache::lucene::document::Field > &) const;
          void updateDocument(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &) const;
          void updateDocument(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &) const;
          void updateDocuments(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &) const;
          void updateDocuments(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &) const;
          void updateNumericDocValue(const ::org::apache::lucene::index::Term &, const ::java::lang::String &, jlong) const;
          void waitForMerges() const;
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
        extern PyTypeObject PY_TYPE(IndexWriter);

        class t_IndexWriter {
        public:
          PyObject_HEAD
          IndexWriter object;
          static PyObject *wrap_Object(const IndexWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
