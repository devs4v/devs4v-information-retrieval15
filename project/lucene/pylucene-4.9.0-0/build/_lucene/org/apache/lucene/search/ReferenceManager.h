#ifndef org_apache_lucene_search_ReferenceManager_H
#define org_apache_lucene_search_ReferenceManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ReferenceManager$RefreshListener;
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
      namespace search {

        class ReferenceManager : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_acquire_846352c3,
            mid_addListener_c1691f71,
            mid_close_54c6a166,
            mid_maybeRefresh_54c6a16a,
            mid_maybeRefreshBlocking_54c6a166,
            mid_release_290588ee,
            mid_removeListener_c1691f71,
            mid_decRef_290588ee,
            mid_getRefCount_290588f1,
            mid_tryIncRef_290588e2,
            mid_refreshIfNeeded_a932a95f,
            mid_afterClose_54c6a166,
            mid_afterMaybeRefresh_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReferenceManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          ReferenceManager(const ReferenceManager& obj) : ::java::lang::Object(obj) {}

          ReferenceManager();

          ::java::lang::Object acquire() const;
          void addListener(const ::org::apache::lucene::search::ReferenceManager$RefreshListener &) const;
          void close() const;
          jboolean maybeRefresh() const;
          void maybeRefreshBlocking() const;
          void release(const ::java::lang::Object &) const;
          void removeListener(const ::org::apache::lucene::search::ReferenceManager$RefreshListener &) const;
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
        extern PyTypeObject PY_TYPE(ReferenceManager);

        class t_ReferenceManager {
        public:
          PyObject_HEAD
          ReferenceManager object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ReferenceManager *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ReferenceManager&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ReferenceManager&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
