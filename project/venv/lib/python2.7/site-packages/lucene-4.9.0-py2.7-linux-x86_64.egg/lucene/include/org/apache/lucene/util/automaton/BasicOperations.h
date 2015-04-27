#ifndef org_apache_lucene_util_automaton_BasicOperations_H
#define org_apache_lucene_util_automaton_BasicOperations_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class StatePair;
          class Automaton;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Collection;
  }
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

          class BasicOperations : public ::java::lang::Object {
          public:
            enum {
              mid_addEpsilons_c3f38587,
              mid_complement_7aca8e1f,
              mid_concatenate_3449867a,
              mid_concatenate_fa852915,
              mid_determinize_fc7cf394,
              mid_intersection_fa852915,
              mid_isEmpty_fc7cf398,
              mid_isEmptyString_fc7cf398,
              mid_isTotal_fc7cf398,
              mid_minus_fa852915,
              mid_optional_7aca8e1f,
              mid_repeat_7aca8e1f,
              mid_repeat_df52766d,
              mid_repeat_6e1cfc6f,
              mid_run_b3a03722,
              mid_sameLanguage_7d21690e,
              mid_subsetOf_7d21690e,
              mid_union_40d33194,
              mid_union_fa852915,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasicOperations(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BasicOperations(const BasicOperations& obj) : ::java::lang::Object(obj) {}

            static void addEpsilons(const ::org::apache::lucene::util::automaton::Automaton &, const ::java::util::Collection &);
            static ::org::apache::lucene::util::automaton::Automaton complement(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton concatenate(const ::java::util::List &);
            static ::org::apache::lucene::util::automaton::Automaton concatenate(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static void determinize(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton intersection(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isEmpty(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isEmptyString(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isTotal(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton minus(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton optional(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &, jint, jint);
            static jboolean run(const ::org::apache::lucene::util::automaton::Automaton &, const ::java::lang::String &);
            static jboolean sameLanguage(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean subsetOf(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton union$(const ::java::util::Collection &);
            static ::org::apache::lucene::util::automaton::Automaton union$(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
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
          extern PyTypeObject PY_TYPE(BasicOperations);

          class t_BasicOperations {
          public:
            PyObject_HEAD
            BasicOperations object;
            static PyObject *wrap_Object(const BasicOperations&);
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
