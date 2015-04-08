#ifndef org_apache_lucene_util_BytesRef_H
#define org_apache_lucene_util_BytesRef_H

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

        class BytesRef : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_a8afc64a,
            mid_init$_39c7bd3c,
            mid_init$_49b4f12b,
            mid_init$_86f4435f,
            mid_append_7bc03dc4,
            mid_bytesEquals_7bc03dc8,
            mid_clone_4ae19461,
            mid_compareTo_7bc03ddb,
            mid_copyBytes_7bc03dc4,
            mid_copyChars_a8afc64a,
            mid_deepCopyOf_21e43cb7,
            mid_equals_290588e2,
            mid_getUTF8SortedAsUTF16Comparator_5a7ff2fc,
            mid_getUTF8SortedAsUnicodeComparator_5a7ff2fc,
            mid_grow_39c7bd3c,
            mid_hashCode_54c6a179,
            mid_isValid_54c6a16a,
            mid_toString_14c7b5c5,
            mid_utf8ToString_14c7b5c5,
            max_mid
          };

          enum {
            fid_bytes,
            fid_length,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BytesRef(const BytesRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jbyte > *EMPTY_BYTES;

          JArray< jbyte > _get_bytes() const;
          void _set_bytes(const JArray< jbyte > &) const;
          jint _get_length() const;
          void _set_length(jint) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          BytesRef();
          BytesRef(const ::java::lang::CharSequence &);
          BytesRef(jint);
          BytesRef(const JArray< jbyte > &);
          BytesRef(const JArray< jbyte > &, jint, jint);

          void append(const BytesRef &) const;
          jboolean bytesEquals(const BytesRef &) const;
          BytesRef clone() const;
          jint compareTo(const BytesRef &) const;
          void copyBytes(const BytesRef &) const;
          void copyChars(const ::java::lang::CharSequence &) const;
          static BytesRef deepCopyOf(const BytesRef &);
          jboolean equals(const ::java::lang::Object &) const;
          static ::java::util::Comparator getUTF8SortedAsUTF16Comparator();
          static ::java::util::Comparator getUTF8SortedAsUnicodeComparator();
          void grow(jint) const;
          jint hashCode() const;
          jboolean isValid() const;
          ::java::lang::String toString() const;
          ::java::lang::String utf8ToString() const;
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
        extern PyTypeObject PY_TYPE(BytesRef);

        class t_BytesRef {
        public:
          PyObject_HEAD
          BytesRef object;
          static PyObject *wrap_Object(const BytesRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
