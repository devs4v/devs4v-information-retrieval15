#ifndef org_apache_lucene_index_PersistentSnapshotDeletionPolicy_H
#define org_apache_lucene_index_PersistentSnapshotDeletionPolicy_H

#include "org/apache/lucene/index/SnapshotDeletionPolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
        class IndexDeletionPolicy;
        class IndexWriterConfig$OpenMode;
      }
      namespace store {
        class Directory;
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

        class PersistentSnapshotDeletionPolicy : public ::org::apache::lucene::index::SnapshotDeletionPolicy {
        public:
          enum {
            mid_init$_12208c4a,
            mid_init$_7f5c9dc9,
            mid_getLastSaveFile_14c7b5c5,
            mid_release_fecc65d3,
            mid_release_0ee6df2f,
            mid_snapshot_09307276,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PersistentSnapshotDeletionPolicy(jobject obj) : ::org::apache::lucene::index::SnapshotDeletionPolicy(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PersistentSnapshotDeletionPolicy(const PersistentSnapshotDeletionPolicy& obj) : ::org::apache::lucene::index::SnapshotDeletionPolicy(obj) {}

          static ::java::lang::String *SNAPSHOTS_PREFIX;

          PersistentSnapshotDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &, const ::org::apache::lucene::store::Directory &);
          PersistentSnapshotDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &);

          ::java::lang::String getLastSaveFile() const;
          void release(const ::org::apache::lucene::index::IndexCommit &) const;
          void release(jlong) const;
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
        extern PyTypeObject PY_TYPE(PersistentSnapshotDeletionPolicy);

        class t_PersistentSnapshotDeletionPolicy {
        public:
          PyObject_HEAD
          PersistentSnapshotDeletionPolicy object;
          static PyObject *wrap_Object(const PersistentSnapshotDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
