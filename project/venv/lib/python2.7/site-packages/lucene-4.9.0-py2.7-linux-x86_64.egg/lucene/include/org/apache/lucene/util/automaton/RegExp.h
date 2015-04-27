#ifndef org_apache_lucene_util_automaton_RegExp_H
#define org_apache_lucene_util_automaton_RegExp_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class AutomatonProvider;
          class Automaton;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class IllegalArgumentException;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class RegExp : public ::java::lang::Object {
          public:
            enum {
              mid_init$_5fdc3f48,
              mid_init$_6e53ccc6,
              mid_getIdentifiers_03e99967,
              mid_setAllowMutate_bb0c7673,
              mid_toAutomaton_9b0d5999,
              mid_toAutomaton_ab3fd6f0,
              mid_toAutomaton_5130eb3f,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RegExp(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            RegExp(const RegExp& obj) : ::java::lang::Object(obj) {}

            static jint ALL;
            static jint ANYSTRING;
            static jint AUTOMATON;
            static jint COMPLEMENT;
            static jint EMPTY;
            static jint INTERSECTION;
            static jint INTERVAL;
            static jint NONE;

            RegExp(const ::java::lang::String &);
            RegExp(const ::java::lang::String &, jint);

            ::java::util::Set getIdentifiers() const;
            jboolean setAllowMutate(jboolean) const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton() const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::util::automaton::AutomatonProvider &) const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::java::util::Map &) const;
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
          extern PyTypeObject PY_TYPE(RegExp);

          class t_RegExp {
          public:
            PyObject_HEAD
            RegExp object;
            static PyObject *wrap_Object(const RegExp&);
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
