#ifndef org_apache_lucene_analysis_util_OpenStringBuilder_H
#define org_apache_lucene_analysis_util_OpenStringBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Appendable;
    class String;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class OpenStringBuilder : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_39c7bd3c,
              mid_init$_ec6430f4,
              mid_append_fac808c8,
              mid_append_ca3c2aa4,
              mid_append_7f83fd04,
              mid_capacity_54c6a179,
              mid_charAt_39c7bd29,
              mid_flush_54c6a166,
              mid_getArray_dab10e7f,
              mid_length_54c6a179,
              mid_reserve_39c7bd3c,
              mid_reset_54c6a166,
              mid_set_ec6430f4,
              mid_setCharAt_83eec158,
              mid_setLength_39c7bd3c,
              mid_size_54c6a179,
              mid_subSequence_f88dfd57,
              mid_toCharArray_dab10e7f,
              mid_toString_14c7b5c5,
              mid_unsafeWrite_39c7bd3c,
              mid_unsafeWrite_87fd545a,
              mid_unsafeWrite_6f0bb356,
              mid_write_5fdc3f48,
              mid_write_700e23d6,
              mid_write_87fd545a,
              mid_write_39c7bd3c,
              mid_write_20cf5c67,
              mid_write_6f0bb356,
              mid_resize_39c7bd3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OpenStringBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            OpenStringBuilder(const OpenStringBuilder& obj) : ::java::lang::Object(obj) {}

            OpenStringBuilder();
            OpenStringBuilder(jint);
            OpenStringBuilder(const JArray< jchar > &, jint);

            ::java::lang::Appendable append(jchar) const;
            ::java::lang::Appendable append(const ::java::lang::CharSequence &) const;
            ::java::lang::Appendable append(const ::java::lang::CharSequence &, jint, jint) const;
            jint capacity() const;
            jchar charAt(jint) const;
            void flush() const;
            JArray< jchar > getArray() const;
            jint length() const;
            void reserve(jint) const;
            void reset() const;
            void set(const JArray< jchar > &, jint) const;
            void setCharAt(jint, jchar) const;
            void setLength(jint) const;
            jint size() const;
            ::java::lang::CharSequence subSequence(jint, jint) const;
            JArray< jchar > toCharArray() const;
            ::java::lang::String toString() const;
            void unsafeWrite(jint) const;
            void unsafeWrite(jchar) const;
            void unsafeWrite(const JArray< jchar > &, jint, jint) const;
            void write(const ::java::lang::String &) const;
            void write(const JArray< jchar > &) const;
            void write(jchar) const;
            void write(jint) const;
            void write(const OpenStringBuilder &) const;
            void write(const JArray< jchar > &, jint, jint) const;
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
      namespace analysis {
        namespace util {
          extern PyTypeObject PY_TYPE(OpenStringBuilder);

          class t_OpenStringBuilder {
          public:
            PyObject_HEAD
            OpenStringBuilder object;
            static PyObject *wrap_Object(const OpenStringBuilder&);
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
