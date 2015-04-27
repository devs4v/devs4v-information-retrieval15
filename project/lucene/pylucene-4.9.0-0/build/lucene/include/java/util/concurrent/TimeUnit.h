#ifndef java_util_concurrent_TimeUnit_H
#define java_util_concurrent_TimeUnit_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class InterruptedException;
    class Thread;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class TimeUnit : public ::java::lang::Enum {
      public:
        enum {
          mid_convert_fbc02d8c,
          mid_sleep_0ee6df2f,
          mid_timedJoin_c5dace4a,
          mid_timedWait_0f2e7207,
          mid_toDays_0ee6df33,
          mid_toHours_0ee6df33,
          mid_toMicros_0ee6df33,
          mid_toMillis_0ee6df33,
          mid_toMinutes_0ee6df33,
          mid_toNanos_0ee6df33,
          mid_toSeconds_0ee6df33,
          mid_valueOf_b59b24c8,
          mid_values_b1ae0356,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeUnit(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        TimeUnit(const TimeUnit& obj) : ::java::lang::Enum(obj) {}

        static TimeUnit *DAYS;
        static TimeUnit *HOURS;
        static TimeUnit *MICROSECONDS;
        static TimeUnit *MILLISECONDS;
        static TimeUnit *MINUTES;
        static TimeUnit *NANOSECONDS;
        static TimeUnit *SECONDS;

        jlong convert(jlong, const TimeUnit &) const;
        void sleep(jlong) const;
        void timedJoin(const ::java::lang::Thread &, jlong) const;
        void timedWait(const ::java::lang::Object &, jlong) const;
        jlong toDays(jlong) const;
        jlong toHours(jlong) const;
        jlong toMicros(jlong) const;
        jlong toMillis(jlong) const;
        jlong toMinutes(jlong) const;
        jlong toNanos(jlong) const;
        jlong toSeconds(jlong) const;
        static TimeUnit valueOf(const ::java::lang::String &);
        static JArray< TimeUnit > values();
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyTypeObject PY_TYPE(TimeUnit);

      class t_TimeUnit {
      public:
        PyObject_HEAD
        TimeUnit object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeUnit *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeUnit&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeUnit&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
