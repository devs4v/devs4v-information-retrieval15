#ifndef org_apache_lucene_util_automaton_Transition_H
#define org_apache_lucene_util_automaton_Transition_H

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
    class Cloneable;
    class String;
  }
  namespace util {
    class Comparator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class Transition : public ::java::lang::Object {
          public:
            enum {
              mid_init$_8b58b7f9,
              mid_init$_630ffcbb,
              mid_clone_09f0be81,
              mid_equals_290588e2,
              mid_getDest_0b46b0b2,
              mid_getMax_54c6a179,
              mid_getMin_54c6a179,
              mid_hashCode_54c6a179,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Transition(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Transition(const Transition& obj) : ::java::lang::Object(obj) {}

            static ::java::util::Comparator *CompareByDestThenMinMax;
            static ::java::util::Comparator *CompareByMinMaxThenDest;

            Transition(jint, const ::org::apache::lucene::util::automaton::State &);
            Transition(jint, jint, const ::org::apache::lucene::util::automaton::State &);

            Transition clone() const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::automaton::State getDest() const;
            jint getMax() const;
            jint getMin() const;
            jint hashCode() const;
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
          extern PyTypeObject PY_TYPE(Transition);

          class t_Transition {
          public:
            PyObject_HEAD
            Transition object;
            static PyObject *wrap_Object(const Transition&);
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
