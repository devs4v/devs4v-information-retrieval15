#ifndef org_apache_lucene_queryparser_surround_query_SimpleTerm$MatchingTermVisitor_H
#define org_apache_lucene_queryparser_surround_query_SimpleTerm$MatchingTermVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
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
      namespace queryparser {
        namespace surround {
          namespace query {

            class SimpleTerm$MatchingTermVisitor : public ::java::lang::Object {
            public:
              enum {
                mid_visitMatchingTerm_7eca6a81,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SimpleTerm$MatchingTermVisitor(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              SimpleTerm$MatchingTermVisitor(const SimpleTerm$MatchingTermVisitor& obj) : ::java::lang::Object(obj) {}

              void visitMatchingTerm(const ::org::apache::lucene::index::Term &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            extern PyTypeObject PY_TYPE(SimpleTerm$MatchingTermVisitor);

            class t_SimpleTerm$MatchingTermVisitor {
            public:
              PyObject_HEAD
              SimpleTerm$MatchingTermVisitor object;
              static PyObject *wrap_Object(const SimpleTerm$MatchingTermVisitor&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
