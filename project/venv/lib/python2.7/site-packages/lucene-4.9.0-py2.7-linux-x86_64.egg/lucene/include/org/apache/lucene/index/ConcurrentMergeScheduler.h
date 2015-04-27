#ifndef org_apache_lucene_index_ConcurrentMergeScheduler_H
#define org_apache_lucene_index_ConcurrentMergeScheduler_H

#include "org/apache/lucene/index/MergeScheduler.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter;
        class MergeTrigger;
      }
    }
  }
}
namespace java {
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

        class ConcurrentMergeScheduler : public ::org::apache::lucene::index::MergeScheduler {
        public:
          enum {
            mid_init$_54c6a166,
            mid_close_54c6a166,
            mid_getMaxMergeCount_54c6a179,
            mid_getMaxThreadCount_54c6a179,
            mid_getMergeThreadPriority_54c6a179,
            mid_merge_5fd7a9f9,
            mid_setMaxMergesAndThreads_d8d154a6,
            mid_setMergeThreadPriority_39c7bd3c,
            mid_sync_54c6a166,
            mid_toString_14c7b5c5,
            mid_message_5fdc3f48,
            mid_verbose_54c6a16a,
            mid_handleMergeException_c5ec8ca4,
            mid_mergeThreadCount_54c6a179,
            mid_updateMergeThreads_54c6a166,
            mid_doMerge_54badd95,
            mid_getMergeThread_a2024ae6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConcurrentMergeScheduler(jobject obj) : ::org::apache::lucene::index::MergeScheduler(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ConcurrentMergeScheduler(const ConcurrentMergeScheduler& obj) : ::org::apache::lucene::index::MergeScheduler(obj) {}

          static jint DEFAULT_MAX_MERGE_COUNT;
          static jint DEFAULT_MAX_THREAD_COUNT;

          ConcurrentMergeScheduler();

          void close() const;
          jint getMaxMergeCount() const;
          jint getMaxThreadCount() const;
          jint getMergeThreadPriority() const;
          void merge(const ::org::apache::lucene::index::IndexWriter &, const ::org::apache::lucene::index::MergeTrigger &, jboolean) const;
          void setMaxMergesAndThreads(jint, jint) const;
          void setMergeThreadPriority(jint) const;
          void sync() const;
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
      namespace index {
        extern PyTypeObject PY_TYPE(ConcurrentMergeScheduler);

        class t_ConcurrentMergeScheduler {
        public:
          PyObject_HEAD
          ConcurrentMergeScheduler object;
          static PyObject *wrap_Object(const ConcurrentMergeScheduler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
