#ifndef java_text_Collator_H
#define java_text_Collator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class Comparator;
  }
  namespace lang {
    class String;
    class Cloneable;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class Collator : public ::java::lang::Object {
    public:
      enum {
        mid_clone_846352c3,
        mid_compare_466982ed,
        mid_compare_4a26475d,
        mid_equals_290588e2,
        mid_equals_4a26474e,
        mid_getAvailableLocales_59cb5b46,
        mid_getDecomposition_54c6a179,
        mid_getInstance_44b7fa29,
        mid_getInstance_e12c63f2,
        mid_getStrength_54c6a179,
        mid_hashCode_54c6a179,
        mid_setDecomposition_39c7bd3c,
        mid_setStrength_39c7bd3c,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Collator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Collator(const Collator& obj) : ::java::lang::Object(obj) {}

      static jint CANONICAL_DECOMPOSITION;
      static jint FULL_DECOMPOSITION;
      static jint IDENTICAL;
      static jint NO_DECOMPOSITION;
      static jint PRIMARY;
      static jint SECONDARY;
      static jint TERTIARY;

      ::java::lang::Object clone() const;
      jint compare(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jint compare(const ::java::lang::String &, const ::java::lang::String &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean equals(const ::java::lang::String &, const ::java::lang::String &) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      jint getDecomposition() const;
      static Collator getInstance();
      static Collator getInstance(const ::java::util::Locale &);
      jint getStrength() const;
      jint hashCode() const;
      void setDecomposition(jint) const;
      void setStrength(jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyTypeObject PY_TYPE(Collator);

    class t_Collator {
    public:
      PyObject_HEAD
      Collator object;
      static PyObject *wrap_Object(const Collator&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
