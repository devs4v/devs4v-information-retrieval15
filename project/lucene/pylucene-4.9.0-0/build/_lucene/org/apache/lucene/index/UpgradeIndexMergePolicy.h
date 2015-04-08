#ifndef org_apache_lucene_index_UpgradeIndexMergePolicy_H
#define org_apache_lucene_index_UpgradeIndexMergePolicy_H

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

        class UpgradeIndexMergePolicy : public ::org::apache::lucene::index::MergePolicy {
        public:
          enum {
            mid_init$_6034dd24,
            mid_close_54c6a166,
            mid_findForcedDeletesMerges_581dbc49,
            mid_findForcedMerges_4fe4a5b5,
            mid_findMerges_cada0df0,
            mid_toString_14c7b5c5,
            mid_useCompoundFile_70dc8488,
            mid_shouldUpgradeSegment_6649cdf8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UpgradeIndexMergePolicy(jobject obj) : ::org::apache::lucene::index::MergePolicy(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          UpgradeIndexMergePolicy(const UpgradeIndexMergePolicy& obj) : ::org::apache::lucene::index::MergePolicy(obj) {}

          UpgradeIndexMergePolicy(const ::org::apache::lucene::index::MergePolicy &);

          void close() const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::IndexWriter &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::IndexWriter &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::IndexWriter &) const;
          ::java::lang::String toString() const;
          jboolean useCompoundFile(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::SegmentCommitInfo &, const ::org::apache::lucene::index::IndexWriter &) const;
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
        extern PyTypeObject PY_TYPE(UpgradeIndexMergePolicy);

        class t_UpgradeIndexMergePolicy {
        public:
          PyObject_HEAD
          UpgradeIndexMergePolicy object;
          static PyObject *wrap_Object(const UpgradeIndexMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
