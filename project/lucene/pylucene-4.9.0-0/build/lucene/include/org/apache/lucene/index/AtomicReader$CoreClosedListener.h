#ifndef org_apache_lucene_index_AtomicReader$CoreClosedListener_H
#define org_apache_lucene_index_AtomicReader$CoreClosedListener_H

#include "java/lang/Object.h"

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

        class AtomicReader$CoreClosedListener : public ::java::lang::Object {
        public:
          enum {
            mid_onClose_290588ee,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AtomicReader$CoreClosedListener(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          AtomicReader$CoreClosedListener(const AtomicReader$CoreClosedListener& obj) : ::java::lang::Object(obj) {}

          void onClose(const ::java::lang::Object &) const;
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
        extern PyTypeObject PY_TYPE(AtomicReader$CoreClosedListener);

        class t_AtomicReader$CoreClosedListener {
        public:
          PyObject_HEAD
          AtomicReader$CoreClosedListener object;
          static PyObject *wrap_Object(const AtomicReader$CoreClosedListener&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
