#ifndef org_apache_lucene_index_MergeState_H
#define org_apache_lucene_index_MergeState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class InfoStream;
      }
      namespace index {
        class FieldInfos;
        class MergeState$CheckAbort;
        class MergeState$DocMap;
        class SegmentReader;
        class SegmentInfo;
        class AtomicReader;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergeState : public ::java::lang::Object {
        public:

          enum {
            fid_checkAbort,
            fid_docBase,
            fid_docMaps,
            fid_fieldInfos,
            fid_infoStream,
            fid_matchedCount,
            fid_matchingSegmentReaders,
            fid_readers,
            fid_segmentInfo,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MergeState(const MergeState& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::MergeState$CheckAbort _get_checkAbort() const;
          JArray< jint > _get_docBase() const;
          void _set_docBase(const JArray< jint > &) const;
          JArray< ::org::apache::lucene::index::MergeState$DocMap > _get_docMaps() const;
          void _set_docMaps(const JArray< ::org::apache::lucene::index::MergeState$DocMap > &) const;
          ::org::apache::lucene::index::FieldInfos _get_fieldInfos() const;
          void _set_fieldInfos(const ::org::apache::lucene::index::FieldInfos &) const;
          ::org::apache::lucene::util::InfoStream _get_infoStream() const;
          jint _get_matchedCount() const;
          void _set_matchedCount(jint) const;
          JArray< ::org::apache::lucene::index::SegmentReader > _get_matchingSegmentReaders() const;
          void _set_matchingSegmentReaders(const JArray< ::org::apache::lucene::index::SegmentReader > &) const;
          ::java::util::List _get_readers() const;
          ::org::apache::lucene::index::SegmentInfo _get_segmentInfo() const;
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
        extern PyTypeObject PY_TYPE(MergeState);

        class t_MergeState {
        public:
          PyObject_HEAD
          MergeState object;
          static PyObject *wrap_Object(const MergeState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
