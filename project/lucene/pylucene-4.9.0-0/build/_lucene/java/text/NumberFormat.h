#ifndef java_text_NumberFormat_H
#define java_text_NumberFormat_H

#include "java/text/Format.h"

namespace java {
  namespace lang {
    class StringBuffer;
    class Class;
    class Object;
    class Number;
    class String;
  }
  namespace util {
    class Locale;
    class Currency;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class NumberFormat : public ::java::text::Format {
    public:
      enum {
        mid_clone_846352c3,
        mid_equals_290588e2,
        mid_format_1b4624f8,
        mid_format_3e02f30e,
        mid_getAvailableLocales_59cb5b46,
        mid_getCurrency_14c3f2a1,
        mid_getCurrencyInstance_6b701965,
        mid_getCurrencyInstance_c103b3da,
        mid_getInstance_6b701965,
        mid_getInstance_c103b3da,
        mid_getIntegerInstance_6b701965,
        mid_getIntegerInstance_c103b3da,
        mid_getMaximumFractionDigits_54c6a179,
        mid_getMaximumIntegerDigits_54c6a179,
        mid_getMinimumFractionDigits_54c6a179,
        mid_getMinimumIntegerDigits_54c6a179,
        mid_getNumberInstance_6b701965,
        mid_getNumberInstance_c103b3da,
        mid_getPercentInstance_6b701965,
        mid_getPercentInstance_c103b3da,
        mid_hashCode_54c6a179,
        mid_isGroupingUsed_54c6a16a,
        mid_isParseIntegerOnly_54c6a16a,
        mid_parse_271f2fcb,
        mid_setCurrency_de939370,
        mid_setGroupingUsed_bb0c767f,
        mid_setMaximumFractionDigits_39c7bd3c,
        mid_setMaximumIntegerDigits_39c7bd3c,
        mid_setMinimumFractionDigits_39c7bd3c,
        mid_setMinimumIntegerDigits_39c7bd3c,
        mid_setParseIntegerOnly_bb0c767f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NumberFormat(jobject obj) : ::java::text::Format(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      NumberFormat(const NumberFormat& obj) : ::java::text::Format(obj) {}

      static jint FRACTION_FIELD;
      static jint INTEGER_FIELD;

      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String format(jdouble) const;
      ::java::lang::String format(jlong) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      ::java::util::Currency getCurrency() const;
      static NumberFormat getCurrencyInstance();
      static NumberFormat getCurrencyInstance(const ::java::util::Locale &);
      static NumberFormat getInstance();
      static NumberFormat getInstance(const ::java::util::Locale &);
      static NumberFormat getIntegerInstance();
      static NumberFormat getIntegerInstance(const ::java::util::Locale &);
      jint getMaximumFractionDigits() const;
      jint getMaximumIntegerDigits() const;
      jint getMinimumFractionDigits() const;
      jint getMinimumIntegerDigits() const;
      static NumberFormat getNumberInstance();
      static NumberFormat getNumberInstance(const ::java::util::Locale &);
      static NumberFormat getPercentInstance();
      static NumberFormat getPercentInstance(const ::java::util::Locale &);
      jint hashCode() const;
      jboolean isGroupingUsed() const;
      jboolean isParseIntegerOnly() const;
      ::java::lang::Number parse(const ::java::lang::String &) const;
      void setCurrency(const ::java::util::Currency &) const;
      void setGroupingUsed(jboolean) const;
      void setMaximumFractionDigits(jint) const;
      void setMaximumIntegerDigits(jint) const;
      void setMinimumFractionDigits(jint) const;
      void setMinimumIntegerDigits(jint) const;
      void setParseIntegerOnly(jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyTypeObject PY_TYPE(NumberFormat);

    class t_NumberFormat {
    public:
      PyObject_HEAD
      NumberFormat object;
      static PyObject *wrap_Object(const NumberFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
