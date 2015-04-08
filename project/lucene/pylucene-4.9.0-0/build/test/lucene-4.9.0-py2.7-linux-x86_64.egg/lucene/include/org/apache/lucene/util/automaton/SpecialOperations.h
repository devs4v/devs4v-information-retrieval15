#ifndef org_apache_lucene_util_automaton_SpecialOperations_H
#define org_apache_lucene_util_automaton_SpecialOperations_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        namespace automaton {
          class State;
          class Automaton;
        }
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class SpecialOperations : public ::java::lang::Object {
          public:
            enum {
              mid_getCommonPrefix_c2342f4b,
              mid_getCommonPrefixBytesRef_b889220f,
              mid_getCommonSuffix_c2342f4b,
              mid_getCommonSuffixBytesRef_b889220f,
              mid_getFiniteStrings_4e50ce8f,
              mid_isFinite_fc7cf398,
              mid_reverse_f8f6971d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpecialOperations(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpecialOperations(const SpecialOperations& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String getCommonPrefix(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::BytesRef getCommonPrefixBytesRef(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::java::lang::String getCommonSuffix(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::BytesRef getCommonSuffixBytesRef(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::java::util::Set getFiniteStrings(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static jboolean isFinite(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::java::util::Set reverse(const ::org::apache::lucene::util::automaton::Automaton &);
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
          extern PyTypeObject PY_TYPE(SpecialOperations);

          class t_SpecialOperations {
          public:
            PyObject_HEAD
            SpecialOperations object;
            static PyObject *wrap_Object(const SpecialOperations&);
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
