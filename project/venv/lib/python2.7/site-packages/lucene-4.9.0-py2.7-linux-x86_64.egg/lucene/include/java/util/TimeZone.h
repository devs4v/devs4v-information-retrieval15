#ifndef java_util_TimeZone_H
#define java_util_TimeZone_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class Date;
  }
  namespace lang {
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

    class TimeZone : public ::java::lang::Object {
    public:
      enum {
        mid_init$_54c6a166,
        mid_clone_846352c3,
        mid_getAvailableIDs_2e6d5245,
        mid_getAvailableIDs_d74df9a3,
        mid_getDSTSavings_54c6a179,
        mid_getDefault_6cce40e5,
        mid_getDisplayName_14c7b5c5,
        mid_getDisplayName_c0fb304e,
        mid_getDisplayName_0bd9c84a,
        mid_getDisplayName_bcf536cd,
        mid_getID_14c7b5c5,
        mid_getOffset_0ee6df30,
        mid_getOffset_8b2e9699,
        mid_getRawOffset_54c6a179,
        mid_getTimeZone_32517673,
        mid_hasSameRules_f7b32d2c,
        mid_inDaylightTime_aa83a4bf,
        mid_observesDaylightTime_54c6a16a,
        mid_setDefault_f7b32d20,
        mid_setID_5fdc3f48,
        mid_setRawOffset_39c7bd3c,
        mid_useDaylightTime_54c6a16a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit TimeZone(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      TimeZone(const TimeZone& obj) : ::java::lang::Object(obj) {}

      static jint LONG;
      static jint SHORT;

      TimeZone();

      ::java::lang::Object clone() const;
      static JArray< ::java::lang::String > getAvailableIDs();
      static JArray< ::java::lang::String > getAvailableIDs(jint);
      jint getDSTSavings() const;
      static TimeZone getDefault();
      ::java::lang::String getDisplayName() const;
      ::java::lang::String getDisplayName(const ::java::util::Locale &) const;
      ::java::lang::String getDisplayName(jboolean, jint) const;
      ::java::lang::String getDisplayName(jboolean, jint, const ::java::util::Locale &) const;
      ::java::lang::String getID() const;
      jint getOffset(jlong) const;
      jint getOffset(jint, jint, jint, jint, jint, jint) const;
      jint getRawOffset() const;
      static TimeZone getTimeZone(const ::java::lang::String &);
      jboolean hasSameRules(const TimeZone &) const;
      jboolean inDaylightTime(const ::java::util::Date &) const;
      jboolean observesDaylightTime() const;
      static void setDefault(const TimeZone &);
      void setID(const ::java::lang::String &) const;
      void setRawOffset(jint) const;
      jboolean useDaylightTime() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(TimeZone);

    class t_TimeZone {
    public:
      PyObject_HEAD
      TimeZone object;
      static PyObject *wrap_Object(const TimeZone&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
