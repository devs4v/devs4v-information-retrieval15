#ifndef org_apache_lucene_util_automaton_StatePair_H
#define org_apache_lucene_util_automaton_StatePair_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class State;
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

          class StatePair : public ::java::lang::Object {
          public:
            enum {
              mid_init$_e6e20846,
              mid_equals_290588e2,
              mid_getFirstState_0b46b0b2,
              mid_getSecondState_0b46b0b2,
              mid_hashCode_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StatePair(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            StatePair(const StatePair& obj) : ::java::lang::Object(obj) {}

            StatePair(const ::org::apache::lucene::util::automaton::State &, const ::org::apache::lucene::util::automaton::State &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::automaton::State getFirstState() const;
            ::org::apache::lucene::util::automaton::State getSecondState() const;
            jint hashCode() const;
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
          extern PyTypeObject PY_TYPE(StatePair);

          class t_StatePair {
          public:
            PyObject_HEAD
            StatePair object;
            static PyObject *wrap_Object(const StatePair&);
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
