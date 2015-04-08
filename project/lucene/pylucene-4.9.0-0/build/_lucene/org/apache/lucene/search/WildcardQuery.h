#ifndef org_apache_lucene_search_WildcardQuery_H
#define org_apache_lucene_search_WildcardQuery_H

#include "org/apache/lucene/search/AutomatonQuery.h"

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
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class WildcardQuery : public ::org::apache::lucene::search::AutomatonQuery {
        public:
          enum {
            mid_init$_7eca6a81,
            mid_getTerm_0f71f314,
            mid_toAutomaton_d07301d8,
            mid_toString_97a5258f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WildcardQuery(jobject obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          WildcardQuery(const WildcardQuery& obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {}

          static jchar WILDCARD_CHAR;
          static jchar WILDCARD_ESCAPE;
          static jchar WILDCARD_STRING;

          WildcardQuery(const ::org::apache::lucene::index::Term &);

          ::org::apache::lucene::index::Term getTerm() const;
          static ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::index::Term &);
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
        extern PyTypeObject PY_TYPE(WildcardQuery);

        class t_WildcardQuery {
        public:
          PyObject_HEAD
          WildcardQuery object;
          static PyObject *wrap_Object(const WildcardQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
