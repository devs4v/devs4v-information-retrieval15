#ifndef org_apache_lucene_index_LogMergePolicy_H
#define org_apache_lucene_index_LogMergePolicy_H

#include "org/apache/lucene/index/MergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter;
        class MergePolicy$MergeSpecification;
        class MergeTrigger;
        class SegmentCommitInfo;
        class SegmentInfos;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Boolean;
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

        class LogMergePolicy : public ::org::apache::lucene::index::MergePolicy {
        public:
          enum {
            mid_init$_54c6a166,
            mid_close_54c6a166,
            mid_findForcedDeletesMerges_581dbc49,
            mid_findForcedMerges_4fe4a5b5,
            mid_findMerges_cada0df0,
            mid_getCalibrateSizeByDeletes_54c6a16a,
            mid_getMaxMergeDocs_54c6a179,
            mid_getMergeFactor_54c6a179,
            mid_setCalibrateSizeByDeletes_bb0c767f,
            mid_setMaxMergeDocs_39c7bd3c,
            mid_setMergeFactor_39c7bd3c,
            mid_toString_14c7b5c5,
            mid_message_dcbb03ef,
            mid_isMerged_2ee943c8,
            mid_verbose_4f2fb7d9,
            mid_sizeDocs_5454cb07,
            mid_sizeBytes_5454cb07,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LogMergePolicy(jobject obj) : ::org::apache::lucene::index::MergePolicy(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          LogMergePolicy(const LogMergePolicy& obj) : ::org::apache::lucene::index::MergePolicy(obj) {}

          static jint DEFAULT_MAX_MERGE_DOCS;
          static jint DEFAULT_MERGE_FACTOR;
          static jdouble DEFAULT_NO_CFS_RATIO;
          static jdouble LEVEL_LOG_SPAN;

          LogMergePolicy();

          void close() const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::IndexWriter &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::IndexWriter &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::IndexWriter &) const;
          jboolean getCalibrateSizeByDeletes() const;
          jint getMaxMergeDocs() const;
          jint getMergeFactor() const;
          void setCalibrateSizeByDeletes(jboolean) const;
          void setMaxMergeDocs(jint) const;
          void setMergeFactor(jint) const;
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
        extern PyTypeObject PY_TYPE(LogMergePolicy);

        class t_LogMergePolicy {
        public:
          PyObject_HEAD
          LogMergePolicy object;
          static PyObject *wrap_Object(const LogMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
