#ifndef org_apache_lucene_search_ControlledRealTimeReopenThread_H
#define org_apache_lucene_search_ControlledRealTimeReopenThread_H

#include "java/lang/Thread.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TrackingIndexWriter;
      }
      namespace search {
        class ReferenceManager;
      }
    }
  }
}
namespace java {
  namespace lang {
    class InterruptedException;
    class Class;
  }
  namespace io {
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ControlledRealTimeReopenThread : public ::java::lang::Thread {
        public:
          enum {
            mid_init$_a0c538a8,
            mid_close_54c6a166,
            mid_run_54c6a166,
            mid_waitForGeneration_0ee6df2f,
            mid_waitForGeneration_25d05c83,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ControlledRealTimeReopenThread(jobject obj) : ::java::lang::Thread(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ControlledRealTimeReopenThread(const ControlledRealTimeReopenThread& obj) : ::java::lang::Thread(obj) {}

          ControlledRealTimeReopenThread(const ::org::apache::lucene::index::TrackingIndexWriter &, const ::org::apache::lucene::search::ReferenceManager &, jdouble, jdouble);

          void close() const;
          void run() const;
          void waitForGeneration(jlong) const;
          jboolean waitForGeneration(jlong, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(ControlledRealTimeReopenThread);

        class t_ControlledRealTimeReopenThread {
        public:
          PyObject_HEAD
          ControlledRealTimeReopenThread object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ControlledRealTimeReopenThread *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ControlledRealTimeReopenThread&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ControlledRealTimeReopenThread&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
