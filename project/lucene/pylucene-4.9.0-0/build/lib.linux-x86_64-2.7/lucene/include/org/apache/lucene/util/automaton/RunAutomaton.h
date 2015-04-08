#ifndef org_apache_lucene_util_automaton_RunAutomaton_H
#define org_apache_lucene_util_automaton_RunAutomaton_H

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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class RunAutomaton : public ::java::lang::Object {
          public:
            enum {
              mid_init$_930c56a3,
              mid_equals_290588e2,
              mid_getCharIntervals_dab10e75,
              mid_getInitialState_54c6a179,
              mid_getSize_54c6a179,
              mid_hashCode_54c6a179,
              mid_isAccept_39c7bd30,
              mid_step_d8d154b9,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RunAutomaton(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            RunAutomaton(const RunAutomaton& obj) : ::java::lang::Object(obj) {}

            RunAutomaton(const ::org::apache::lucene::util::automaton::Automaton &, jint, jboolean);

            jboolean equals(const ::java::lang::Object &) const;
            JArray< jint > getCharIntervals() const;
            jint getInitialState() const;
            jint getSize() const;
            jint hashCode() const;
            jboolean isAccept(jint) const;
            jint step(jint, jint) const;
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
        namespace automaton {
          extern PyTypeObject PY_TYPE(RunAutomaton);

          class t_RunAutomaton {
          public:
            PyObject_HEAD
            RunAutomaton object;
            static PyObject *wrap_Object(const RunAutomaton&);
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
