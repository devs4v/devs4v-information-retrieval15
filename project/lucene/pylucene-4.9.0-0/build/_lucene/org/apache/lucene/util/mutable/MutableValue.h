#ifndef org_apache_lucene_util_mutable_MutableValue_H
#define org_apache_lucene_util_mutable_MutableValue_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {

          class MutableValue : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_compareSameType_290588f1,
              mid_compareTo_d590ce63,
              mid_copy_d590ce7c,
              mid_duplicate_15ab3811,
              mid_equals_290588e2,
              mid_equalsSameType_290588e2,
              mid_exists_54c6a16a,
              mid_hashCode_54c6a179,
              mid_toObject_846352c3,
              mid_toString_14c7b5c5,
              max_mid
            };

            enum {
              fid_exists,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MutableValue(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            MutableValue(const MutableValue& obj) : ::java::lang::Object(obj) {}

            jboolean _get_exists() const;
            void _set_exists(jboolean) const;

            MutableValue();

            jint compareSameType(const ::java::lang::Object &) const;
            jint compareTo(const MutableValue &) const;
            void copy(const MutableValue &) const;
            MutableValue duplicate() const;
            jboolean equals(const ::java::lang::Object &) const;
            jboolean equalsSameType(const ::java::lang::Object &) const;
            jboolean exists() const;
            jint hashCode() const;
            ::java::lang::Object toObject() const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {
          extern PyTypeObject PY_TYPE(MutableValue);

          class t_MutableValue {
          public:
            PyObject_HEAD
            MutableValue object;
            static PyObject *wrap_Object(const MutableValue&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
