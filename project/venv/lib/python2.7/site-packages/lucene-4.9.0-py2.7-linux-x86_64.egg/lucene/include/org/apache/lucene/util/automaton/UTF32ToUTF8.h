#ifndef org_apache_lucene_util_automaton_UTF32ToUTF8_H
#define org_apache_lucene_util_automaton_UTF32ToUTF8_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class UTF32ToUTF8 : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_convert_7aca8e1f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UTF32ToUTF8(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            UTF32ToUTF8(const UTF32ToUTF8& obj) : ::java::lang::Object(obj) {}

            UTF32ToUTF8();

            ::org::apache::lucene::util::automaton::Automaton convert(const ::org::apache::lucene::util::automaton::Automaton &) const;
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
        namespace automaton {
          extern PyTypeObject PY_TYPE(UTF32ToUTF8);

          class t_UTF32ToUTF8 {
          public:
            PyObject_HEAD
            UTF32ToUTF8 object;
            static PyObject *wrap_Object(const UTF32ToUTF8&);
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
