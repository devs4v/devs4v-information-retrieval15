#ifndef org_apache_lucene_util_NamedThreadFactory_H
#define org_apache_lucene_util_NamedThreadFactory_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class String;
    class Thread;
    class Class;
  }
  namespace util {
    namespace concurrent {
      class ThreadFactory;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class NamedThreadFactory : public ::java::lang::Object {
        public:
          enum {
            mid_init$_5fdc3f48,
            mid_newThread_9e58833c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NamedThreadFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NamedThreadFactory(const NamedThreadFactory& obj) : ::java::lang::Object(obj) {}

          NamedThreadFactory(const ::java::lang::String &);

          ::java::lang::Thread newThread(const ::java::lang::Runnable &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(NamedThreadFactory);

        class t_NamedThreadFactory {
        public:
          PyObject_HEAD
          NamedThreadFactory object;
          static PyObject *wrap_Object(const NamedThreadFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
