#ifndef org_apache_lucene_util_automaton_LevenshteinAutomata_H
#define org_apache_lucene_util_automaton_LevenshteinAutomata_H

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

          class LevenshteinAutomata : public ::java::lang::Object {
          public:
            enum {
              mid_init$_f3691645,
              mid_init$_1525174f,
              mid_toAutomaton_d5b8a843,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LevenshteinAutomata(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            LevenshteinAutomata(const LevenshteinAutomata& obj) : ::java::lang::Object(obj) {}

            static jint MAXIMUM_SUPPORTED_DISTANCE;

            LevenshteinAutomata(const ::java::lang::String &, jboolean);
            LevenshteinAutomata(const JArray< jint > &, jint, jboolean);

            ::org::apache::lucene::util::automaton::Automaton toAutomaton(jint) const;
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
          extern PyTypeObject PY_TYPE(LevenshteinAutomata);

          class t_LevenshteinAutomata {
          public:
            PyObject_HEAD
            LevenshteinAutomata object;
            static PyObject *wrap_Object(const LevenshteinAutomata&);
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
