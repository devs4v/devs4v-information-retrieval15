#ifndef org_apache_lucene_util_automaton_CompiledAutomaton_H
#define org_apache_lucene_util_automaton_CompiledAutomaton_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class ByteRunAutomaton;
          class CompiledAutomaton$AUTOMATON_TYPE;
          class Transition;
          class Automaton;
        }
        class BytesRef;
      }
      namespace index {
        class Terms;
        class TermsEnum;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Boolean;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class CompiledAutomaton : public ::java::lang::Object {
          public:
            enum {
              mid_init$_fc7cf394,
              mid_init$_3d57924d,
              mid_equals_290588e2,
              mid_floor_0991fadd,
              mid_getTermsEnum_fb3ac14e,
              mid_hashCode_54c6a179,
              mid_toDot_14c7b5c5,
              max_mid
            };

            enum {
              fid_commonSuffixRef,
              fid_finite,
              fid_runAutomaton,
              fid_sortedTransitions,
              fid_term,
              fid_type,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompiledAutomaton(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            CompiledAutomaton(const CompiledAutomaton& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::BytesRef _get_commonSuffixRef() const;
            ::java::lang::Boolean _get_finite() const;
            ::org::apache::lucene::util::automaton::ByteRunAutomaton _get_runAutomaton() const;
            JArray< JArray< ::org::apache::lucene::util::automaton::Transition > > _get_sortedTransitions() const;
            ::org::apache::lucene::util::BytesRef _get_term() const;
            ::org::apache::lucene::util::automaton::CompiledAutomaton$AUTOMATON_TYPE _get_type() const;

            CompiledAutomaton(const ::org::apache::lucene::util::automaton::Automaton &);
            CompiledAutomaton(const ::org::apache::lucene::util::automaton::Automaton &, const ::java::lang::Boolean &, jboolean);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BytesRef floor(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::index::TermsEnum getTermsEnum(const ::org::apache::lucene::index::Terms &) const;
            jint hashCode() const;
            ::java::lang::String toDot() const;
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
          extern PyTypeObject PY_TYPE(CompiledAutomaton);

          class t_CompiledAutomaton {
          public:
            PyObject_HEAD
            CompiledAutomaton object;
            static PyObject *wrap_Object(const CompiledAutomaton&);
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
