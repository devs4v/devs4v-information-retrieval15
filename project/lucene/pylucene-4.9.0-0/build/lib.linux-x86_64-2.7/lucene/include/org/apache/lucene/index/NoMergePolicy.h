#ifndef org_apache_lucene_index_NoMergePolicy_H
#define org_apache_lucene_index_NoMergePolicy_H

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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class NoMergePolicy : public ::org::apache::lucene::index::MergePolicy {
        public:
          enum {
            mid_close_54c6a166,
            mid_findForcedDeletesMerges_581dbc49,
            mid_findForcedMerges_4fe4a5b5,
            mid_findMerges_cada0df0,
            mid_toString_14c7b5c5,
            mid_useCompoundFile_70dc8488,
            mid_size_5454cb07,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NoMergePolicy(jobject obj) : ::org::apache::lucene::index::MergePolicy(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NoMergePolicy(const NoMergePolicy& obj) : ::org::apache::lucene::index::MergePolicy(obj) {}

          static ::org::apache::lucene::index::MergePolicy *INSTANCE;

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
        extern PyTypeObject PY_TYPE(NoMergePolicy);

        class t_NoMergePolicy {
        public:
          PyObject_HEAD
          NoMergePolicy object;
          static PyObject *wrap_Object(const NoMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
