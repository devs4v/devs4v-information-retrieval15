#ifndef org_tartarus_snowball_SnowballProgram_H
#define org_tartarus_snowball_SnowballProgram_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace tartarus {
    namespace snowball {

      class SnowballProgram : public ::java::lang::Object {
      public:
        enum {
          mid_getCurrent_14c7b5c5,
          mid_getCurrentBuffer_dab10e7f,
          mid_getCurrentBufferLength_54c6a179,
          mid_setCurrent_5fdc3f48,
          mid_setCurrent_ec6430f4,
          mid_stem_54c6a16a,
          mid_insert_cb918b82,
          mid_in_range_d8d154aa,
          mid_copy_from_cbe15af1,
          mid_in_grouping_6f0bb35a,
          mid_out_grouping_6f0bb35a,
          mid_find_among_b_0795632a,
          mid_slice_del_54c6a166,
          mid_in_grouping_b_6f0bb35a,
          mid_slice_from_a8afc64a,
          mid_out_grouping_b_6f0bb35a,
          mid_in_range_b_d8d154aa,
          mid_out_range_d8d154aa,
          mid_out_range_b_d8d154aa,
          mid_eq_s_9145fa84,
          mid_eq_s_b_9145fa84,
          mid_eq_v_a8afc646,
          mid_eq_v_b_a8afc646,
          mid_find_among_0795632a,
          mid_replace_s_cb918b9d,
          mid_slice_check_54c6a166,
          mid_slice_to_468cbe57,
          mid_assign_to_468cbe57,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SnowballProgram(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        SnowballProgram(const SnowballProgram& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String getCurrent() const;
        JArray< jchar > getCurrentBuffer() const;
        jint getCurrentBufferLength() const;
        void setCurrent(const ::java::lang::String &) const;
        void setCurrent(const JArray< jchar > &, jint) const;
        jboolean stem() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace tartarus {
    namespace snowball {
      extern PyTypeObject PY_TYPE(SnowballProgram);

      class t_SnowballProgram {
      public:
        PyObject_HEAD
        SnowballProgram object;
        static PyObject *wrap_Object(const SnowballProgram&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
