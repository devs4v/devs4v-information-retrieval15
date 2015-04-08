#ifndef org_apache_lucene_index_TwoPhaseCommit_H
#define org_apache_lucene_index_TwoPhaseCommit_H

#include "java/lang/Object.h"

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

        class TwoPhaseCommit : public ::java::lang::Object {
        public:
          enum {
            mid_commit_54c6a166,
            mid_prepareCommit_54c6a166,
            mid_rollback_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TwoPhaseCommit(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TwoPhaseCommit(const TwoPhaseCommit& obj) : ::java::lang::Object(obj) {}

          void commit() const;
          void prepareCommit() const;
          void rollback() const;
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
        extern PyTypeObject PY_TYPE(TwoPhaseCommit);

        class t_TwoPhaseCommit {
        public:
          PyObject_HEAD
          TwoPhaseCommit object;
          static PyObject *wrap_Object(const TwoPhaseCommit&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
