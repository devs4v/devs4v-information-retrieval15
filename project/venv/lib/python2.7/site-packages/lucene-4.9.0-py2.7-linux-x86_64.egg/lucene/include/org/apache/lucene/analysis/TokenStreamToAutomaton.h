#ifndef org_apache_lucene_analysis_TokenStreamToAutomaton_H
#define org_apache_lucene_analysis_TokenStreamToAutomaton_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
        }
      }
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class TokenStreamToAutomaton : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_setPreservePositionIncrements_bb0c767f,
            mid_setUnicodeArcs_bb0c767f,
            mid_toAutomaton_6e59061f,
            mid_changeToken_21e43cb7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TokenStreamToAutomaton(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TokenStreamToAutomaton(const TokenStreamToAutomaton& obj) : ::java::lang::Object(obj) {}

          static jint HOLE;
          static jint POS_SEP;

          TokenStreamToAutomaton();

          void setPreservePositionIncrements(jboolean) const;
          void setUnicodeArcs(jboolean) const;
          ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::analysis::TokenStream &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyTypeObject PY_TYPE(TokenStreamToAutomaton);

        class t_TokenStreamToAutomaton {
        public:
          PyObject_HEAD
          TokenStreamToAutomaton object;
          static PyObject *wrap_Object(const TokenStreamToAutomaton&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
