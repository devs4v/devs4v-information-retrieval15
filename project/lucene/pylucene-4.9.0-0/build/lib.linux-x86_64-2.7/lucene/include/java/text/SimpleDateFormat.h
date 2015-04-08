#ifndef java_text_SimpleDateFormat_H
#define java_text_SimpleDateFormat_H

#include "java/text/DateFormat.h"

namespace java {
  namespace util {
    class Date;
    class Locale;
  }
  namespace lang {
    class StringBuffer;
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class SimpleDateFormat : public ::java::text::DateFormat {
    public:
      enum {
        mid_init$_54c6a166,
        mid_init$_5fdc3f48,
        mid_init$_f32a91b9,
        mid_applyLocalizedPattern_5fdc3f48,
        mid_applyPattern_5fdc3f48,
        mid_clone_846352c3,
        mid_equals_290588e2,
        mid_get2DigitYearStart_6e14513a,
        mid_hashCode_54c6a179,
        mid_set2DigitYearStart_aa83a4b3,
        mid_toLocalizedPattern_14c7b5c5,
        mid_toPattern_14c7b5c5,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SimpleDateFormat(jobject obj) : ::java::text::DateFormat(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      SimpleDateFormat(const SimpleDateFormat& obj) : ::java::text::DateFormat(obj) {}

      SimpleDateFormat();
      SimpleDateFormat(const ::java::lang::String &);
      SimpleDateFormat(const ::java::lang::String &, const ::java::util::Locale &);

      void applyLocalizedPattern(const ::java::lang::String &) const;
      void applyPattern(const ::java::lang::String &) const;
      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::util::Date get2DigitYearStart() const;
      jint hashCode() const;
      void set2DigitYearStart(const ::java::util::Date &) const;
      ::java::lang::String toLocalizedPattern() const;
      ::java::lang::String toPattern() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyTypeObject PY_TYPE(SimpleDateFormat);

    class t_SimpleDateFormat {
    public:
      PyObject_HEAD
      SimpleDateFormat object;
      static PyObject *wrap_Object(const SimpleDateFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
