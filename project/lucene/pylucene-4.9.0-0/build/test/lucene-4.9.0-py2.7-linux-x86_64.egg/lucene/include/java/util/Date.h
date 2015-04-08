#ifndef java_util_Date_H
#define java_util_Date_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class String;
    class Cloneable;
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Date : public ::java::lang::Object {
    public:
      enum {
        mid_init$_54c6a166,
        mid_init$_0ee6df2f,
        mid_init$_5fdc3f48,
        mid_init$_d3236aa4,
        mid_init$_eca84e64,
        mid_init$_8b2e9686,
        mid_UTC_8b2e969a,
        mid_after_aa83a4bf,
        mid_before_aa83a4bf,
        mid_clone_846352c3,
        mid_compareTo_aa83a4ac,
        mid_equals_290588e2,
        mid_getDate_54c6a179,
        mid_getDay_54c6a179,
        mid_getHours_54c6a179,
        mid_getMinutes_54c6a179,
        mid_getMonth_54c6a179,
        mid_getSeconds_54c6a179,
        mid_getTime_54c6a17a,
        mid_getTimezoneOffset_54c6a179,
        mid_getYear_54c6a179,
        mid_hashCode_54c6a179,
        mid_parse_5fdc3f54,
        mid_setDate_39c7bd3c,
        mid_setHours_39c7bd3c,
        mid_setMinutes_39c7bd3c,
        mid_setMonth_39c7bd3c,
        mid_setSeconds_39c7bd3c,
        mid_setTime_0ee6df2f,
        mid_setYear_39c7bd3c,
        mid_toGMTString_14c7b5c5,
        mid_toLocaleString_14c7b5c5,
        mid_toString_14c7b5c5,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Date(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Date(const Date& obj) : ::java::lang::Object(obj) {}

      Date();
      Date(jlong);
      Date(const ::java::lang::String &);
      Date(jint, jint, jint);
      Date(jint, jint, jint, jint, jint);
      Date(jint, jint, jint, jint, jint, jint);

      static jlong UTC(jint, jint, jint, jint, jint, jint);
      jboolean after(const Date &) const;
      jboolean before(const Date &) const;
      ::java::lang::Object clone() const;
      jint compareTo(const Date &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jint getDate() const;
      jint getDay() const;
      jint getHours() const;
      jint getMinutes() const;
      jint getMonth() const;
      jint getSeconds() const;
      jlong getTime() const;
      jint getTimezoneOffset() const;
      jint getYear() const;
      jint hashCode() const;
      static jlong parse(const ::java::lang::String &);
      void setDate(jint) const;
      void setHours(jint) const;
      void setMinutes(jint) const;
      void setMonth(jint) const;
      void setSeconds(jint) const;
      void setTime(jlong) const;
      void setYear(jint) const;
      ::java::lang::String toGMTString() const;
      ::java::lang::String toLocaleString() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(Date);

    class t_Date {
    public:
      PyObject_HEAD
      Date object;
      static PyObject *wrap_Object(const Date&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
