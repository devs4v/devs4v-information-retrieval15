#ifndef org_apache_lucene_util_automaton_Automaton_H
#define org_apache_lucene_util_automaton_Automaton_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class State;
          class Transition;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
    class List;
    class Collection;
  }
  namespace lang {
    class String;
    class Cloneable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class Automaton : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_931bc953,
              mid_clearNumberedStates_54c6a166,
              mid_clone_9b0d5999,
              mid_complement_9b0d5999,
              mid_concatenate_7aca8e1f,
              mid_concatenate_3449867a,
              mid_determinize_54c6a166,
              mid_equals_290588e2,
              mid_expandSingleton_54c6a166,
              mid_getAcceptStates_03e99967,
              mid_getInfo_846352c3,
              mid_getInitialState_0b46b0b2,
              mid_getNumberOfStates_54c6a179,
              mid_getNumberOfTransitions_54c6a179,
              mid_getNumberedStates_b3b8db1a,
              mid_getSingleton_14c7b5c5,
              mid_getSortedTransitions_14b6b645,
              mid_hashCode_54c6a179,
              mid_intersection_7aca8e1f,
              mid_isDeterministic_54c6a16a,
              mid_isEmptyString_54c6a16a,
              mid_minimize_7aca8e1f,
              mid_minus_7aca8e1f,
              mid_optional_9b0d5999,
              mid_reduce_54c6a166,
              mid_removeDeadTransitions_54c6a166,
              mid_repeat_9b0d5999,
              mid_repeat_d5b8a843,
              mid_repeat_42dcb2dd,
              mid_restoreInvariant_54c6a166,
              mid_setAllowMutate_bb0c7673,
              mid_setDeterministic_bb0c767f,
              mid_setInfo_290588ee,
              mid_setMinimization_39c7bd3c,
              mid_setMinimizeAlways_bb0c767f,
              mid_setNumberedStates_77bb44b7,
              mid_setNumberedStates_4364f077,
              mid_subsetOf_fc7cf398,
              mid_toDot_14c7b5c5,
              mid_toString_14c7b5c5,
              mid_union_40d33194,
              mid_union_7aca8e1f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Automaton(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Automaton(const Automaton& obj) : ::java::lang::Object(obj) {}

            static jint MINIMIZE_HOPCROFT;

            Automaton();
            Automaton(const ::org::apache::lucene::util::automaton::State &);

            void clearNumberedStates() const;
            Automaton clone() const;
            Automaton complement() const;
            Automaton concatenate(const Automaton &) const;
            static Automaton concatenate(const ::java::util::List &);
            void determinize() const;
            jboolean equals(const ::java::lang::Object &) const;
            void expandSingleton() const;
            ::java::util::Set getAcceptStates() const;
            ::java::lang::Object getInfo() const;
            ::org::apache::lucene::util::automaton::State getInitialState() const;
            jint getNumberOfStates() const;
            jint getNumberOfTransitions() const;
            JArray< ::org::apache::lucene::util::automaton::State > getNumberedStates() const;
            ::java::lang::String getSingleton() const;
            JArray< JArray< ::org::apache::lucene::util::automaton::Transition > > getSortedTransitions() const;
            jint hashCode() const;
            Automaton intersection(const Automaton &) const;
            jboolean isDeterministic() const;
            jboolean isEmptyString() const;
            static Automaton minimize(const Automaton &);
            Automaton minus(const Automaton &) const;
            Automaton optional() const;
            void reduce() const;
            void removeDeadTransitions() const;
            Automaton repeat() const;
            Automaton repeat(jint) const;
            Automaton repeat(jint, jint) const;
            void restoreInvariant() const;
            static jboolean setAllowMutate(jboolean);
            void setDeterministic(jboolean) const;
            void setInfo(const ::java::lang::Object &) const;
            static void setMinimization(jint);
            static void setMinimizeAlways(jboolean);
            void setNumberedStates(const JArray< ::org::apache::lucene::util::automaton::State > &) const;
            void setNumberedStates(const JArray< ::org::apache::lucene::util::automaton::State > &, jint) const;
            jboolean subsetOf(const Automaton &) const;
            ::java::lang::String toDot() const;
            ::java::lang::String toString() const;
            static Automaton union$(const ::java::util::Collection &);
            Automaton union$(const Automaton &) const;
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
          extern PyTypeObject PY_TYPE(Automaton);

          class t_Automaton {
          public:
            PyObject_HEAD
            Automaton object;
            static PyObject *wrap_Object(const Automaton&);
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
