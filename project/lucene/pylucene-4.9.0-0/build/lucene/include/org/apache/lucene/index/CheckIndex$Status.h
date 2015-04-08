#ifndef org_apache_lucene_index_CheckIndex$Status_H
#define org_apache_lucene_index_CheckIndex$Status_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class CheckIndex$Status$SegmentInfoStatus;
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
    class List;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex$Status : public ::java::lang::Object {
        public:

          enum {
            fid_cantOpenSegments,
            fid_clean,
            fid_dir,
            fid_maxSegmentName,
            fid_missingSegmentVersion,
            fid_missingSegments,
            fid_numBadSegments,
            fid_numSegments,
            fid_partial,
            fid_segmentInfos,
            fid_segmentsChecked,
            fid_segmentsFileName,
            fid_toolOutOfDate,
            fid_totLoseDocCount,
            fid_userData,
            fid_validCounter,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$Status(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$Status(const CheckIndex$Status& obj) : ::java::lang::Object(obj) {}

          jboolean _get_cantOpenSegments() const;
          void _set_cantOpenSegments(jboolean) const;
          jboolean _get_clean() const;
          void _set_clean(jboolean) const;
          ::org::apache::lucene::store::Directory _get_dir() const;
          void _set_dir(const ::org::apache::lucene::store::Directory &) const;
          jint _get_maxSegmentName() const;
          void _set_maxSegmentName(jint) const;
          jboolean _get_missingSegmentVersion() const;
          void _set_missingSegmentVersion(jboolean) const;
          jboolean _get_missingSegments() const;
          void _set_missingSegments(jboolean) const;
          jint _get_numBadSegments() const;
          void _set_numBadSegments(jint) const;
          jint _get_numSegments() const;
          void _set_numSegments(jint) const;
          jboolean _get_partial() const;
          void _set_partial(jboolean) const;
          ::java::util::List _get_segmentInfos() const;
          void _set_segmentInfos(const ::java::util::List &) const;
          ::java::util::List _get_segmentsChecked() const;
          void _set_segmentsChecked(const ::java::util::List &) const;
          ::java::lang::String _get_segmentsFileName() const;
          void _set_segmentsFileName(const ::java::lang::String &) const;
          jboolean _get_toolOutOfDate() const;
          void _set_toolOutOfDate(jboolean) const;
          jint _get_totLoseDocCount() const;
          void _set_totLoseDocCount(jint) const;
          ::java::util::Map _get_userData() const;
          void _set_userData(const ::java::util::Map &) const;
          jboolean _get_validCounter() const;
          void _set_validCounter(jboolean) const;
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
        extern PyTypeObject PY_TYPE(CheckIndex$Status);

        class t_CheckIndex$Status {
        public:
          PyObject_HEAD
          CheckIndex$Status object;
          static PyObject *wrap_Object(const CheckIndex$Status&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
