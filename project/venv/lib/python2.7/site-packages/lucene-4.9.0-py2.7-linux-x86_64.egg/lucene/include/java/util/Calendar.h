#ifndef java_util_Calendar_H
#define java_util_Calendar_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class TimeZone;
    class Date;
    class Map;
  }
  namespace lang {
    class Integer;
    class Comparable;
    class Class;
    class Cloneable;
    class String;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Calendar : public ::java::lang::Object {
    public:
      enum {
        mid_add_d8d154a6,
        mid_after_290588e2,
        mid_before_290588e2,
        mid_clear_54c6a166,
        mid_clear_39c7bd3c,
        mid_clone_846352c3,
        mid_compareTo_3b3fa6ae,
        mid_equals_290588e2,
        mid_get_39c7bd23,
        mid_getActualMaximum_39c7bd23,
        mid_getActualMinimum_39c7bd23,
        mid_getAvailableLocales_59cb5b46,
        mid_getDisplayName_efb8d576,
        mid_getDisplayNames_d7e500c8,
        mid_getFirstDayOfWeek_54c6a179,
        mid_getGreatestMinimum_39c7bd23,
        mid_getInstance_5a365c68,
        mid_getInstance_dc9c984a,
        mid_getInstance_4b962963,
        mid_getInstance_de2a048d,
        mid_getLeastMaximum_39c7bd23,
        mid_getMaximum_39c7bd23,
        mid_getMinimalDaysInFirstWeek_54c6a179,
        mid_getMinimum_39c7bd23,
        mid_getTime_6e14513a,
        mid_getTimeInMillis_54c6a17a,
        mid_getTimeZone_6cce40e5,
        mid_getWeekYear_54c6a179,
        mid_getWeeksInWeekYear_54c6a179,
        mid_hashCode_54c6a179,
        mid_isLenient_54c6a16a,
        mid_isSet_39c7bd30,
        mid_isWeekDateSupported_54c6a16a,
        mid_roll_d8d154a6,
        mid_roll_b3a85a05,
        mid_set_d8d154a6,
        mid_set_d3236aa4,
        mid_set_eca84e64,
        mid_set_8b2e9686,
        mid_setFirstDayOfWeek_39c7bd3c,
        mid_setLenient_bb0c767f,
        mid_setMinimalDaysInFirstWeek_39c7bd3c,
        mid_setTime_aa83a4b3,
        mid_setTimeInMillis_0ee6df2f,
        mid_setTimeZone_f7b32d20,
        mid_setWeekDate_d3236aa4,
        mid_toString_14c7b5c5,
        mid_computeTime_54c6a166,
        mid_computeFields_54c6a166,
        mid_internalGet_39c7bd23,
        mid_complete_54c6a166,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Calendar(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Calendar(const Calendar& obj) : ::java::lang::Object(obj) {}

      static jint ALL_STYLES;
      static jint AM;
      static jint AM_PM;
      static jint APRIL;
      static jint AUGUST;
      static jint DATE;
      static jint DAY_OF_MONTH;
      static jint DAY_OF_WEEK;
      static jint DAY_OF_WEEK_IN_MONTH;
      static jint DAY_OF_YEAR;
      static jint DECEMBER;
      static jint DST_OFFSET;
      static jint ERA;
      static jint FEBRUARY;
      static jint FIELD_COUNT;
      static jint FRIDAY;
      static jint HOUR;
      static jint HOUR_OF_DAY;
      static jint JANUARY;
      static jint JULY;
      static jint JUNE;
      static jint LONG;
      static jint MARCH;
      static jint MAY;
      static jint MILLISECOND;
      static jint MINUTE;
      static jint MONDAY;
      static jint MONTH;
      static jint NOVEMBER;
      static jint OCTOBER;
      static jint PM;
      static jint SATURDAY;
      static jint SECOND;
      static jint SEPTEMBER;
      static jint SHORT;
      static jint SUNDAY;
      static jint THURSDAY;
      static jint TUESDAY;
      static jint UNDECIMBER;
      static jint WEDNESDAY;
      static jint WEEK_OF_MONTH;
      static jint WEEK_OF_YEAR;
      static jint YEAR;
      static jint ZONE_OFFSET;

      void add(jint, jint) const;
      jboolean after(const ::java::lang::Object &) const;
      jboolean before(const ::java::lang::Object &) const;
      void clear() const;
      void clear(jint) const;
      ::java::lang::Object clone() const;
      jint compareTo(const Calendar &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jint get(jint) const;
      jint getActualMaximum(jint) const;
      jint getActualMinimum(jint) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      ::java::lang::String getDisplayName(jint, jint, const ::java::util::Locale &) const;
      ::java::util::Map getDisplayNames(jint, jint, const ::java::util::Locale &) const;
      jint getFirstDayOfWeek() const;
      jint getGreatestMinimum(jint) const;
      static Calendar getInstance();
      static Calendar getInstance(const ::java::util::TimeZone &);
      static Calendar getInstance(const ::java::util::Locale &);
      static Calendar getInstance(const ::java::util::TimeZone &, const ::java::util::Locale &);
      jint getLeastMaximum(jint) const;
      jint getMaximum(jint) const;
      jint getMinimalDaysInFirstWeek() const;
      jint getMinimum(jint) const;
      ::java::util::Date getTime() const;
      jlong getTimeInMillis() const;
      ::java::util::TimeZone getTimeZone() const;
      jint getWeekYear() const;
      jint getWeeksInWeekYear() const;
      jint hashCode() const;
      jboolean isLenient() const;
      jboolean isSet(jint) const;
      jboolean isWeekDateSupported() const;
      void roll(jint, jint) const;
      void roll(jint, jboolean) const;
      void set(jint, jint) const;
      void set(jint, jint, jint) const;
      void set(jint, jint, jint, jint, jint) const;
      void set(jint, jint, jint, jint, jint, jint) const;
      void setFirstDayOfWeek(jint) const;
      void setLenient(jboolean) const;
      void setMinimalDaysInFirstWeek(jint) const;
      void setTime(const ::java::util::Date &) const;
      void setTimeInMillis(jlong) const;
      void setTimeZone(const ::java::util::TimeZone &) const;
      void setWeekDate(jint, jint, jint) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(Calendar);

    class t_Calendar {
    public:
      PyObject_HEAD
      Calendar object;
      static PyObject *wrap_Object(const Calendar&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
