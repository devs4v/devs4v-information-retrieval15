#ifndef org_apache_lucene_util_automaton_BasicAutomata_H
#define org_apache_lucene_util_automaton_BasicAutomata_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
        }
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class IllegalArgumentException;
    class String;
    class Class;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class BasicAutomata : public ::java::lang::Object {
          public:
            enum {
              mid_makeAnyChar_9b0d5999,
              mid_makeAnyString_9b0d5999,
              mid_makeChar_d5b8a843,
              mid_makeCharRange_42dcb2dd,
              mid_makeEmpty_9b0d5999,
              mid_makeEmptyString_9b0d5999,
              mid_makeInterval_86ba9f2f,
              mid_makeString_af13056f,
              mid_makeString_1c95d487,
              mid_makeStringUnion_40d33194,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasicAutomata(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BasicAutomata(const BasicAutomata& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::util::automaton::Automaton makeAnyChar();
            static ::org::apache::lucene::util::automaton::Automaton makeAnyString();
            static ::org::apache::lucene::util::automaton::Automaton makeChar(jint);
            static ::org::apache::lucene::util::automaton::Automaton makeCharRange(jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeEmpty();
            static ::org::apache::lucene::util::automaton::Automaton makeEmptyString();
            static ::org::apache::lucene::util::automaton::Automaton makeInterval(jint, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeString(const ::java::lang::String &);
            static ::org::apache::lucene::util::automaton::Automaton makeString(const JArray< jint > &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeStringUnion(const ::java::util::Collection &);
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
          extern PyTypeObject PY_TYPE(BasicAutomata);

          class t_BasicAutomata {
          public:
            PyObject_HEAD
            BasicAutomata object;
            static PyObject *wrap_Object(const BasicAutomata&);
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
