#ifndef java_text_DecimalFormat_H
#define java_text_DecimalFormat_H

#include "java/text/NumberFormat.h"

namespace java {
  namespace lang {
    class StringBuffer;
    class Number;
    class Object;
    class Class;
    class String;
  }
  namespace util {
    class Currency;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class DecimalFormat : public ::java::text::NumberFormat {
    public:
      enum {
        mid_init$_54c6a166,
        mid_init$_5fdc3f48,
        mid_applyLocalizedPattern_5fdc3f48,
        mid_applyPattern_5fdc3f48,
        mid_clone_846352c3,
        mid_equals_290588e2,
        mid_getCurrency_14c3f2a1,
        mid_getGroupingSize_54c6a179,
        mid_getMaximumFractionDigits_54c6a179,
        mid_getMaximumIntegerDigits_54c6a179,
        mid_getMinimumFractionDigits_54c6a179,
        mid_getMinimumIntegerDigits_54c6a179,
        mid_getMultiplier_54c6a179,
        mid_getNegativePrefix_14c7b5c5,
        mid_getNegativeSuffix_14c7b5c5,
        mid_getPositivePrefix_14c7b5c5,
        mid_getPositiveSuffix_14c7b5c5,
        mid_hashCode_54c6a179,
        mid_isDecimalSeparatorAlwaysShown_54c6a16a,
        mid_isParseBigDecimal_54c6a16a,
        mid_setCurrency_de939370,
        mid_setDecimalSeparatorAlwaysShown_bb0c767f,
        mid_setGroupingSize_39c7bd3c,
        mid_setMaximumFractionDigits_39c7bd3c,
        mid_setMaximumIntegerDigits_39c7bd3c,
        mid_setMinimumFractionDigits_39c7bd3c,
        mid_setMinimumIntegerDigits_39c7bd3c,
        mid_setMultiplier_39c7bd3c,
        mid_setNegativePrefix_5fdc3f48,
        mid_setNegativeSuffix_5fdc3f48,
        mid_setParseBigDecimal_bb0c767f,
        mid_setPositivePrefix_5fdc3f48,
        mid_setPositiveSuffix_5fdc3f48,
        mid_toLocalizedPattern_14c7b5c5,
        mid_toPattern_14c7b5c5,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DecimalFormat(jobject obj) : ::java::text::NumberFormat(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      DecimalFormat(const DecimalFormat& obj) : ::java::text::NumberFormat(obj) {}

      DecimalFormat();
      DecimalFormat(const ::java::lang::String &);

      void applyLocalizedPattern(const ::java::lang::String &) const;
      void applyPattern(const ::java::lang::String &) const;
      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::util::Currency getCurrency() const;
      jint getGroupingSize() const;
      jint getMaximumFractionDigits() const;
      jint getMaximumIntegerDigits() const;
      jint getMinimumFractionDigits() const;
      jint getMinimumIntegerDigits() const;
      jint getMultiplier() const;
      ::java::lang::String getNegativePrefix() const;
      ::java::lang::String getNegativeSuffix() const;
      ::java::lang::String getPositivePrefix() const;
      ::java::lang::String getPositiveSuffix() const;
      jint hashCode() const;
      jboolean isDecimalSeparatorAlwaysShown() const;
      jboolean isParseBigDecimal() const;
      void setCurrency(const ::java::util::Currency &) const;
      void setDecimalSeparatorAlwaysShown(jboolean) const;
      void setGroupingSize(jint) const;
      void setMaximumFractionDigits(jint) const;
      void setMaximumIntegerDigits(jint) const;
      void setMinimumFractionDigits(jint) const;
      void setMinimumIntegerDigits(jint) const;
      void setMultiplier(jint) const;
      void setNegativePrefix(const ::java::lang::String &) const;
      void setNegativeSuffix(const ::java::lang::String &) const;
      void setParseBigDecimal(jboolean) const;
      void setPositivePrefix(const ::java::lang::String &) const;
      void setPositiveSuffix(const ::java::lang::String &) const;
      ::java::lang::String toLocalizedPattern() const;
      ::java::lang::String toPattern() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyTypeObject PY_TYPE(DecimalFormat);

    class t_DecimalFormat {
    public:
      PyObject_HEAD
      DecimalFormat object;
      static PyObject *wrap_Object(const DecimalFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
