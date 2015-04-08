#ifndef org_apache_lucene_util_mutable_MutableValueStr_H
#define org_apache_lucene_util_mutable_MutableValueStr_H

#include "org/apache/lucene/util/mutable/MutableValue.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {

          class MutableValueStr : public ::org::apache::lucene::util::mutable$::MutableValue {
          public:
            enum {
              mid_init$_54c6a166,
              mid_compareSameType_290588f1,
              mid_copy_d590ce7c,
              mid_duplicate_15ab3811,
              mid_equalsSameType_290588e2,
              mid_hashCode_54c6a179,
              mid_toObject_846352c3,
              max_mid
            };

            enum {
              fid_value,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MutableValueStr(jobject obj) : ::org::apache::lucene::util::mutable$::MutableValue(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            MutableValueStr(const MutableValueStr& obj) : ::org::apache::lucene::util::mutable$::MutableValue(obj) {}

            ::org::apache::lucene::util::BytesRef _get_value() const;
            void _set_value(const ::org::apache::lucene::util::BytesRef &) const;

            MutableValueStr();

            jint compareSameType(const ::java::lang::Object &) const;
            void copy(const ::org::apache::lucene::util::mutable$::MutableValue &) const;
            ::org::apache::lucene::util::mutable$::MutableValue duplicate() const;
            jboolean equalsSameType(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::java::lang::Object toObject() const;
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
          extern PyTypeObject PY_TYPE(MutableValueStr);

          class t_MutableValueStr {
          public:
            PyObject_HEAD
            MutableValueStr object;
            static PyObject *wrap_Object(const MutableValueStr&);
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
