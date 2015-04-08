#ifndef org_apache_lucene_index_SerialMergeScheduler_H
#define org_apache_lucene_index_SerialMergeScheduler_H

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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SerialMergeScheduler : public ::org::apache::lucene::index::MergeScheduler {
        public:
          enum {
            mid_init$_54c6a166,
            mid_close_54c6a166,
            mid_merge_5fd7a9f9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SerialMergeScheduler(jobject obj) : ::org::apache::lucene::index::MergeScheduler(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SerialMergeScheduler(const SerialMergeScheduler& obj) : ::org::apache::lucene::index::MergeScheduler(obj) {}

          SerialMergeScheduler();

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
        extern PyTypeObject PY_TYPE(SerialMergeScheduler);

        class t_SerialMergeScheduler {
        public:
          PyObject_HEAD
          SerialMergeScheduler object;
          static PyObject *wrap_Object(const SerialMergeScheduler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
