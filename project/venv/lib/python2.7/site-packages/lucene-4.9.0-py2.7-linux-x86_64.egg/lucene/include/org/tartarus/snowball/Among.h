#ifndef org_tartarus_snowball_Among_H
#define org_tartarus_snowball_Among_H

#include "java/lang/Object.h"

namespace org {
  namespace tartarus {
    namespace snowball {
      class SnowballProgram;
    }
  }
}
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

      class Among : public ::java::lang::Object {
      public:
        enum {
          mid_init$_c253f9f9,
          max_mid
        };

        enum {
          fid_methodobject,
          fid_result,
          fid_s,
          fid_s_size,
          fid_substring_i,
          max_fid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static jfieldID *fids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Among(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL)
            env->getClass(initializeClass);
        }
        Among(const Among& obj) : ::java::lang::Object(obj) {}

        ::org::tartarus::snowball::SnowballProgram _get_methodobject() const;
        jint _get_result() const;
        JArray< jchar > _get_s() const;
        jint _get_s_size() const;
        jint _get_substring_i() const;

        Among(const ::java::lang::String &, jint, jint, const ::java::lang::String &, const ::org::tartarus::snowball::SnowballProgram &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace tartarus {
    namespace snowball {
      extern PyTypeObject PY_TYPE(Among);

      class t_Among {
      public:
        PyObject_HEAD
        Among object;
        static PyObject *wrap_Object(const Among&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
