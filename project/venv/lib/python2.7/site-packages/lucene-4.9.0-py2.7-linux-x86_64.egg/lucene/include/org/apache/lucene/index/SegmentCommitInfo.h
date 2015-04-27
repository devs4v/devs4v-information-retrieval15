#ifndef org_apache_lucene_index_SegmentCommitInfo_H
#define org_apache_lucene_index_SegmentCommitInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfo;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Set;
    class Collection;
  }
  namespace lang {
    class Integer;
    class Class;
    class Long;
    class String;
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

        class SegmentCommitInfo : public ::java::lang::Object {
        public:
          enum {
            mid_init$_f66c7cbe,
            mid_clone_5df298a9,
            mid_files_2d2d7de4,
            mid_getDelCount_54c6a179,
            mid_getDelGen_54c6a17a,
            mid_getDocValuesGen_54c6a17a,
            mid_getDocValuesUpdatesFiles_db60befd,
            mid_getFieldInfosFiles_03e99967,
            mid_getFieldInfosGen_54c6a17a,
            mid_getNextDelGen_54c6a17a,
            mid_getNextDocValuesGen_54c6a17a,
            mid_getNextFieldInfosGen_54c6a17a,
            mid_hasDeletions_54c6a16a,
            mid_hasFieldUpdates_54c6a16a,
            mid_setDocValuesUpdatesFiles_4c9e2b1c,
            mid_setFieldInfosFiles_fb4f2b26,
            mid_setGenUpdatesFiles_4c9e2b1c,
            mid_sizeInBytes_54c6a17a,
            mid_toString_14c7b5c5,
            mid_toString_889826bf,
            max_mid
          };

          enum {
            fid_info,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentCommitInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SegmentCommitInfo(const SegmentCommitInfo& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::SegmentInfo _get_info() const;

          SegmentCommitInfo(const ::org::apache::lucene::index::SegmentInfo &, jint, jlong, jlong, jlong);

          SegmentCommitInfo clone() const;
          ::java::util::Collection files() const;
          jint getDelCount() const;
          jlong getDelGen() const;
          jlong getDocValuesGen() const;
          ::java::util::Map getDocValuesUpdatesFiles() const;
          ::java::util::Set getFieldInfosFiles() const;
          jlong getFieldInfosGen() const;
          jlong getNextDelGen() const;
          jlong getNextDocValuesGen() const;
          jlong getNextFieldInfosGen() const;
          jboolean hasDeletions() const;
          jboolean hasFieldUpdates() const;
          void setDocValuesUpdatesFiles(const ::java::util::Map &) const;
          void setFieldInfosFiles(const ::java::util::Set &) const;
          void setGenUpdatesFiles(const ::java::util::Map &) const;
          jlong sizeInBytes() const;
          ::java::lang::String toString() const;
          ::java::lang::String toString(const ::org::apache::lucene::store::Directory &, jint) const;
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
        extern PyTypeObject PY_TYPE(SegmentCommitInfo);

        class t_SegmentCommitInfo {
        public:
          PyObject_HEAD
          SegmentCommitInfo object;
          static PyObject *wrap_Object(const SegmentCommitInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
