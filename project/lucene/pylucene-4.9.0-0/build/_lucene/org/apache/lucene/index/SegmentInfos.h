#ifndef org_apache_lucene_index_SegmentInfos_H
#define org_apache_lucene_index_SegmentInfos_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfo;
        class SegmentCommitInfo;
      }
      namespace store {
        class Directory;
        class IOContext;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class List;
    class Iterator;
    class Collection;
  }
  namespace lang {
    class Iterable;
    class String;
    class Cloneable;
    class Class;
  }
  namespace io {
    class IOException;
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SegmentInfos : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_add_6649cdf4,
            mid_addAll_d1cac205,
            mid_asList_87851566,
            mid_changed_54c6a166,
            mid_clear_54c6a166,
            mid_clone_e585ba04,
            mid_files_b47d57a7,
            mid_generationFromSegmentsFileName_5fdc3f54,
            mid_getDefaultGenLookahedCount_54c6a179,
            mid_getGeneration_54c6a17a,
            mid_getInfoStream_00215d9e,
            mid_getLastCommitGeneration_4dd45410,
            mid_getLastCommitGeneration_2e261eee,
            mid_getLastCommitSegmentsFileName_1034289b,
            mid_getLastCommitSegmentsFileName_0451c495,
            mid_getLastGeneration_54c6a17a,
            mid_getNextSegmentFileName_14c7b5c5,
            mid_getSegmentsFileName_14c7b5c5,
            mid_getUserData_db60befd,
            mid_getVersion_54c6a17a,
            mid_info_924229db,
            mid_iterator_40858c90,
            mid_read_2e261ef2,
            mid_read_54f2a16c,
            mid_remove_6649cdf4,
            mid_setDefaultGenLookaheadCount_39c7bd3c,
            mid_setInfoStream_1b7c898b,
            mid_size_54c6a179,
            mid_toString_0451c495,
            mid_totalDocCount_54c6a179,
            mid_write3xInfo_1fab7fdc,
            mid_writeSegmentsGen_3dc02513,
            max_mid
          };

          enum {
            fid_counter,
            fid_userData,
            fid_version,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentInfos(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SegmentInfos(const SegmentInfos& obj) : ::java::lang::Object(obj) {}

          static jint FORMAT_SEGMENTS_GEN_CURRENT;
          static jint VERSION_40;
          static jint VERSION_46;
          static jint VERSION_48;
          static jint VERSION_49;

          jint _get_counter() const;
          void _set_counter(jint) const;
          ::java::util::Map _get_userData() const;
          void _set_userData(const ::java::util::Map &) const;
          jlong _get_version() const;
          void _set_version(jlong) const;

          SegmentInfos();

          void add(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          void addAll(const ::java::lang::Iterable &) const;
          ::java::util::List asList() const;
          void changed() const;
          void clear() const;
          SegmentInfos clone() const;
          ::java::util::Collection files(const ::org::apache::lucene::store::Directory &, jboolean) const;
          static jlong generationFromSegmentsFileName(const ::java::lang::String &);
          static jint getDefaultGenLookahedCount();
          jlong getGeneration() const;
          static ::java::io::PrintStream getInfoStream();
          static jlong getLastCommitGeneration(const JArray< ::java::lang::String > &);
          static jlong getLastCommitGeneration(const ::org::apache::lucene::store::Directory &);
          static ::java::lang::String getLastCommitSegmentsFileName(const JArray< ::java::lang::String > &);
          static ::java::lang::String getLastCommitSegmentsFileName(const ::org::apache::lucene::store::Directory &);
          jlong getLastGeneration() const;
          ::java::lang::String getNextSegmentFileName() const;
          ::java::lang::String getSegmentsFileName() const;
          ::java::util::Map getUserData() const;
          jlong getVersion() const;
          ::org::apache::lucene::index::SegmentCommitInfo info(jint) const;
          ::java::util::Iterator iterator() const;
          void read(const ::org::apache::lucene::store::Directory &) const;
          void read(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &) const;
          void remove(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          static void setDefaultGenLookaheadCount(jint);
          static void setInfoStream(const ::java::io::PrintStream &);
          jint size() const;
          ::java::lang::String toString(const ::org::apache::lucene::store::Directory &) const;
          jint totalDocCount() const;
          static ::java::lang::String write3xInfo(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &);
          static void writeSegmentsGen(const ::org::apache::lucene::store::Directory &, jlong);
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
        extern PyTypeObject PY_TYPE(SegmentInfos);

        class t_SegmentInfos {
        public:
          PyObject_HEAD
          SegmentInfos object;
          static PyObject *wrap_Object(const SegmentInfos&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
