#ifndef org_apache_lucene_search_TimeLimitingCollector$TimeExceededException_H
#define org_apache_lucene_search_TimeLimitingCollector$TimeExceededException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TimeLimitingCollector$TimeExceededException : public ::java::lang::RuntimeException {
        public:
          enum {
            mid_getLastDocCollected_54c6a179,
            mid_getTimeAllowed_54c6a17a,
            mid_getTimeElapsed_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeLimitingCollector$TimeExceededException(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TimeLimitingCollector$TimeExceededException(const TimeLimitingCollector$TimeExceededException& obj) : ::java::lang::RuntimeException(obj) {}

          jint getLastDocCollected() const;
          jlong getTimeAllowed() const;
          jlong getTimeElapsed() const;
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
        extern PyTypeObject PY_TYPE(TimeLimitingCollector$TimeExceededException);

        class t_TimeLimitingCollector$TimeExceededException {
        public:
          PyObject_HEAD
          TimeLimitingCollector$TimeExceededException object;
          static PyObject *wrap_Object(const TimeLimitingCollector$TimeExceededException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
