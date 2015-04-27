#ifndef org_apache_lucene_search_TimeLimitingCollector$TimerThread_H
#define org_apache_lucene_search_TimeLimitingCollector$TimerThread_H

#include "java/lang/Thread.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Counter;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TimeLimitingCollector$TimerThread : public ::java::lang::Thread {
        public:
          enum {
            mid_init$_4ae88947,
            mid_init$_dfcea312,
            mid_getMilliseconds_54c6a17a,
            mid_getResolution_54c6a17a,
            mid_run_54c6a166,
            mid_setResolution_0ee6df2f,
            mid_stopTimer_54c6a166,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeLimitingCollector$TimerThread(jobject obj) : ::java::lang::Thread(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TimeLimitingCollector$TimerThread(const TimeLimitingCollector$TimerThread& obj) : ::java::lang::Thread(obj) {}

          static jint DEFAULT_RESOLUTION;
          static ::java::lang::String *THREAD_NAME;

          TimeLimitingCollector$TimerThread(const ::org::apache::lucene::util::Counter &);
          TimeLimitingCollector$TimerThread(jlong, const ::org::apache::lucene::util::Counter &);

          jlong getMilliseconds() const;
          jlong getResolution() const;
          void run() const;
          void setResolution(jlong) const;
          void stopTimer() const;
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
        extern PyTypeObject PY_TYPE(TimeLimitingCollector$TimerThread);

        class t_TimeLimitingCollector$TimerThread {
        public:
          PyObject_HEAD
          TimeLimitingCollector$TimerThread object;
          static PyObject *wrap_Object(const TimeLimitingCollector$TimerThread&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
