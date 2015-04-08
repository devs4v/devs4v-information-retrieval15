#ifndef org_apache_lucene_index_NoMergeScheduler_H
#define org_apache_lucene_index_NoMergeScheduler_H

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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class NoMergeScheduler : public ::org::apache::lucene::index::MergeScheduler {
        public:
          enum {
            mid_clone_ff96d655,
            mid_close_54c6a166,
            mid_merge_5fd7a9f9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NoMergeScheduler(jobject obj) : ::org::apache::lucene::index::MergeScheduler(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NoMergeScheduler(const NoMergeScheduler& obj) : ::org::apache::lucene::index::MergeScheduler(obj) {}

          static ::org::apache::lucene::index::MergeScheduler *INSTANCE;

          ::org::apache::lucene::index::MergeScheduler clone() const;
          void close() const;
          void merge(const ::org::apache::lucene::index::IndexWriter &, const ::org::apache::lucene::index::MergeTrigger &, jboolean) const;
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
        extern PyTypeObject PY_TYPE(NoMergeScheduler);

        class t_NoMergeScheduler {
        public:
          PyObject_HEAD
          NoMergeScheduler object;
          static PyObject *wrap_Object(const NoMergeScheduler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
