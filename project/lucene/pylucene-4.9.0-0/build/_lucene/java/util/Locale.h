#ifndef java_util_Locale_H
#define java_util_Locale_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Character;
    class String;
    class Cloneable;
    class Class;
  }
  namespace util {
    class Locale$Category;
    class Set;
    class MissingResourceException;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Locale : public ::java::lang::Object {
    public:
      enum {
        mid_init$_5fdc3f48,
        mid_init$_4a264742,
        mid_init$_9c119564,
        mid_clone_846352c3,
        mid_equals_290588e2,
        mid_forLanguageTag_3d69116c,
        mid_getAvailableLocales_59cb5b46,
        mid_getCountry_14c7b5c5,
        mid_getDefault_8bb22876,
        mid_getDefault_6f7a6fa0,
        mid_getDisplayCountry_14c7b5c5,
        mid_getDisplayCountry_c0fb304e,
        mid_getDisplayLanguage_14c7b5c5,
        mid_getDisplayLanguage_c0fb304e,
        mid_getDisplayName_14c7b5c5,
        mid_getDisplayName_c0fb304e,
        mid_getDisplayScript_14c7b5c5,
        mid_getDisplayScript_c0fb304e,
        mid_getDisplayVariant_14c7b5c5,
        mid_getDisplayVariant_c0fb304e,
        mid_getExtension_7611a535,
        mid_getExtensionKeys_03e99967,
        mid_getISO3Country_14c7b5c5,
        mid_getISO3Language_14c7b5c5,
        mid_getISOCountries_2e6d5245,
        mid_getISOLanguages_2e6d5245,
        mid_getLanguage_14c7b5c5,
        mid_getScript_14c7b5c5,
        mid_getUnicodeLocaleAttributes_03e99967,
        mid_getUnicodeLocaleKeys_03e99967,
        mid_getUnicodeLocaleType_97a5258f,
        mid_getVariant_14c7b5c5,
        mid_hashCode_54c6a179,
        mid_setDefault_56b0e4b3,
        mid_setDefault_f8bdf511,
        mid_toLanguageTag_14c7b5c5,
        mid_toString_14c7b5c5,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Locale(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Locale(const Locale& obj) : ::java::lang::Object(obj) {}

      static Locale *CANADA;
      static Locale *CANADA_FRENCH;
      static Locale *CHINA;
      static Locale *CHINESE;
      static Locale *ENGLISH;
      static Locale *FRANCE;
      static Locale *FRENCH;
      static Locale *GERMAN;
      static Locale *GERMANY;
      static Locale *ITALIAN;
      static Locale *ITALY;
      static Locale *JAPAN;
      static Locale *JAPANESE;
      static Locale *KOREA;
      static Locale *KOREAN;
      static Locale *PRC;
      static jchar PRIVATE_USE_EXTENSION;
      static Locale *ROOT;
      static Locale *SIMPLIFIED_CHINESE;
      static Locale *TAIWAN;
      static Locale *TRADITIONAL_CHINESE;
      static Locale *UK;
      static jchar UNICODE_LOCALE_EXTENSION;
      static Locale *US;

      Locale(const ::java::lang::String &);
      Locale(const ::java::lang::String &, const ::java::lang::String &);
      Locale(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      static Locale forLanguageTag(const ::java::lang::String &);
      static JArray< Locale > getAvailableLocales();
      ::java::lang::String getCountry() const;
      static Locale getDefault();
      static Locale getDefault(const ::java::util::Locale$Category &);
      ::java::lang::String getDisplayCountry() const;
      ::java::lang::String getDisplayCountry(const Locale &) const;
      ::java::lang::String getDisplayLanguage() const;
      ::java::lang::String getDisplayLanguage(const Locale &) const;
      ::java::lang::String getDisplayName() const;
      ::java::lang::String getDisplayName(const Locale &) const;
      ::java::lang::String getDisplayScript() const;
      ::java::lang::String getDisplayScript(const Locale &) const;
      ::java::lang::String getDisplayVariant() const;
      ::java::lang::String getDisplayVariant(const Locale &) const;
      ::java::lang::String getExtension(jchar) const;
      ::java::util::Set getExtensionKeys() const;
      ::java::lang::String getISO3Country() const;
      ::java::lang::String getISO3Language() const;
      static JArray< ::java::lang::String > getISOCountries();
      static JArray< ::java::lang::String > getISOLanguages();
      ::java::lang::String getLanguage() const;
      ::java::lang::String getScript() const;
      ::java::util::Set getUnicodeLocaleAttributes() const;
      ::java::util::Set getUnicodeLocaleKeys() const;
      ::java::lang::String getUnicodeLocaleType(const ::java::lang::String &) const;
      ::java::lang::String getVariant() const;
      jint hashCode() const;
      static void setDefault(const Locale &);
      static void setDefault(const ::java::util::Locale$Category &, const Locale &);
      ::java::lang::String toLanguageTag() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(Locale);

    class t_Locale {
    public:
      PyObject_HEAD
      Locale object;
      static PyObject *wrap_Object(const Locale&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
