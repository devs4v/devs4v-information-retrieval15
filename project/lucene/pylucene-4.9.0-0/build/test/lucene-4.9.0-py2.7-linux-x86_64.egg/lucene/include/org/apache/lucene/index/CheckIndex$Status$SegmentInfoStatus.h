#ifndef org_apache_lucene_index_CheckIndex$Status$SegmentInfoStatus_H
#define org_apache_lucene_index_CheckIndex$Status$SegmentInfoStatus_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class CheckIndex$Status$StoredFieldStatus;
        class CheckIndex$Status$TermVectorStatus;
        class CheckIndex$Status$TermIndexStatus;
        class CheckIndex$Status$DocValuesStatus;
        class CheckIndex$Status$FieldNormStatus;
      }
      namespace codecs {
        class Codec;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
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

        class CheckIndex$Status$SegmentInfoStatus : public ::java::lang::Object {
        public:

          enum {
            fid_codec,
            fid_compound,
            fid_deletionsGen,
            fid_diagnostics,
            fid_docCount,
            fid_docStoreCompoundFile,
            fid_docStoreOffset,
            fid_docStoreSegment,
            fid_docValuesStatus,
            fid_fieldNormStatus,
            fid_hasDeletions,
            fid_name,
            fid_numDeleted,
            fid_numFiles,
            fid_openReaderPassed,
            fid_sizeMB,
            fid_storedFieldStatus,
            fid_termIndexStatus,
            fid_termVectorStatus,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$Status$SegmentInfoStatus(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$Status$SegmentInfoStatus(const CheckIndex$Status$SegmentInfoStatus& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::codecs::Codec _get_codec() const;
          void _set_codec(const ::org::apache::lucene::codecs::Codec &) const;
          jboolean _get_compound() const;
          void _set_compound(jboolean) const;
          jlong _get_deletionsGen() const;
          void _set_deletionsGen(jlong) const;
          ::java::util::Map _get_diagnostics() const;
          void _set_diagnostics(const ::java::util::Map &) const;
          jint _get_docCount() const;
          void _set_docCount(jint) const;
          jboolean _get_docStoreCompoundFile() const;
          void _set_docStoreCompoundFile(jboolean) const;
          jint _get_docStoreOffset() const;
          void _set_docStoreOffset(jint) const;
          ::java::lang::String _get_docStoreSegment() const;
          void _set_docStoreSegment(const ::java::lang::String &) const;
          ::org::apache::lucene::index::CheckIndex$Status$DocValuesStatus _get_docValuesStatus() const;
          void _set_docValuesStatus(const ::org::apache::lucene::index::CheckIndex$Status$DocValuesStatus &) const;
          ::org::apache::lucene::index::CheckIndex$Status$FieldNormStatus _get_fieldNormStatus() const;
          void _set_fieldNormStatus(const ::org::apache::lucene::index::CheckIndex$Status$FieldNormStatus &) const;
          jboolean _get_hasDeletions() const;
          void _set_hasDeletions(jboolean) const;
          ::java::lang::String _get_name() const;
          void _set_name(const ::java::lang::String &) const;
          jint _get_numDeleted() const;
          void _set_numDeleted(jint) const;
          jint _get_numFiles() const;
          void _set_numFiles(jint) const;
          jboolean _get_openReaderPassed() const;
          void _set_openReaderPassed(jboolean) const;
          jdouble _get_sizeMB() const;
          void _set_sizeMB(jdouble) const;
          ::org::apache::lucene::index::CheckIndex$Status$StoredFieldStatus _get_storedFieldStatus() const;
          void _set_storedFieldStatus(const ::org::apache::lucene::index::CheckIndex$Status$StoredFieldStatus &) const;
          ::org::apache::lucene::index::CheckIndex$Status$TermIndexStatus _get_termIndexStatus() const;
          void _set_termIndexStatus(const ::org::apache::lucene::index::CheckIndex$Status$TermIndexStatus &) const;
          ::org::apache::lucene::index::CheckIndex$Status$TermVectorStatus _get_termVectorStatus() const;
          void _set_termVectorStatus(const ::org::apache::lucene::index::CheckIndex$Status$TermVectorStatus &) const;
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
        extern PyTypeObject PY_TYPE(CheckIndex$Status$SegmentInfoStatus);

        class t_CheckIndex$Status$SegmentInfoStatus {
        public:
          PyObject_HEAD
          CheckIndex$Status$SegmentInfoStatus object;
          static PyObject *wrap_Object(const CheckIndex$Status$SegmentInfoStatus&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
