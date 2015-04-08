#ifndef org_apache_lucene_index_MergeScheduler_H
#define org_apache_lucene_index_MergeScheduler_H

#include "java/lang/Object.h"

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
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergeScheduler : public ::java::lang::Object {
        public:
          enum {
            mid_close_54c6a166,
            mid_merge_5fd7a9f9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeScheduler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MergeScheduler(const MergeScheduler& obj) : ::java::lang::Object(obj) {}

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
        extern PyTypeObject PY_TYPE(MergeScheduler);

        class t_MergeScheduler {
        public:
          PyObject_HEAD
          MergeScheduler object;
          static PyObject *wrap_Object(const MergeScheduler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
