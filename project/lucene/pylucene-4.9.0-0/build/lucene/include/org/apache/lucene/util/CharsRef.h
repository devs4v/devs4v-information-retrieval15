#ifndef org_apache_lucene_util_CharsRef_H
#define org_apache_lucene_util_CharsRef_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Comparable;
    class CharSequence;
    class String;
    class Cloneable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class CharsRef : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_5fdc3f48,
            mid_init$_39c7bd3c,
            mid_init$_6f0bb356,
            mid_append_6f0bb356,
            mid_charAt_39c7bd29,
            mid_charsEquals_ee7999ca,
            mid_clone_399267bb,
            mid_compareTo_ee7999d9,
            mid_copyChars_ee7999c6,
            mid_copyChars_6f0bb356,
            mid_deepCopyOf_abd75df7,
            mid_equals_290588e2,
            mid_getUTF16SortedAsUTF8Comparator_5a7ff2fc,
            mid_grow_39c7bd3c,
            mid_hashCode_54c6a179,
            mid_isValid_54c6a16a,
            mid_length_54c6a179,
            mid_subSequence_f88dfd57,
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_chars,
            fid_length,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharsRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CharsRef(const CharsRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jchar > *EMPTY_CHARS;

          JArray< jchar > _get_chars() const;
          void _set_chars(const JArray< jchar > &) const;
          jint _get_length() const;
          void _set_length(jint) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          CharsRef();
          CharsRef(const ::java::lang::String &);
          CharsRef(jint);
          CharsRef(const JArray< jchar > &, jint, jint);

          void append(const JArray< jchar > &, jint, jint) const;
          jchar charAt(jint) const;
          jboolean charsEquals(const CharsRef &) const;
          CharsRef clone() const;
          jint compareTo(const CharsRef &) const;
          void copyChars(const CharsRef &) const;
          void copyChars(const JArray< jchar > &, jint, jint) const;
          static CharsRef deepCopyOf(const CharsRef &);
          jboolean equals(const ::java::lang::Object &) const;
          static ::java::util::Comparator getUTF16SortedAsUTF8Comparator();
          void grow(jint) const;
          jint hashCode() const;
          jboolean isValid() const;
          jint length() const;
          ::java::lang::CharSequence subSequence(jint, jint) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(CharsRef);

        class t_CharsRef {
        public:
          PyObject_HEAD
          CharsRef object;
          static PyObject *wrap_Object(const CharsRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
