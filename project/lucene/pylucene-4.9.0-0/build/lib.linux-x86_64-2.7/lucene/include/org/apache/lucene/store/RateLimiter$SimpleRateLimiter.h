#ifndef org_apache_lucene_store_RateLimiter$SimpleRateLimiter_H
#define org_apache_lucene_store_RateLimiter$SimpleRateLimiter_H

#include "org/apache/lucene/store/RateLimiter.h"

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

        class RateLimiter$SimpleRateLimiter : public ::org::apache::lucene::store::RateLimiter {
        public:
          enum {
            mid_init$_5d1c7645,
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

          explicit RateLimiter$SimpleRateLimiter(jobject obj) : ::org::apache::lucene::store::RateLimiter(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RateLimiter$SimpleRateLimiter(const RateLimiter$SimpleRateLimiter& obj) : ::org::apache::lucene::store::RateLimiter(obj) {}

          RateLimiter$SimpleRateLimiter(jdouble);

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
        extern PyTypeObject PY_TYPE(RateLimiter$SimpleRateLimiter);

        class t_RateLimiter$SimpleRateLimiter {
        public:
          PyObject_HEAD
          RateLimiter$SimpleRateLimiter object;
          static PyObject *wrap_Object(const RateLimiter$SimpleRateLimiter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
