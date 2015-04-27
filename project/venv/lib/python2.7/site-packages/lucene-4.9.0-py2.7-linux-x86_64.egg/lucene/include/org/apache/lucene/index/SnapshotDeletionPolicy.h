#ifndef org_apache_lucene_index_SnapshotDeletionPolicy_H
#define org_apache_lucene_index_SnapshotDeletionPolicy_H

#include "org/apache/lucene/index/IndexDeletionPolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SnapshotDeletionPolicy : public ::org::apache::lucene::index::IndexDeletionPolicy {
        public:
          enum {
            mid_init$_9cff6c2e,
            mid_getIndexCommit_6e559b4f,
            mid_getSnapshotCount_54c6a179,
            mid_getSnapshots_87851566,
            mid_onCommit_1fde8fc3,
            mid_onInit_1fde8fc3,
            mid_release_fecc65d3,
            mid_snapshot_09307276,
            mid_incRef_fecc65d3,
            mid_releaseGen_0ee6df2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SnapshotDeletionPolicy(jobject obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SnapshotDeletionPolicy(const SnapshotDeletionPolicy& obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {}

          SnapshotDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &);

          ::org::apache::lucene::index::IndexCommit getIndexCommit(jlong) const;
          jint getSnapshotCount() const;
          ::java::util::List getSnapshots() const;
          void onCommit(const ::java::util::List &) const;
          void onInit(const ::java::util::List &) const;
          void release(const ::org::apache::lucene::index::IndexCommit &) const;
          ::org::apache::lucene::index::IndexCommit snapshot() const;
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
        extern PyTypeObject PY_TYPE(SnapshotDeletionPolicy);

        class t_SnapshotDeletionPolicy {
        public:
          PyObject_HEAD
          SnapshotDeletionPolicy object;
          static PyObject *wrap_Object(const SnapshotDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
