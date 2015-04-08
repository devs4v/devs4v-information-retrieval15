#ifndef org_apache_lucene_index_LogByteSizeMergePolicy_H
#define org_apache_lucene_index_LogByteSizeMergePolicy_H

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

        class LogByteSizeMergePolicy : public ::org::apache::lucene::index::LogMergePolicy {
        public:
          enum {
            mid_init$_54c6a166,
            mid_getMaxMergeMB_54c6a174,
            mid_getMaxMergeMBForForcedMerge_54c6a174,
            mid_getMinMergeMB_54c6a174,
            mid_setMaxMergeMB_5d1c7645,
            mid_setMaxMergeMBForForcedMerge_5d1c7645,
            mid_setMinMergeMB_5d1c7645,
            mid_size_5454cb07,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LogByteSizeMergePolicy(jobject obj) : ::org::apache::lucene::index::LogMergePolicy(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          LogByteSizeMergePolicy(const LogByteSizeMergePolicy& obj) : ::org::apache::lucene::index::LogMergePolicy(obj) {}

          static jdouble DEFAULT_MAX_MERGE_MB;
          static jdouble DEFAULT_MAX_MERGE_MB_FOR_FORCED_MERGE;
          static jdouble DEFAULT_MIN_MERGE_MB;

          LogByteSizeMergePolicy();

          jdouble getMaxMergeMB() const;
          jdouble getMaxMergeMBForForcedMerge() const;
          jdouble getMinMergeMB() const;
          void setMaxMergeMB(jdouble) const;
          void setMaxMergeMBForForcedMerge(jdouble) const;
          void setMinMergeMB(jdouble) const;
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
        extern PyTypeObject PY_TYPE(LogByteSizeMergePolicy);

        class t_LogByteSizeMergePolicy {
        public:
          PyObject_HEAD
          LogByteSizeMergePolicy object;
          static PyObject *wrap_Object(const LogByteSizeMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
