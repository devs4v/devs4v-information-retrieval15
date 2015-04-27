#ifndef java_text_DateFormat_H
#define java_text_DateFormat_H

#include "java/text/Format.h"

namespace java {
  namespace util {
    class Locale;
    class TimeZone;
    class Calendar;
    class Date;
  }
  namespace lang {
    class StringBuffer;
    class Object;
    class Class;
    class String;
  }
  namespace text {
    class NumberFormat;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class DateFormat : public ::java::text::Format {
    public:
      enum {
        mid_clone_846352c3,
        mid_equals_290588e2,
        mid_format_60ff0f6a,
        mid_getAvailableLocales_59cb5b46,
        mid_getCalendar_5a365c68,
        mid_getDateInstance_5b76e92a,
        mid_getDateInstance_f487f948,
        mid_getDateInstance_0c1a225b,
        mid_getDateTimeInstance_5b76e92a,
        mid_getDateTimeInstance_47ab2552,
        mid_getDateTimeInstance_32c76395,
        mid_getInstance_5b76e92a,
        mid_getNumberFormat_6b701965,
        mid_getTimeInstance_5b76e92a,
        mid_getTimeInstance_f487f948,
        mid_getTimeInstance_0c1a225b,
        mid_getTimeZone_6cce40e5,
        mid_hashCode_54c6a179,
        mid_isLenient_54c6a16a,
        mid_parse_e1ca31a4,
        mid_setCalendar_3b3fa6b1,
        mid_setLenient_bb0c767f,
        mid_setNumberFormat_d2d1ba24,
        mid_setTimeZone_f7b32d20,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DateFormat(jobject obj) : ::java::text::Format(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      DateFormat(const DateFormat& obj) : ::java::text::Format(obj) {}

      static jint AM_PM_FIELD;
      static jint DATE_FIELD;
      static jint DAY_OF_WEEK_FIELD;
      static jint DAY_OF_WEEK_IN_MONTH_FIELD;
      static jint DAY_OF_YEAR_FIELD;
      static jint DEFAULT;
      static jint ERA_FIELD;
      static jint FULL;
      static jint HOUR0_FIELD;
      static jint HOUR1_FIELD;
      static jint HOUR_OF_DAY0_FIELD;
      static jint HOUR_OF_DAY1_FIELD;
      static jint LONG;
      static jint MEDIUM;
      static jint MILLISECOND_FIELD;
      static jint MINUTE_FIELD;
      static jint MONTH_FIELD;
      static jint SECOND_FIELD;
      static jint SHORT;
      static jint TIMEZONE_FIELD;
      static jint WEEK_OF_MONTH_FIELD;
      static jint WEEK_OF_YEAR_FIELD;
      static jint YEAR_FIELD;

      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String format(const ::java::util::Date &) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      ::java::util::Calendar getCalendar() const;
      static DateFormat getDateInstance();
      static DateFormat getDateInstance(jint);
      static DateFormat getDateInstance(jint, const ::java::util::Locale &);
      static DateFormat getDateTimeInstance();
      static DateFormat getDateTimeInstance(jint, jint);
      static DateFormat getDateTimeInstance(jint, jint, const ::java::util::Locale &);
      static DateFormat getInstance();
      ::java::text::NumberFormat getNumberFormat() const;
      static DateFormat getTimeInstance();
      static DateFormat getTimeInstance(jint);
      static DateFormat getTimeInstance(jint, const ::java::util::Locale &);
      ::java::util::TimeZone getTimeZone() const;
      jint hashCode() const;
      jboolean isLenient() const;
      ::java::util::Date parse(const ::java::lang::String &) const;
      void setCalendar(const ::java::util::Calendar &) const;
      void setLenient(jboolean) const;
      void setNumberFormat(const ::java::text::NumberFormat &) const;
      void setTimeZone(const ::java::util::TimeZone &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyTypeObject PY_TYPE(DateFormat);

    class t_DateFormat {
    public:
      PyObject_HEAD
      DateFormat object;
      static PyObject *wrap_Object(const DateFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
