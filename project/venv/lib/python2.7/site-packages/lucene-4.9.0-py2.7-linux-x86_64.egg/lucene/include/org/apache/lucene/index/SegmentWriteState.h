#ifndef org_apache_lucene_index_SegmentWriteState_H
#define org_apache_lucene_index_SegmentWriteState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class MutableBits;
        class InfoStream;
      }
      namespace index {
        class SegmentInfo;
        class FieldInfos;
      }
      namespace store {
        class Directory;
        class IOContext;
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

        class SegmentWriteState : public ::java::lang::Object {
        public:
          enum {
            mid_init$_bde10a1b,
            max_mid
          };

          enum {
            fid_context,
            fid_delCountOnFlush,
            fid_directory,
            fid_fieldInfos,
            fid_infoStream,
            fid_liveDocs,
            fid_segmentInfo,
            fid_segmentSuffix,
            fid_termIndexInterval,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentWriteState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SegmentWriteState(const SegmentWriteState& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::store::IOContext _get_context() const;
          jint _get_delCountOnFlush() const;
          void _set_delCountOnFlush(jint) const;
          ::org::apache::lucene::store::Directory _get_directory() const;
          ::org::apache::lucene::index::FieldInfos _get_fieldInfos() const;
          ::org::apache::lucene::util::InfoStream _get_infoStream() const;
          ::org::apache::lucene::util::MutableBits _get_liveDocs() const;
          void _set_liveDocs(const ::org::apache::lucene::util::MutableBits &) const;
          ::org::apache::lucene::index::SegmentInfo _get_segmentInfo() const;
          ::java::lang::String _get_segmentSuffix() const;
          jint _get_termIndexInterval() const;
          void _set_termIndexInterval(jint) const;

          SegmentWriteState(const SegmentWriteState &, const ::java::lang::String &);
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
        extern PyTypeObject PY_TYPE(SegmentWriteState);

        class t_SegmentWriteState {
        public:
          PyObject_HEAD
          SegmentWriteState object;
          static PyObject *wrap_Object(const SegmentWriteState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
