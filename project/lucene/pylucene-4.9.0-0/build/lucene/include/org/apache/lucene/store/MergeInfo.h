#ifndef org_apache_lucene_store_MergeInfo_H
#define org_apache_lucene_store_MergeInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class MergeInfo : public ::java::lang::Object {
        public:
          enum {
            mid_init$_1629c044,
            mid_equals_290588e2,
            mid_hashCode_54c6a179,
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_estimatedMergeBytes,
            fid_isExternal,
            fid_mergeMaxNumSegments,
            fid_totalDocCount,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MergeInfo(const MergeInfo& obj) : ::java::lang::Object(obj) {}

          jlong _get_estimatedMergeBytes() const;
          jboolean _get_isExternal() const;
          jint _get_mergeMaxNumSegments() const;
          jint _get_totalDocCount() const;

          MergeInfo(jint, jlong, jboolean, jint);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyTypeObject PY_TYPE(MergeInfo);

        class t_MergeInfo {
        public:
          PyObject_HEAD
          MergeInfo object;
          static PyObject *wrap_Object(const MergeInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
