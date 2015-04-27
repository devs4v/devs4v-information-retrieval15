#ifndef org_apache_lucene_search_suggest_analyzing_FSTUtil_H
#define org_apache_lucene_search_suggest_analyzing_FSTUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
        }
        namespace fst {
          class FST;
        }
      }
      namespace search {
        namespace suggest {
          namespace analyzing {
            class FSTUtil$Path;
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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
      namespace search {
        namespace suggest {
          namespace analyzing {

            class FSTUtil : public ::java::lang::Object {
            public:
              enum {
                mid_intersectPrefixPaths_2ebdda9a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FSTUtil(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FSTUtil(const FSTUtil& obj) : ::java::lang::Object(obj) {}

              static ::java::util::List intersectPrefixPaths(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::fst::FST &);
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
      namespace search {
        namespace suggest {
          namespace analyzing {
            extern PyTypeObject PY_TYPE(FSTUtil);

            class t_FSTUtil {
            public:
              PyObject_HEAD
              FSTUtil object;
              static PyObject *wrap_Object(const FSTUtil&);
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
