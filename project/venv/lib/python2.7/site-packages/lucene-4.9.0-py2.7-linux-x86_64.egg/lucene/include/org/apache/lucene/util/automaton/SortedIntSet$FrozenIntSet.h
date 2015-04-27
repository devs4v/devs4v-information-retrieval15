#ifndef org_apache_lucene_util_automaton_SortedIntSet$FrozenIntSet_H
#define org_apache_lucene_util_automaton_SortedIntSet$FrozenIntSet_H

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

          class SortedIntSet$FrozenIntSet : public ::java::lang::Object {
          public:
            enum {
              mid_init$_8b58b7f9,
              mid_init$_8bb61283,
              mid_equals_290588e2,
              mid_hashCode_54c6a179,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedIntSet$FrozenIntSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SortedIntSet$FrozenIntSet(const SortedIntSet$FrozenIntSet& obj) : ::java::lang::Object(obj) {}

            SortedIntSet$FrozenIntSet(jint, const ::org::apache::lucene::util::automaton::State &);
            SortedIntSet$FrozenIntSet(const JArray< jint > &, jint, const ::org::apache::lucene::util::automaton::State &);

            jboolean equals(const ::java::lang::Object &) const;
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
          extern PyTypeObject PY_TYPE(SortedIntSet$FrozenIntSet);

          class t_SortedIntSet$FrozenIntSet {
          public:
            PyObject_HEAD
            SortedIntSet$FrozenIntSet object;
            static PyObject *wrap_Object(const SortedIntSet$FrozenIntSet&);
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
