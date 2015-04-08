#ifndef org_apache_lucene_search_AutomatonQuery_H
#define org_apache_lucene_search_AutomatonQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
        }
      }
      namespace index {
        class Term;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class AutomatonQuery : public ::org::apache::lucene::search::MultiTermQuery {
        public:
          enum {
            mid_init$_1b49cba7,
            mid_equals_290588e2,
            mid_getAutomaton_9b0d5999,
            mid_hashCode_54c6a179,
            mid_toString_97a5258f,
            mid_getTermsEnum_67b5a29a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AutomatonQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          AutomatonQuery(const AutomatonQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

          AutomatonQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::util::automaton::Automaton &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::automaton::Automaton getAutomaton() const;
          jint hashCode() const;
          ::java::lang::String toString(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(AutomatonQuery);

        class t_AutomatonQuery {
        public:
          PyObject_HEAD
          AutomatonQuery object;
          static PyObject *wrap_Object(const AutomatonQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
