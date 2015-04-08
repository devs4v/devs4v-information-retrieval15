#ifndef org_apache_lucene_util_automaton_State_H
#define org_apache_lucene_util_automaton_State_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Transition;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class Comparator;
  }
  namespace lang {
    class Comparable;
    class String;
    class Iterable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class State : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_addTransition_8209dac4,
              mid_compareTo_931bc94c,
              mid_getNumber_54c6a179,
              mid_getTransitions_0ab6fc38,
              mid_isAccept_54c6a16a,
              mid_numTransitions_54c6a179,
              mid_reduce_54c6a166,
              mid_setAccept_bb0c767f,
              mid_setTransitions_bc11dd38,
              mid_sortTransitions_6ffdd545,
              mid_step_efd54f68,
              mid_step_006cd2bb,
              mid_toString_14c7b5c5,
              mid_trimTransitionsArray_54c6a166,
              max_mid
            };

            enum {
              fid_numTransitions,
              fid_transitionsArray,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit State(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            State(const State& obj) : ::java::lang::Object(obj) {}

            jint _get_numTransitions() const;
            void _set_numTransitions(jint) const;
            JArray< ::org::apache::lucene::util::automaton::Transition > _get_transitionsArray() const;
            void _set_transitionsArray(const JArray< ::org::apache::lucene::util::automaton::Transition > &) const;

            State();

            void addTransition(const ::org::apache::lucene::util::automaton::Transition &) const;
            jint compareTo(const State &) const;
            jint getNumber() const;
            ::java::lang::Iterable getTransitions() const;
            jboolean isAccept() const;
            jint numTransitions() const;
            void reduce() const;
            void setAccept(jboolean) const;
            void setTransitions(const JArray< ::org::apache::lucene::util::automaton::Transition > &) const;
            void sortTransitions(const ::java::util::Comparator &) const;
            State step(jint) const;
            void step(jint, const ::java::util::Collection &) const;
            ::java::lang::String toString() const;
            void trimTransitionsArray() const;
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
          extern PyTypeObject PY_TYPE(State);

          class t_State {
          public:
            PyObject_HEAD
            State object;
            static PyObject *wrap_Object(const State&);
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
