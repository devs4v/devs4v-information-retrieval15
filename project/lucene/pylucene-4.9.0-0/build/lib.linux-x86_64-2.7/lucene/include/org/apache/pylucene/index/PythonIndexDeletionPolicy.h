#ifndef org_apache_pylucene_index_PythonIndexDeletionPolicy_H
#define org_apache_pylucene_index_PythonIndexDeletionPolicy_H

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
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace index {

        class PythonIndexDeletionPolicy : public ::org::apache::lucene::index::IndexDeletionPolicy {
        public:
          enum {
            mid_init$_54c6a166,
            mid_finalize_54c6a166,
            mid_onCommit_1fde8fc3,
            mid_onInit_1fde8fc3,
            mid_pythonDecRef_54c6a166,
            mid_pythonExtension_54c6a17a,
            mid_pythonExtension_0ee6df2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIndexDeletionPolicy(jobject obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          PythonIndexDeletionPolicy(const PythonIndexDeletionPolicy& obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {}

          PythonIndexDeletionPolicy();

          void finalize() const;
          void onCommit(const ::java::util::List &) const;
          void onInit(const ::java::util::List &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace index {
        extern PyTypeObject PY_TYPE(PythonIndexDeletionPolicy);

        class t_PythonIndexDeletionPolicy {
        public:
          PyObject_HEAD
          PythonIndexDeletionPolicy object;
          static PyObject *wrap_Object(const PythonIndexDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
