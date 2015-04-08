#ifndef org_apache_lucene_store_RateLimiter_H
#define org_apache_lucene_store_RateLimiter_H

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
      namespace store {

        class RateLimiter : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_getMbPerSec_54c6a174,
            mid_getMinPauseCheckBytes_54c6a17a,
            mid_pause_0ee6df33,
            mid_setMbPerSec_5d1c7645,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RateLimiter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RateLimiter(const RateLimiter& obj) : ::java::lang::Object(obj) {}

          RateLimiter();

          jdouble getMbPerSec() const;
          jlong getMinPauseCheckBytes() const;
          jlong pause(jlong) const;
          void setMbPerSec(jdouble) const;
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
        extern PyTypeObject PY_TYPE(RateLimiter);

        class t_RateLimiter {
        public:
          PyObject_HEAD
          RateLimiter object;
          static PyObject *wrap_Object(const RateLimiter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
