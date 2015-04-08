#ifndef org_apache_lucene_store_Lock$With_H
#define org_apache_lucene_store_Lock$With_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Lock;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class Lock$With : public ::java::lang::Object {
        public:
          enum {
            mid_init$_6e48139c,
            mid_run_846352c3,
            mid_doBody_846352c3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Lock$With(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Lock$With(const Lock$With& obj) : ::java::lang::Object(obj) {}

          Lock$With(const ::org::apache::lucene::store::Lock &, jlong);

          ::java::lang::Object run() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyTypeObject PY_TYPE(Lock$With);

        class t_Lock$With {
        public:
          PyObject_HEAD
          Lock$With object;
          static PyObject *wrap_Object(const Lock$With&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
