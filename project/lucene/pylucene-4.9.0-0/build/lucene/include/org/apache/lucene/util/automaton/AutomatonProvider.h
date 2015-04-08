#ifndef org_apache_lucene_util_automaton_AutomatonProvider_H
#define org_apache_lucene_util_automaton_AutomatonProvider_H

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
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class AutomatonProvider : public ::java::lang::Object {
          public:
            enum {
              mid_getAutomaton_af13056f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AutomatonProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AutomatonProvider(const AutomatonProvider& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::automaton::Automaton getAutomaton(const ::java::lang::String &) const;
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
          extern PyTypeObject PY_TYPE(AutomatonProvider);

          class t_AutomatonProvider {
          public:
            PyObject_HEAD
            AutomatonProvider object;
            static PyObject *wrap_Object(const AutomatonProvider&);
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
