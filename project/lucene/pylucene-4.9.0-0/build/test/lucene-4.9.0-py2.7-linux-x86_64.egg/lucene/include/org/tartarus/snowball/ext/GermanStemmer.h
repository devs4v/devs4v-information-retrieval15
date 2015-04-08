#ifndef org_tartarus_snowball_ext_GermanStemmer_H
#define org_tartarus_snowball_ext_GermanStemmer_H

#include "org/tartarus/snowball/SnowballProgram.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace tartarus {
    namespace snowball {
      namespace ext {

        class GermanStemmer : public ::org::tartarus::snowball::SnowballProgram {
        public:
          enum {
            mid_init$_54c6a166,
            mid_equals_290588e2,
            mid_hashCode_54c6a179,
            mid_stem_54c6a16a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GermanStemmer(jobject obj) : ::org::tartarus::snowball::SnowballProgram(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          GermanStemmer(const GermanStemmer& obj) : ::org::tartarus::snowball::SnowballProgram(obj) {}

          GermanStemmer();

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean stem() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace tartarus {
    namespace snowball {
      namespace ext {
        extern PyTypeObject PY_TYPE(GermanStemmer);

        class t_GermanStemmer {
        public:
          PyObject_HEAD
          GermanStemmer object;
          static PyObject *wrap_Object(const GermanStemmer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
