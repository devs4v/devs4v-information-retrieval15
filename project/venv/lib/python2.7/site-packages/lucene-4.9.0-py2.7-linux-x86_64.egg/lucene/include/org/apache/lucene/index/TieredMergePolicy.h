#ifndef org_apache_lucene_index_TieredMergePolicy_H
#define org_apache_lucene_index_TieredMergePolicy_H

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
  namespace lang {
    class Boolean;
    class Class;
    class String;
  }
  namespace util {
    class Map;
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

        class TieredMergePolicy : public ::org::apache::lucene::index::MergePolicy {
        public:
          enum {
            mid_init$_54c6a166,
            mid_close_54c6a166,
            mid_findForcedDeletesMerges_581dbc49,
            mid_findForcedMerges_4fe4a5b5,
            mid_findMerges_cada0df0,
            mid_getFloorSegmentMB_54c6a174,
            mid_getForceMergeDeletesPctAllowed_54c6a174,
            mid_getMaxMergeAtOnce_54c6a179,
            mid_getMaxMergeAtOnceExplicit_54c6a179,
            mid_getMaxMergedSegmentMB_54c6a174,
            mid_getReclaimDeletesWeight_54c6a174,
            mid_getSegmentsPerTier_54c6a174,
            mid_setFloorSegmentMB_e09c6d07,
            mid_setForceMergeDeletesPctAllowed_e09c6d07,
            mid_setMaxMergeAtOnce_40ad7bc2,
            mid_setMaxMergeAtOnceExplicit_40ad7bc2,
            mid_setMaxMergedSegmentMB_e09c6d07,
            mid_setReclaimDeletesWeight_e09c6d07,
            mid_setSegmentsPerTier_e09c6d07,
            mid_toString_14c7b5c5,
            mid_score_178499e5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TieredMergePolicy(jobject obj) : ::org::apache::lucene::index::MergePolicy(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TieredMergePolicy(const TieredMergePolicy& obj) : ::org::apache::lucene::index::MergePolicy(obj) {}

          static jdouble DEFAULT_NO_CFS_RATIO;

          TieredMergePolicy();

          void close() const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::IndexWriter &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::IndexWriter &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::IndexWriter &) const;
          jdouble getFloorSegmentMB() const;
          jdouble getForceMergeDeletesPctAllowed() const;
          jint getMaxMergeAtOnce() const;
          jint getMaxMergeAtOnceExplicit() const;
          jdouble getMaxMergedSegmentMB() const;
          jdouble getReclaimDeletesWeight() const;
          jdouble getSegmentsPerTier() const;
          TieredMergePolicy setFloorSegmentMB(jdouble) const;
          TieredMergePolicy setForceMergeDeletesPctAllowed(jdouble) const;
          TieredMergePolicy setMaxMergeAtOnce(jint) const;
          TieredMergePolicy setMaxMergeAtOnceExplicit(jint) const;
          TieredMergePolicy setMaxMergedSegmentMB(jdouble) const;
          TieredMergePolicy setReclaimDeletesWeight(jdouble) const;
          TieredMergePolicy setSegmentsPerTier(jdouble) const;
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
        extern PyTypeObject PY_TYPE(TieredMergePolicy);

        class t_TieredMergePolicy {
        public:
          PyObject_HEAD
          TieredMergePolicy object;
          static PyObject *wrap_Object(const TieredMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
