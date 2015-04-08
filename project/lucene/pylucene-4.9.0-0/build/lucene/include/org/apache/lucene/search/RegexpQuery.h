#ifndef org_apache_lucene_search_RegexpQuery_H
#define org_apache_lucene_search_RegexpQuery_H

#include "org/apache/lucene/search/AutomatonQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class AutomatonProvider;
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

        class RegexpQuery : public ::org::apache::lucene::search::AutomatonQuery {
        public:
          enum {
            mid_init$_7eca6a81,
            mid_init$_05555589,
            mid_init$_66cf96d2,
            mid_toString_97a5258f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RegexpQuery(jobject obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          RegexpQuery(const RegexpQuery& obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {}

          RegexpQuery(const ::org::apache::lucene::index::Term &);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::util::automaton::AutomatonProvider &);

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
        extern PyTypeObject PY_TYPE(RegexpQuery);

        class t_RegexpQuery {
        public:
          PyObject_HEAD
          RegexpQuery object;
          static PyObject *wrap_Object(const RegexpQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
