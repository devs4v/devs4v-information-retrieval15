#ifndef java_text_BreakIterator_H
#define java_text_BreakIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class Class;
    class Cloneable;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class BreakIterator : public ::java::lang::Object {
    public:
      enum {
        mid_clone_846352c3,
        mid_current_54c6a179,
        mid_first_54c6a179,
        mid_following_39c7bd23,
        mid_getAvailableLocales_59cb5b46,
        mid_getCharacterInstance_91cbbddf,
        mid_getCharacterInstance_09bf44ce,
        mid_getLineInstance_91cbbddf,
        mid_getLineInstance_09bf44ce,
        mid_getSentenceInstance_91cbbddf,
        mid_getSentenceInstance_09bf44ce,
        mid_getWordInstance_91cbbddf,
        mid_getWordInstance_09bf44ce,
        mid_isBoundary_39c7bd30,
        mid_last_54c6a179,
        mid_next_54c6a179,
        mid_next_39c7bd23,
        mid_preceding_39c7bd23,
        mid_previous_54c6a179,
        mid_setText_5fdc3f48,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit BreakIterator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      BreakIterator(const BreakIterator& obj) : ::java::lang::Object(obj) {}

      static jint DONE;

      ::java::lang::Object clone() const;
      jint current() const;
      jint first() const;
      jint following(jint) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      static BreakIterator getCharacterInstance();
      static BreakIterator getCharacterInstance(const ::java::util::Locale &);
      static BreakIterator getLineInstance();
      static BreakIterator getLineInstance(const ::java::util::Locale &);
      static BreakIterator getSentenceInstance();
      static BreakIterator getSentenceInstance(const ::java::util::Locale &);
      static BreakIterator getWordInstance();
      static BreakIterator getWordInstance(const ::java::util::Locale &);
      jboolean isBoundary(jint) const;
      jint last() const;
      jint next() const;
      jint next(jint) const;
      jint preceding(jint) const;
      jint previous() const;
      void setText(const ::java::lang::String &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyTypeObject PY_TYPE(BreakIterator);

    class t_BreakIterator {
    public:
      PyObject_HEAD
      BreakIterator object;
      static PyObject *wrap_Object(const BreakIterator&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
