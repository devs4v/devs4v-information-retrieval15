#ifndef org_apache_lucene_index_MergePolicy_H
#define org_apache_lucene_index_MergePolicy_H

#include "java/lang/Object.h"

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

        class MergePolicy : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_close_54c6a166,
            mid_findForcedDeletesMerges_581dbc49,
            mid_findForcedMerges_4fe4a5b5,
            mid_findMerges_cada0df0,
            mid_getMaxCFSSegmentSizeMB_54c6a174,
            mid_getNoCFSRatio_54c6a174,
            mid_setMaxCFSSegmentSizeMB_5d1c7645,
            mid_setNoCFSRatio_5d1c7645,
            mid_useCompoundFile_70dc8488,
            mid_size_5454cb07,
            mid_isMerged_70dc8488,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MergePolicy(const MergePolicy& obj) : ::java::lang::Object(obj) {}

          MergePolicy();

          void close() const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::IndexWriter &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::IndexWriter &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::IndexWriter &) const;
          jdouble getMaxCFSSegmentSizeMB() const;
          jdouble getNoCFSRatio() const;
          void setMaxCFSSegmentSizeMB(jdouble) const;
          void setNoCFSRatio(jdouble) const;
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
        extern PyTypeObject PY_TYPE(MergePolicy);

        class t_MergePolicy {
        public:
          PyObject_HEAD
          MergePolicy object;
          static PyObject *wrap_Object(const MergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
