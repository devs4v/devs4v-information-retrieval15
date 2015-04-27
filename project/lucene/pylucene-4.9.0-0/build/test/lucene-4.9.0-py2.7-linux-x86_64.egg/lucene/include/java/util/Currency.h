#ifndef java_util_Currency_H
#define java_util_Currency_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Currency : public ::java::lang::Object {
    public:
      enum {
        mid_getAvailableCurrencies_03e99967,
        mid_getCurrencyCode_14c7b5c5,
        mid_getDefaultFractionDigits_54c6a179,
        mid_getDisplayName_14c7b5c5,
        mid_getDisplayName_c0fb304e,
        mid_getInstance_ebbaff76,
        mid_getInstance_5a97ed67,
        mid_getNumericCode_54c6a179,
        mid_getSymbol_14c7b5c5,
        mid_getSymbol_c0fb304e,
        mid_toString_14c7b5c5,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Currency(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Currency(const Currency& obj) : ::java::lang::Object(obj) {}

      static ::java::util::Set getAvailableCurrencies();
      ::java::lang::String getCurrencyCode() const;
      jint getDefaultFractionDigits() const;
      ::java::lang::String getDisplayName() const;
      ::java::lang::String getDisplayName(const ::java::util::Locale &) const;
      static Currency getInstance(const ::java::util::Locale &);
      static Currency getInstance(const ::java::lang::String &);
      jint getNumericCode() const;
      ::java::lang::String getSymbol() const;
      ::java::lang::String getSymbol(const ::java::util::Locale &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(Currency);

    class t_Currency {
    public:
      PyObject_HEAD
      Currency object;
      static PyObject *wrap_Object(const Currency&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
