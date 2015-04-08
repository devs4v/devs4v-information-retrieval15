#ifndef org_apache_lucene_util_automaton_CompiledAutomaton$AUTOMATON_TYPE_H
#define org_apache_lucene_util_automaton_CompiledAutomaton$AUTOMATON_TYPE_H

#include "java/lang/Enum.h"

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

          class CompiledAutomaton$AUTOMATON_TYPE : public ::java::lang::Enum {
          public:
            enum {
              mid_valueOf_9a95b48c,
              mid_values_9a1b8d3a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompiledAutomaton$AUTOMATON_TYPE(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CompiledAutomaton$AUTOMATON_TYPE(const CompiledAutomaton$AUTOMATON_TYPE& obj) : ::java::lang::Enum(obj) {}

            static CompiledAutomaton$AUTOMATON_TYPE *ALL;
            static CompiledAutomaton$AUTOMATON_TYPE *NONE;
            static CompiledAutomaton$AUTOMATON_TYPE *NORMAL;
            static CompiledAutomaton$AUTOMATON_TYPE *PREFIX$;
            static CompiledAutomaton$AUTOMATON_TYPE *SINGLE;

            static CompiledAutomaton$AUTOMATON_TYPE valueOf(const ::java::lang::String &);
            static JArray< CompiledAutomaton$AUTOMATON_TYPE > values();
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
          extern PyTypeObject PY_TYPE(CompiledAutomaton$AUTOMATON_TYPE);

          class t_CompiledAutomaton$AUTOMATON_TYPE {
          public:
            PyObject_HEAD
            CompiledAutomaton$AUTOMATON_TYPE object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CompiledAutomaton$AUTOMATON_TYPE *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CompiledAutomaton$AUTOMATON_TYPE&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CompiledAutomaton$AUTOMATON_TYPE&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
