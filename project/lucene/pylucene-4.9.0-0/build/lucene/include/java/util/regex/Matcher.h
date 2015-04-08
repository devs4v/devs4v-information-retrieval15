#ifndef java_util_regex_Matcher_H
#define java_util_regex_Matcher_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuffer;
    class CharSequence;
    class String;
    class Class;
  }
  namespace util {
    namespace regex {
      class Pattern;
      class MatchResult;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace regex {

      class Matcher : public ::java::lang::Object {
      public:
        enum {
          mid_appendReplacement_fb652343,
          mid_appendTail_a876a4ab,
          mid_end_54c6a179,
          mid_end_39c7bd23,
          mid_find_54c6a16a,
          mid_find_39c7bd30,
          mid_group_14c7b5c5,
          mid_group_141401b3,
          mid_group_97a5258f,
          mid_groupCount_54c6a179,
          mid_hasAnchoringBounds_54c6a16a,
          mid_hasTransparentBounds_54c6a16a,
          mid_hitEnd_54c6a16a,
          mid_lookingAt_54c6a16a,
          mid_matches_54c6a16a,
          mid_pattern_b3dc5013,
          mid_quoteReplacement_97a5258f,
          mid_region_37cd0ce7,
          mid_regionEnd_54c6a179,
          mid_regionStart_54c6a179,
          mid_replaceAll_97a5258f,
          mid_replaceFirst_97a5258f,
          mid_requireEnd_54c6a16a,
          mid_reset_22ad285b,
          mid_reset_fcc56237,
          mid_start_54c6a179,
          mid_start_39c7bd23,
          mid_toMatchResult_214634f1,
          mid_toString_14c7b5c5,
          mid_useAnchoringBounds_7a77c6be,
          mid_usePattern_4a16c977,
          mid_useTransparentBounds_7a77c6be,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Matcher(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        Matcher(const Matcher& obj) : ::java::lang::Object(obj) {}

        Matcher appendReplacement(const ::java::lang::StringBuffer &, const ::java::lang::String &) const;
        ::java::lang::StringBuffer appendTail(const ::java::lang::StringBuffer &) const;
        jint end() const;
        jint end(jint) const;
        jboolean find() const;
        jboolean find(jint) const;
        ::java::lang::String group() const;
        ::java::lang::String group(jint) const;
        ::java::lang::String group(const ::java::lang::String &) const;
        jint groupCount() const;
        jboolean hasAnchoringBounds() const;
        jboolean hasTransparentBounds() const;
        jboolean hitEnd() const;
        jboolean lookingAt() const;
        jboolean matches() const;
        ::java::util::regex::Pattern pattern() const;
        static ::java::lang::String quoteReplacement(const ::java::lang::String &);
        Matcher region(jint, jint) const;
        jint regionEnd() const;
        jint regionStart() const;
        ::java::lang::String replaceAll(const ::java::lang::String &) const;
        ::java::lang::String replaceFirst(const ::java::lang::String &) const;
        jboolean requireEnd() const;
        Matcher reset() const;
        Matcher reset(const ::java::lang::CharSequence &) const;
        jint start() const;
        jint start(jint) const;
        ::java::util::regex::MatchResult toMatchResult() const;
        ::java::lang::String toString() const;
        Matcher useAnchoringBounds(jboolean) const;
        Matcher usePattern(const ::java::util::regex::Pattern &) const;
        Matcher useTransparentBounds(jboolean) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace regex {
      extern PyTypeObject PY_TYPE(Matcher);

      class t_Matcher {
      public:
        PyObject_HEAD
        Matcher object;
        static PyObject *wrap_Object(const Matcher&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
