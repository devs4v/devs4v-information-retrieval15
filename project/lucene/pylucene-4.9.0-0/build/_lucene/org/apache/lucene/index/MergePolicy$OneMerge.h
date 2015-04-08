#ifndef org_apache_lucene_index_MergePolicy$OneMerge_H
#define org_apache_lucene_index_MergePolicy$OneMerge_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$DocMap;
        class MergeState;
        class AtomicReader;
        class SegmentCommitInfo;
        class MergePolicy$MergeAbortedException;
      }
      namespace store {
        class Directory;
        class MergeInfo;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
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

        class MergePolicy$OneMerge : public ::java::lang::Object {
        public:
          enum {
            mid_init$_1fde8fc3,
            mid_checkAborted_2e261ef2,
            mid_getDocMap_a6eb90c4,
            mid_getMergeInfo_e24ac350,
            mid_getMergeReaders_87851566,
            mid_getPause_54c6a16a,
            mid_segString_0451c495,
            mid_setInfo_6649cdf4,
            mid_setPause_bb0c767f,
            mid_totalBytesSize_54c6a17a,
            mid_totalNumDocs_54c6a179,
            max_mid
          };

          enum {
            fid_estimatedMergeBytes,
            fid_segments,
            fid_totalDocCount,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$OneMerge(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$OneMerge(const MergePolicy$OneMerge& obj) : ::java::lang::Object(obj) {}

          jlong _get_estimatedMergeBytes() const;
          void _set_estimatedMergeBytes(jlong) const;
          ::java::util::List _get_segments() const;
          jint _get_totalDocCount() const;

          MergePolicy$OneMerge(const ::java::util::List &);

          void checkAborted(const ::org::apache::lucene::store::Directory &) const;
          ::org::apache::lucene::index::MergePolicy$DocMap getDocMap(const ::org::apache::lucene::index::MergeState &) const;
          ::org::apache::lucene::store::MergeInfo getMergeInfo() const;
          ::java::util::List getMergeReaders() const;
          jboolean getPause() const;
          ::java::lang::String segString(const ::org::apache::lucene::store::Directory &) const;
          void setInfo(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          void setPause(jboolean) const;
          jlong totalBytesSize() const;
          jint totalNumDocs() const;
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
        extern PyTypeObject PY_TYPE(MergePolicy$OneMerge);

        class t_MergePolicy$OneMerge {
        public:
          PyObject_HEAD
          MergePolicy$OneMerge object;
          static PyObject *wrap_Object(const MergePolicy$OneMerge&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
