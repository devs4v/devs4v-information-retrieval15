#ifndef org_apache_lucene_index_IndexWriterConfig_H
#define org_apache_lucene_index_IndexWriterConfig_H

#include "org/apache/lucene/index/LiveIndexWriterConfig.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
        class InfoStream;
      }
      namespace index {
        class IndexWriter$IndexReaderWarmer;
        class MergePolicy;
        class IndexDeletionPolicy;
        class IndexWriterConfig$OpenMode;
        class IndexCommit;
        class MergeScheduler;
      }
      namespace search {
        namespace similarities {
          class Similarity;
        }
      }
      namespace analysis {
        class Analyzer;
      }
      namespace codecs {
        class Codec;
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
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexWriterConfig : public ::org::apache::lucene::index::LiveIndexWriterConfig {
        public:
          enum {
            mid_init$_b2a1ba2f,
            mid_getAnalyzer_347f60a9,
            mid_getCodec_27f0a02b,
            mid_getDefaultWriteLockTimeout_54c6a17a,
            mid_getIndexCommit_09307276,
            mid_getIndexDeletionPolicy_a18376c3,
            mid_getInfoStream_1923150b,
            mid_getMaxBufferedDeleteTerms_54c6a179,
            mid_getMaxBufferedDocs_54c6a179,
            mid_getMaxThreadStates_54c6a179,
            mid_getMergePolicy_753f8dfd,
            mid_getMergeScheduler_ff96d655,
            mid_getMergedSegmentWarmer_b145c9d7,
            mid_getOpenMode_4134b214,
            mid_getRAMBufferSizeMB_54c6a174,
            mid_getRAMPerThreadHardLimitMB_54c6a179,
            mid_getReaderPooling_54c6a16a,
            mid_getReaderTermsIndexDivisor_54c6a179,
            mid_getSimilarity_efcb1233,
            mid_getTermIndexInterval_54c6a179,
            mid_getWriteLockTimeout_54c6a17a,
            mid_setCodec_c6322414,
            mid_setDefaultWriteLockTimeout_0ee6df2f,
            mid_setIndexCommit_ec04569d,
            mid_setIndexDeletionPolicy_e3778c88,
            mid_setInfoStream_46a28868,
            mid_setInfoStream_915f97a5,
            mid_setMaxBufferedDeleteTerms_0a512c4a,
            mid_setMaxBufferedDocs_0a512c4a,
            mid_setMaxThreadStates_0a512c4a,
            mid_setMergePolicy_35fd1692,
            mid_setMergeScheduler_a7b4ba7a,
            mid_setMergedSegmentWarmer_f60591d0,
            mid_setOpenMode_ecf4c6f7,
            mid_setRAMBufferSizeMB_f49ea4cb,
            mid_setRAMPerThreadHardLimitMB_0a512c4a,
            mid_setReaderPooling_53913b61,
            mid_setReaderTermsIndexDivisor_0a512c4a,
            mid_setSimilarity_842e4878,
            mid_setTermIndexInterval_0a512c4a,
            mid_setUseCompoundFile_53913b61,
            mid_setWriteLockTimeout_c56ab6f1,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexWriterConfig(jobject obj) : ::org::apache::lucene::index::LiveIndexWriterConfig(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexWriterConfig(const IndexWriterConfig& obj) : ::org::apache::lucene::index::LiveIndexWriterConfig(obj) {}

          static jboolean DEFAULT_CHECK_INTEGRITY_AT_MERGE;
          static jint DEFAULT_MAX_BUFFERED_DELETE_TERMS;
          static jint DEFAULT_MAX_BUFFERED_DOCS;
          static jint DEFAULT_MAX_THREAD_STATES;
          static jdouble DEFAULT_RAM_BUFFER_SIZE_MB;
          static jint DEFAULT_RAM_PER_THREAD_HARD_LIMIT_MB;
          static jboolean DEFAULT_READER_POOLING;
          static jint DEFAULT_READER_TERMS_INDEX_DIVISOR;
          static jint DEFAULT_TERM_INDEX_INTERVAL;
          static jboolean DEFAULT_USE_COMPOUND_FILE_SYSTEM;
          static jint DISABLE_AUTO_FLUSH;
          static jlong WRITE_LOCK_TIMEOUT;

          IndexWriterConfig(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::Analyzer &);

          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          ::org::apache::lucene::codecs::Codec getCodec() const;
          static jlong getDefaultWriteLockTimeout();
          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          ::org::apache::lucene::index::IndexDeletionPolicy getIndexDeletionPolicy() const;
          ::org::apache::lucene::util::InfoStream getInfoStream() const;
          jint getMaxBufferedDeleteTerms() const;
          jint getMaxBufferedDocs() const;
          jint getMaxThreadStates() const;
          ::org::apache::lucene::index::MergePolicy getMergePolicy() const;
          ::org::apache::lucene::index::MergeScheduler getMergeScheduler() const;
          ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer getMergedSegmentWarmer() const;
          ::org::apache::lucene::index::IndexWriterConfig$OpenMode getOpenMode() const;
          jdouble getRAMBufferSizeMB() const;
          jint getRAMPerThreadHardLimitMB() const;
          jboolean getReaderPooling() const;
          jint getReaderTermsIndexDivisor() const;
          ::org::apache::lucene::search::similarities::Similarity getSimilarity() const;
          jint getTermIndexInterval() const;
          jlong getWriteLockTimeout() const;
          IndexWriterConfig setCodec(const ::org::apache::lucene::codecs::Codec &) const;
          static void setDefaultWriteLockTimeout(jlong);
          IndexWriterConfig setIndexCommit(const ::org::apache::lucene::index::IndexCommit &) const;
          IndexWriterConfig setIndexDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &) const;
          IndexWriterConfig setInfoStream(const ::org::apache::lucene::util::InfoStream &) const;
          IndexWriterConfig setInfoStream(const ::java::io::PrintStream &) const;
          IndexWriterConfig setMaxBufferedDeleteTerms(jint) const;
          IndexWriterConfig setMaxBufferedDocs(jint) const;
          IndexWriterConfig setMaxThreadStates(jint) const;
          IndexWriterConfig setMergePolicy(const ::org::apache::lucene::index::MergePolicy &) const;
          IndexWriterConfig setMergeScheduler(const ::org::apache::lucene::index::MergeScheduler &) const;
          IndexWriterConfig setMergedSegmentWarmer(const ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer &) const;
          IndexWriterConfig setOpenMode(const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &) const;
          IndexWriterConfig setRAMBufferSizeMB(jdouble) const;
          IndexWriterConfig setRAMPerThreadHardLimitMB(jint) const;
          IndexWriterConfig setReaderPooling(jboolean) const;
          IndexWriterConfig setReaderTermsIndexDivisor(jint) const;
          IndexWriterConfig setSimilarity(const ::org::apache::lucene::search::similarities::Similarity &) const;
          IndexWriterConfig setTermIndexInterval(jint) const;
          IndexWriterConfig setUseCompoundFile(jboolean) const;
          IndexWriterConfig setWriteLockTimeout(jlong) const;
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
        extern PyTypeObject PY_TYPE(IndexWriterConfig);

        class t_IndexWriterConfig {
        public:
          PyObject_HEAD
          IndexWriterConfig object;
          static PyObject *wrap_Object(const IndexWriterConfig&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
