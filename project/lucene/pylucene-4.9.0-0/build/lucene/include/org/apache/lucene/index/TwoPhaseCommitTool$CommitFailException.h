#ifndef org_apache_lucene_index_TwoPhaseCommitTool$CommitFailException_H
#define org_apache_lucene_index_TwoPhaseCommitTool$CommitFailException_H

#include "java/io/IOException.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TwoPhaseCommit;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class TwoPhaseCommitTool$CommitFailException : public ::java::io::IOException {
        public:
          enum {
            mid_init$_52a0ac67,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TwoPhaseCommitTool$CommitFailException(jobject obj) : ::java::io::IOException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TwoPhaseCommitTool$CommitFailException(const TwoPhaseCommitTool$CommitFailException& obj) : ::java::io::IOException(obj) {}

          TwoPhaseCommitTool$CommitFailException(const ::java::lang::Throwable &, const ::org::apache::lucene::index::TwoPhaseCommit &);
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
        extern PyTypeObject PY_TYPE(TwoPhaseCommitTool$CommitFailException);

        class t_TwoPhaseCommitTool$CommitFailException {
        public:
          PyObject_HEAD
          TwoPhaseCommitTool$CommitFailException object;
          static PyObject *wrap_Object(const TwoPhaseCommitTool$CommitFailException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
