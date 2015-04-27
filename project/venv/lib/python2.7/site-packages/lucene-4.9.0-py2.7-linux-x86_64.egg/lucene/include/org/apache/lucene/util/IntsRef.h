#ifndef org_apache_lucene_util_IntsRef_H
#define org_apache_lucene_util_IntsRef_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class Cloneable;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IntsRef : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_39c7bd3c,
            mid_init$_3e1ea22c,
            mid_clone_5b734841,
            mid_compareTo_4defa0f7,
            mid_copyInts_4defa0e8,
            mid_deepCopyOf_44b4216f,
            mid_equals_290588e2,
            mid_grow_39c7bd3c,
            mid_hashCode_54c6a179,
            mid_intsEquals_4defa0e4,
            mid_isValid_54c6a16a,
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_ints,
            fid_length,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntsRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IntsRef(const IntsRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jint > *EMPTY_INTS;

          JArray< jint > _get_ints() const;
          void _set_ints(const JArray< jint > &) const;
          jint _get_length() const;
          void _set_length(jint) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          IntsRef();
          IntsRef(jint);
          IntsRef(const JArray< jint > &, jint, jint);

          IntsRef clone() const;
          jint compareTo(const IntsRef &) const;
          void copyInts(const IntsRef &) const;
          static IntsRef deepCopyOf(const IntsRef &);
          jboolean equals(const ::java::lang::Object &) const;
          void grow(jint) const;
          jint hashCode() const;
          jboolean intsEquals(const IntsRef &) const;
          jboolean isValid() const;
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
        extern PyTypeObject PY_TYPE(IntsRef);

        class t_IntsRef {
        public:
          PyObject_HEAD
          IntsRef object;
          static PyObject *wrap_Object(const IntsRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
