#ifndef org_apache_lucene_index_SegmentInfo_H
#define org_apache_lucene_index_SegmentInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
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
    class Set;
    class Collection;
  }
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

        class SegmentInfo : public ::java::lang::Object {
        public:
          enum {
            mid_init$_f7b2b9ed,
            mid_init$_23209bc5,
            mid_addFile_5fdc3f48,
            mid_addFiles_9bfb370d,
            mid_attributes_db60befd,
            mid_equals_290588e2,
            mid_files_03e99967,
            mid_getAttribute_97a5258f,
            mid_getCodec_27f0a02b,
            mid_getDiagnostics_db60befd,
            mid_getDocCount_54c6a179,
            mid_getUseCompoundFile_54c6a16a,
            mid_getVersion_14c7b5c5,
            mid_hashCode_54c6a179,
            mid_putAttribute_aacea7e9,
            mid_setCodec_848f310e,
            mid_setFiles_fb4f2b26,
            mid_setVersion_5fdc3f48,
            mid_toString_14c7b5c5,
            mid_toString_889826bf,
            max_mid
          };

          enum {
            fid_dir,
            fid_name,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SegmentInfo(const SegmentInfo& obj) : ::java::lang::Object(obj) {}

          static jint NO;
          static jint YES;

          ::org::apache::lucene::store::Directory _get_dir() const;
          ::java::lang::String _get_name() const;

          SegmentInfo(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, jint, jboolean, const ::org::apache::lucene::codecs::Codec &, const ::java::util::Map &);
          SegmentInfo(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, jint, jboolean, const ::org::apache::lucene::codecs::Codec &, const ::java::util::Map &, const ::java::util::Map &);

          void addFile(const ::java::lang::String &) const;
          void addFiles(const ::java::util::Collection &) const;
          ::java::util::Map attributes() const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::Set files() const;
          ::java::lang::String getAttribute(const ::java::lang::String &) const;
          ::org::apache::lucene::codecs::Codec getCodec() const;
          ::java::util::Map getDiagnostics() const;
          jint getDocCount() const;
          jboolean getUseCompoundFile() const;
          ::java::lang::String getVersion() const;
          jint hashCode() const;
          ::java::lang::String putAttribute(const ::java::lang::String &, const ::java::lang::String &) const;
          void setCodec(const ::org::apache::lucene::codecs::Codec &) const;
          void setFiles(const ::java::util::Set &) const;
          void setVersion(const ::java::lang::String &) const;
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
        extern PyTypeObject PY_TYPE(SegmentInfo);

        class t_SegmentInfo {
        public:
          PyObject_HEAD
          SegmentInfo object;
          static PyObject *wrap_Object(const SegmentInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
