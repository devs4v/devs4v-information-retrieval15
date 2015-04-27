#ifndef org_apache_lucene_index_LiveIndexWriterConfig_H
#define org_apache_lucene_index_LiveIndexWriterConfig_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class LiveIndexWriterConfig : public ::java::lang::Object {
        public:
          enum {
            mid_getAnalyzer_347f60a9,
            mid_getCheckIntegrityAtMerge_54c6a16a,
            mid_getCodec_27f0a02b,
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
            mid_getUseCompoundFile_54c6a16a,
            mid_getWriteLockTimeout_54c6a17a,
            mid_setCheckIntegrityAtMerge_7cdcb09b,
            mid_setMaxBufferedDeleteTerms_4e167404,
            mid_setMaxBufferedDocs_4e167404,
            mid_setMergedSegmentWarmer_02b4678e,
            mid_setRAMBufferSizeMB_e14feba1,
            mid_setReaderTermsIndexDivisor_4e167404,
            mid_setTermIndexInterval_4e167404,
            mid_setUseCompoundFile_7cdcb09b,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LiveIndexWriterConfig(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          LiveIndexWriterConfig(const LiveIndexWriterConfig& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          jboolean getCheckIntegrityAtMerge() const;
          ::org::apache::lucene::codecs::Codec getCodec() const;
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
          jboolean getUseCompoundFile() const;
          jlong getWriteLockTimeout() const;
          LiveIndexWriterConfig setCheckIntegrityAtMerge(jboolean) const;
          LiveIndexWriterConfig setMaxBufferedDeleteTerms(jint) const;
          LiveIndexWriterConfig setMaxBufferedDocs(jint) const;
          LiveIndexWriterConfig setMergedSegmentWarmer(const ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer &) const;
          LiveIndexWriterConfig setRAMBufferSizeMB(jdouble) const;
          LiveIndexWriterConfig setReaderTermsIndexDivisor(jint) const;
          LiveIndexWriterConfig setTermIndexInterval(jint) const;
          LiveIndexWriterConfig setUseCompoundFile(jboolean) const;
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
        extern PyTypeObject PY_TYPE(LiveIndexWriterConfig);

        class t_LiveIndexWriterConfig {
        public:
          PyObject_HEAD
          LiveIndexWriterConfig object;
          static PyObject *wrap_Object(const LiveIndexWriterConfig&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
