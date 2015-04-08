#ifndef org_apache_lucene_store_LockVerifyServer_H
#define org_apache_lucene_store_LockVerifyServer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Exception;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class LockVerifyServer : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_main_4dd4540c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LockVerifyServer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          LockVerifyServer(const LockVerifyServer& obj) : ::java::lang::Object(obj) {}

          LockVerifyServer();

          static void main(const JArray< ::java::lang::String > &);
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
        extern PyTypeObject PY_TYPE(LockVerifyServer);

        class t_LockVerifyServer {
        public:
          PyObject_HEAD
          LockVerifyServer object;
          static PyObject *wrap_Object(const LockVerifyServer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
