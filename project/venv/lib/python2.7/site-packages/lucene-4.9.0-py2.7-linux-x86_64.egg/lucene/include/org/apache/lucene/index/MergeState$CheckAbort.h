#ifndef org_apache_lucene_index_MergeState$CheckAbort_H
#define org_apache_lucene_index_MergeState$CheckAbort_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$OneMerge;
        class MergePolicy$MergeAbortedException;
      }
      namespace store {
        class Directory;
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

        class MergeState$CheckAbort : public ::java::lang::Object {
        public:
          enum {
            mid_init$_47ab6527,
            mid_work_5d1c7645,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeState$CheckAbort(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MergeState$CheckAbort(const MergeState$CheckAbort& obj) : ::java::lang::Object(obj) {}

          MergeState$CheckAbort(const ::org::apache::lucene::index::MergePolicy$OneMerge &, const ::org::apache::lucene::store::Directory &);

          void work(jdouble) const;
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
        extern PyTypeObject PY_TYPE(MergeState$CheckAbort);

        class t_MergeState$CheckAbort {
        public:
          PyObject_HEAD
          MergeState$CheckAbort object;
          static PyObject *wrap_Object(const MergeState$CheckAbort&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
