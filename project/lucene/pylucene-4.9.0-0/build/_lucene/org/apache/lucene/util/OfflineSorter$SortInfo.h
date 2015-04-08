#ifndef org_apache_lucene_util_OfflineSorter$SortInfo_H
#define org_apache_lucene_util_OfflineSorter$SortInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class OfflineSorter;
      }
    }
  }
}
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
      namespace util {

        class OfflineSorter$SortInfo : public ::java::lang::Object {
        public:
          enum {
            mid_init$_6859decd,
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_bufferSize,
            fid_lines,
            fid_mergeRounds,
            fid_mergeTime,
            fid_readTime,
            fid_sortTime,
            fid_tempMergeFiles,
            fid_totalTime,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OfflineSorter$SortInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          OfflineSorter$SortInfo(const OfflineSorter$SortInfo& obj) : ::java::lang::Object(obj) {}

          jlong _get_bufferSize() const;
          jint _get_lines() const;
          void _set_lines(jint) const;
          jint _get_mergeRounds() const;
          void _set_mergeRounds(jint) const;
          jlong _get_mergeTime() const;
          void _set_mergeTime(jlong) const;
          jlong _get_readTime() const;
          void _set_readTime(jlong) const;
          jlong _get_sortTime() const;
          void _set_sortTime(jlong) const;
          jint _get_tempMergeFiles() const;
          void _set_tempMergeFiles(jint) const;
          jlong _get_totalTime() const;
          void _set_totalTime(jlong) const;

          OfflineSorter$SortInfo(const ::org::apache::lucene::util::OfflineSorter &);

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
      namespace util {
        extern PyTypeObject PY_TYPE(OfflineSorter$SortInfo);

        class t_OfflineSorter$SortInfo {
        public:
          PyObject_HEAD
          OfflineSorter$SortInfo object;
          static PyObject *wrap_Object(const OfflineSorter$SortInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
