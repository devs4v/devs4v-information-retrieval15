#ifndef java_util_regex_Pattern_H
#define java_util_regex_Pattern_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
  }
  namespace util {
    namespace regex {
      class Matcher;
    }
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace regex {

      class Pattern : public ::java::lang::Object {
      public:
        enum {
          mid_compile_9caf2dad,
          mid_compile_7746ce2f,
          mid_flags_54c6a179,
          mid_matcher_fcc56237,
          mid_matches_de33e3d8,
          mid_pattern_14c7b5c5,
          mid_quote_97a5258f,
          mid_split_1891c189,
          mid_split_7f73739f,
          mid_toString_14c7b5c5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Pattern(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        Pattern(const Pattern& obj) : ::java::lang::Object(obj) {}

        static jint CANON_EQ;
        static jint CASE_INSENSITIVE;
        static jint COMMENTS;
        static jint DOTALL;
        static jint LITERAL;
        static jint MULTILINE;
        static jint UNICODE_CASE;
        static jint UNICODE_CHARACTER_CLASS;
        static jint UNIX_LINES;

        static Pattern compile(const ::java::lang::String &);
        static Pattern compile(const ::java::lang::String &, jint);
        jint flags() const;
        ::java::util::regex::Matcher matcher(const ::java::lang::CharSequence &) const;
        static jboolean matches(const ::java::lang::String &, const ::java::lang::CharSequence &);
        ::java::lang::String pattern() const;
        static ::java::lang::String quote(const ::java::lang::String &);
        JArray< ::java::lang::String > split(const ::java::lang::CharSequence &) const;
        JArray< ::java::lang::String > split(const ::java::lang::CharSequence &, jint) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace regex {
      extern PyTypeObject PY_TYPE(Pattern);

      class t_Pattern {
      public:
        PyObject_HEAD
        Pattern object;
        static PyObject *wrap_Object(const Pattern&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
