#ifndef org_apache_lucene_index_LogDocMergePolicy_H
#define org_apache_lucene_index_LogDocMergePolicy_H

#include "org/apache/lucene/index/LogMergePolicy.h"

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

        class LogDocMergePolicy : public ::org::apache::lucene::index::LogMergePolicy {
        public:
          enum {
            mid_init$_54c6a166,
            mid_getMinMergeDocs_54c6a179,
            mid_setMinMergeDocs_39c7bd3c,
            mid_size_5454cb07,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LogDocMergePolicy(jobject obj) : ::org::apache::lucene::index::LogMergePolicy(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          LogDocMergePolicy(const LogDocMergePolicy& obj) : ::org::apache::lucene::index::LogMergePolicy(obj) {}

          static jint DEFAULT_MIN_MERGE_DOCS;

          LogDocMergePolicy();

          jint getMinMergeDocs() const;
          void setMinMergeDocs(jint) const;
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
        extern PyTypeObject PY_TYPE(LogDocMergePolicy);

        class t_LogDocMergePolicy {
        public:
          PyObject_HEAD
          LogDocMergePolicy object;
          static PyObject *wrap_Object(const LogDocMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
