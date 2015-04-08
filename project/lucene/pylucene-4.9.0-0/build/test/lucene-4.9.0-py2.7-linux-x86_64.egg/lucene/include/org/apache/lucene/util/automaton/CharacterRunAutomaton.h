#ifndef org_apache_lucene_util_automaton_CharacterRunAutomaton_H
#define org_apache_lucene_util_automaton_CharacterRunAutomaton_H

#include "org/apache/lucene/util/automaton/RunAutomaton.h"

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

          class CharacterRunAutomaton : public ::org::apache::lucene::util::automaton::RunAutomaton {
          public:
            enum {
              mid_init$_fc7cf394,
              mid_run_5fdc3f44,
              mid_run_6f0bb35a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharacterRunAutomaton(jobject obj) : ::org::apache::lucene::util::automaton::RunAutomaton(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CharacterRunAutomaton(const CharacterRunAutomaton& obj) : ::org::apache::lucene::util::automaton::RunAutomaton(obj) {}

            CharacterRunAutomaton(const ::org::apache::lucene::util::automaton::Automaton &);

            jboolean run(const ::java::lang::String &) const;
            jboolean run(const JArray< jchar > &, jint, jint) const;
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
          extern PyTypeObject PY_TYPE(CharacterRunAutomaton);

          class t_CharacterRunAutomaton {
          public:
            PyObject_HEAD
            CharacterRunAutomaton object;
            static PyObject *wrap_Object(const CharacterRunAutomaton&);
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
