#ifndef org_apache_lucene_util_LongsRef_H
#define org_apache_lucene_util_LongsRef_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
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

        class LongsRef : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_39c7bd3c,
            mid_init$_6ae021e7,
            mid_clone_3dcbb725,
            mid_compareTo_ec8421f7,
            mid_copyLongs_ec8421e8,
            mid_deepCopyOf_2075e53f,
            mid_equals_290588e2,
            mid_grow_39c7bd3c,
            mid_hashCode_54c6a179,
            mid_isValid_54c6a16a,
            mid_longsEquals_ec8421e4,
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_length,
            fid_longs,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongsRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          LongsRef(const LongsRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jlong > *EMPTY_LONGS;

          jint _get_length() const;
          void _set_length(jint) const;
          JArray< jlong > _get_longs() const;
          void _set_longs(const JArray< jlong > &) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          LongsRef();
          LongsRef(jint);
          LongsRef(const JArray< jlong > &, jint, jint);

          LongsRef clone() const;
          jint compareTo(const LongsRef &) const;
          void copyLongs(const LongsRef &) const;
          static LongsRef deepCopyOf(const LongsRef &);
          jboolean equals(const ::java::lang::Object &) const;
          void grow(jint) const;
          jint hashCode() const;
          jboolean isValid() const;
          jboolean longsEquals(const LongsRef &) const;
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
        extern PyTypeObject PY_TYPE(LongsRef);

        class t_LongsRef {
        public:
          PyObject_HEAD
          LongsRef object;
          static PyObject *wrap_Object(const LongsRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
